// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int a=2 , b=6;     
//     cout<<pow(a,b);          // STL:::  TC: 0(logN).
// return 0;
// }


#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=5, b=3;
    int sum=1;
    for(int i=1 ; i<=b; i++){
       sum = sum*a;
    }
    cout<<sum;
return 0;
}