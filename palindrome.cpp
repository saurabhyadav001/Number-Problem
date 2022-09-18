// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int num = 111222111;
//     int tem = num;
//     int digit, rem =0;
//     do{
//         digit = num%10;
//         rem = rem*10 + digit;
//         num = num/10;
        
//     }while(num!=0);
//     cout<<rem<<endl;
//     if(tem == rem) cout<<"palindrome number"<<endl;
//     else cout<<"not palindrome"<<endl;


// return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int num= 477456;
//     int temp = num;
//     int a, rev = 0;
//     while(num!=0){
//         a = num%10;
//         rev = rev*10 +a;
//         num = num/10;
//     }
//     cout<<rev;
//     if(temp == rev) cout<<"palindrome num";
//     else cout<<"not palindrome number"<<endl;

// return 0;
// }

//**************In a Given Range*************
#include<bits/stdc++.h>
using namespace std;
bool ispalindrome(int n){
    int rev = 0;
    int temp =n;
    while(temp >0){
        rev = rev*10 + temp%10;
        temp = temp/10;
    }
    if(n==rev) return true;
    return false;
}
int main(){
    int min = 100;
    int max = 150;
    for(int i=min; i<=max; i++){
        if(ispalindrome(i)){
            cout<<i<<" ";
        }
    }

    return 0;
}