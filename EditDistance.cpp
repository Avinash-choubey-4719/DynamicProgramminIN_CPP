#include<bits/stdc++.h>
using namespace std;

int min(int a, int b, int c){
    return a<b && a<c?a:b<c?b:c;
}

int editDistance(string str1, string str2, int m, int n){
    if(n == 0){
        return m;
    }

    if(m == 0){
        return n;
    }

    if(str1[m - 1] == str2[n - 1]){
        return editDistance(str1, str2, m - 1, n - 1);
    }

    else{
        return 1 + min(editDistance(str1, str2, m - 1, n), editDistance(str1, str2, m, n - 1), editDistance(str1, str2, m - 1, n - 1));
    }
}

int main(){
    string str1 = "geeks";
    string str2 = "geseks";
    int result = editDistance(str1, str2, str1.length(), str2.length());

    cout<<result<<endl;
    return 0;
}