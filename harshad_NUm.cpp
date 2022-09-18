// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int num = 82;
//     int temp = num;
//     int sum = 0;
//     while(temp!=0){
//         sum = sum+ temp%10;
//         temp = temp/10;
//     }
//     if(num%sum==0){
//         cout<<"Harshad Number"<<endl;
//     }
//     else{
//         cout<<"not harshad"<<endl;
//     }

// return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=81;
    int temp = n;
    int sum =0;
    while(temp!=0){
      sum = sum+ temp%10;
      temp = temp/10;
    }
    if(n%sum ==0){
        cout<<"harshad number"<<endl;
    }
    else cout<<"not harshad"<<endl;

return 0;
}