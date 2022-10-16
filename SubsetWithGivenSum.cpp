#include<bits/stdc++.h>
using namespace std;

bool isThereASubsetWithGivenSum(int set[], int n, int sum){
    if(sum == 0){
        return true;
    }

    if(n == 0){
        return false;
    }

    if(set[n - 1] > sum){
        return isThereASubsetWithGivenSum(set, n - 1, sum);    
    }

    else{
        return isThereASubsetWithGivenSum(set, n - 1, sum) || isThereASubsetWithGivenSum(set, n - 1, sum - set[n - 1]);
    }
}

int main(){
    int set[] = {1, 2, 3, 4, 5};
    int n = 5;

    if(isThereASubsetWithGivenSum(set, n, 100)){
        cout<<"yes, it is there"<<endl;
    }
    else{
        cout<<"no, it is not there"<<endl;
    }
    return 0;
}