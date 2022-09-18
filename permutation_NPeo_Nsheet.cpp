#include<bits/stdc++.h>   //Permutations in which N people can occupy R seats
using namespace std;
int factorial(int a){
    int sum = 1;
    for(int i=1; i<=a; i++){
        sum = sum*i;
    }
    return sum;
}

int main(){
    int a = 6, b = 4;
    int num = factorial(a);
    int difference= factorial(a-b);
    cout<<num /difference;
    
return 0;
}