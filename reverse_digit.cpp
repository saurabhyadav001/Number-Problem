// #include<bits/stdc++.h>
// using namespace std;
// int rev(int num){
//     int temp, rem=0;
//     while(num!=0){
//         temp = num%10;
//          rem = rem*10 + temp;
//         num = num/10;
//     }
//     cout<<rem;
// }
// int main(){
//     int num = 98484;
//     rev(num);
// return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int rev(int num){
    int temp, rem = 0 ;
    while(num!=0){
        temp = num%10;
        rem = rem*10 + temp;
        num = num/10;
    }
    cout<<rem<<endl;
}
int main(){
    int num =38992;
    rev(num);

return 0;
}