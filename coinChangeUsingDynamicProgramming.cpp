#include<bits/stdc++.h>
using namespace std;

 int findNumberOfWays(int set[], int n, int sum){
    int result[sum + 1][n], x, y;

    for(int i = 0;i<n;i++){
        result[0][i] = 1;
    }

    for(int i = 1;i<sum + 1;i++){
        for(int j = 0;j<n;j++){
           if(set[j] <= i){
                x = result[i - set[j]][j];
           }
           else{
            x = 0;
           }

           if(j >= 1){
            y = result[i][j - 1];
           }
           else{
            y = 0;
           }

           result[i][j] = x + y;
        }
    }

    return result[sum][n - 1];
 }

int main(){
    int set[] = {1, 2, 3};
    int n = 3;
    int sum = 4;
    int result = findNumberOfWays(set, n ,sum);
    cout<<result<<endl;
    return 0;
}