#include<bits/stdc++.h>
using namespace std;

int findNumberOfWays(int set[], int n, int sum){
    if(sum == 0){
        return 1;
    }

    if(n == 0){
        return 0;
    }

    return findNumberOfWays(set, n - 1, sum) || findNumberOfWays(set, n - 1, sum - set[n -1]);
}

int main(){
    int set[] = {1, 2, 3, 4, 5};
    int n = 5;

    int result = findNumberOfWays(set, n, 5);
    cout<<result<<endl;
    return 0;
}