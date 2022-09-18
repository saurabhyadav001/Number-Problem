#include<bits/stdc++.h>
using namespace std;
int main(){
   int n = 18;
   int sum =0;
   for(int i=1; i<=n; i++){
    if(n%i==0){
        sum = sum+i;
    }
   }
   sum = sum-n;
   if(sum>n){
    cout<<"abundant num"<<endl;
   }
   else cout<<"not abudant"<<endl;

    return 0;
}