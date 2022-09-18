// #include<iostream>
// using namespace std;
// bool isautomorphc(int num){
//      int sqt = num*num;
//      while(num >0){
//         if(num%10 != sqt%10)
//             return false;
//             num = num/10;
//             sqt = sqt/10;
        
//      }
//      return true;
// }
// int main(){
//     int num = 55;
//     if(isautomorphc(num)){
//         cout<<"True";
//     }
//     else  cout<<"not automorphics";
// return 0;
// }

#include<bits/stdc++.h>
using namespace std;
bool is_autom(int num){
    int sq = num*num;
    while(num >0){
    if(num%10 != sq%10)
        return false;
        num = num/10;
        sq = sq/10;
    
    }
    return true;
}
int main(){
    int num =25;
    if(is_autom(num))
    cout<<"it is"<<endl;
    else cout<<"not auto"<<endl;
    
}