// #include<bits/stdc++.h>
// using namespace std;
// int factorial(int n){
//     int fact =1;
//     for(int i=1; i<=n; i++){
//         fact = fact*i;
//     }
//     return fact;
// }
// int strong_num(int num){
//     int sum =0;
//     while(num>0){                      //   TC: 0(n*m)
//         int digit = num%10;
//         sum = sum + factorial(digit);
//         num = num/10;
//     }
//     return sum;
// }
// int main(){
//     int num = 144;
//     int ans = strong_num(num);
//     if(ans == num && num !=0){
//         cout<<"yes"<<endl;
//     }
//     else cout<<"No"<<endl;
// }
#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
    int sum1 =1;
    for(int i=1; i<=n; i++){
        sum1 = sum1*i;
    }
    return sum1;
}
int strong_num(int num){         
    int ans =0;
    while(num>0){
    int rem = num%10;
    int ans = ans+ factorial(rem);
    num = num/10;
    }
}
int main(){
    int num =145;
    int result = strong_num(num);
    if(result== num && num!=0  ){
        cout<<"strong number"<<endl;
    }
    else{
        cout<<"not strong";
    }

return 0;
}