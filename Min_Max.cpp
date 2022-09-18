// #include<bits/stdc++.h>
// using namespace std;
// void MinMax(int n){
//     int temp, maxi = INT_MIN , mini = INT16_MAX;
//     while(n!=0){
//         temp = n%10;
//         mini = min(mini, temp);
//         maxi = max(maxi,temp);
//         n = n/10;
//     }
//     cout<<mini<<" "<<maxi<<" ";
// }
// int main(){
//     int n = 23456;
//     MinMax(n);

// return 0;
// }

#include<bits/stdc++.h>
using namespace std;
void Min_max(int num){
    int mini = INT_MAX, maxi = INT16_MIN;
    int temp;
    while(num!=0){
        temp = num%10;
        mini = min(mini, temp);
        maxi = max(maxi, temp);
        num = num/10;

    }
    cout<<mini<<" "<<maxi<<" "<<endl;
}
int main(){
    int num = 94893;
    Min_max(num);
return 0;
}