// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     if(n==0){
//         cout<<0;
//     }
//     else{
//         int last = 1;
//         int secondlast = 0;
//         cout<<secondlast <<" "<<last<<" ";
//         int cur;
//         for(int i=2; i<=n; i++){
//         cur = last + secondlast;
//         secondlast = last;
//         last = cur;
//         cout<<cur<<" ";
//     }
//     }
// return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 10;
    if(n==0) cout<<0;
    else{
        int cur;
        int last =1 , second_last = 0;
        cout<<second_last<<" "<<last<<" ";
        for(int i=2; i<n; i++){
           cur = last + second_last;
           second_last = last;
           last = cur;
           cout<<cur<<" ";
        }
    }

return 0;
}