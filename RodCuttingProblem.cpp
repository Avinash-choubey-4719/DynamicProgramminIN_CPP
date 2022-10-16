#include<bits/stdc++.h>
using namespace std;

int max(int a, int b){
    return a>b?a:b;
}

int cutRod(int price[], int index, int n){
    if(index == 0){
        return n * price[0];
    }

    int notCut = cutRod(price, index - 1, n);
    int cut = INT_MIN;
    int rodLength = index + 1;

    if(rodLength <= n){
        cut = price[index] + cutRod(price, index, n - rodLength);
    }

    return max(cut, notCut);
}

int main(){
    int price[] = {1, 5, 8, 9, 10, 17, 17, 20};
    int index = 7;
    int n = 8;

    int result = cutRod(price, index, n);
    cout<<result<<endl;
    return 0;
}   