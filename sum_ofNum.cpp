#include<bits/stdc++.h>
using namespace std;
int main(){
    int num = 12571;
    int sum=0;
    int n1;
    while(num!=0){
        n1 = num%10;
        sum = sum + n1;
        num = num/10;
    }
    cout<<sum;


return 0;
}