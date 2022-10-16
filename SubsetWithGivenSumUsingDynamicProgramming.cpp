#include<bits/stdc++.h>
using namespace std;

int result[100][100];

int isThereASubsetWithGivenSum(int set[], int n, int sum){
    if(sum == 0){
        return 1;
    }

    if(n == 0){
        return 0;
    }

    if(result[n - 1][sum] != -1){
        return result[n - 1][sum];
    }

    else{
        if(set[n - 1] > sum){
            return result[n - 1][sum] = isThereASubsetWithGivenSum(set, n - 1, sum);
        }

        else{
            return result[n - 1][sum] = isThereASubsetWithGivenSum(set, n - 1, sum) || isThereASubsetWithGivenSum(set, n - 1, sum - set[n - 1]);
        }
    }
}

void initialize(){
    for(int i = 0;i<100;i++){
        for(int j = 0;j<100;j++){
            result[i][j] = -1;
        }
    }
}

int main(){
    int set[] = {1, 2, 3, 4, 5};
    int n = 5;

    initialize();

    if(isThereASubsetWithGivenSum(set, n, 25)){
        cout<<"yes, it is there"<<endl;
    }
    else{
        cout<<"no, it is not there"<<endl;
    }
    return 0;
}