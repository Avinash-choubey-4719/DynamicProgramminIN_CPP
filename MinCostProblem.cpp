#include<bits/stdc++.h>
using namespace std;

int min(int a, int b, int c){
    return b<a && b<c?b:a<c?a:c;
}

int findMinCost(int cost[3][3], int m, int n){
    for(int i = 1;i<3;i++){
        cost[0][i] = cost[0][i - 1];
    }

    for(int i = 1;i<3;i++){
        cost[i][0] = cost[i - 1][0];
    }

    for(int i = 1;i<3;i++){
        for(int j = 1;j<3;j++){
            cost[i][j] = cost[i][j] + min(cost[i - 1][j - 1], cost[i - 1][j], cost[i][j - 1]);
        }
    }

    return cost[m][n];
}

int main(){
    int cost[3][3] = {
        {1, 2, 3},
        {4, 5, 6}, 
        {7, 8, 9}
    };

    int result = findMinCost(cost, 2, 2);
    cout<<result<<endl;
    return 0;
}