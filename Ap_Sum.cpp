// #include<bits/stdc++.h>
// using namespace std;
// float ap(float a, float d, int n){
//     float sum = n/2 *( 2.0*a +(n-1)*d);
//     return sum;
// }
// int main(){
//     float a = 1.5, n=5, d=2.0;
//     cout<<"ap is : "<<ap(a,n,d)<<endl;

// return 0;
// }

#include <bits/stdc++.h>
using namespace std;
float SumofGP(float a, float r, int n)
{
  float sum = a * (pow(r, n) - 1) / (r - 1);
  return sum;
}
int main()
{
  float a = 2; 
  float r = 2; 
  int n = 4; 
  cout << "Sum of GP Series is "<<SumofGP(a, r, n);
  return 0;
}