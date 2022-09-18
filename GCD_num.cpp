// #include<iostream>
// using namespace std;
// int main(){
//     int a = 4, b=8;
//     int result;
//     for(int i=1; i<=min(a,b);i++){
//         if(a%i==0 && b%i==0){
//             result = i;
//         }
//     }
//     cout<<result;

// return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int gcd(int a, int b){
//     if(b==0) return a;      //HCF
//     return gcd(b,a%b);
// }
// int main(){
//     int a = 8, b=12;
//     cout<<gcd(a,b);

// return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
    if(b==0) return a;       //LCM  , using Euclean distance TC: 0(logqMin(a,b))
    return gcd(b,a%b);
}
int main(){
    int a = 8, b=12;
    int c = gcd(a,b);
    int lcm = (a*b)/c;
    cout<<lcm<<endl;

return 0;
}