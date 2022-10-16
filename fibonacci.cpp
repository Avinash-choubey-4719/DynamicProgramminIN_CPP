#include<bits/stdc++.h>
using namespace std;

#define MAX 100

int numbers[MAX];

void initialize(){
    for(int i = 0;i<MAX;i++){
        numbers[i] = -1;
    }
}

int fib(int n){
   if(numbers[n] == -1){
    if(n <= 1){
        numbers[n] = n;
    }
    else{
        numbers[n] = fib(n - 1) + fib(n - 2);
    }
   }
   return numbers[n];
}

int main(){
    initialize();
    int n = 40;
    int result = fib(n);
    cout<<result<<endl;
    return 0;
}