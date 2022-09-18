//********************************************* WAP to check Prime no.*************************************
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     bool is_prime = true;
//     cout << "enter a number" << endl;
//     cin >> n;
//     if (n == 0 || n == 1)
//     {
//         is_prime = false;
//     }
//     for (int i = 2; i < n / 2; i++)
//     {
//         if (n % i == 0)
//         {
//             is_prime = false;
//             break;
//         }
//     }
//     if (is_prime)
//     {
//         cout << n << " is a prime number" << endl;
//     }
//     else
//     {
//         cout << n << " is not a prime number" << endl;
//     }
// }

////*************************************************Even /ODD******************************************

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     // int i = 11;
//     int i;
//     cout << "enter the number" << endl;
//     cin >> i;
//     if (i % 2 == 0)
//     {
//         cout << i << " is"
//              << " even number.." << endl;
//     }
//     else
//     {
//         cout << "Odd number" << endl;
//     }
// }

// *********************************************Palindrome number***************************************

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int num, n, digit, rev = 0;
//     cout << "enter the number" << endl;
//     cin >> num;
//     n = num;
//     do
//     {
//         digit = num % 10;
//         rev = (rev * 10) + digit;
//         num = num / 10;
//     } while (num != 0);
//     // return 0;
//     cout<<"reverse is: " << rev;
//     if(n == rev){
//         cout<<"number is palindrome"<<endl;
//     }
//     else{
//         cout<<"number is not a palindrome"<<endl;
//     }
//     return 0;
// }

//***************************Program to Print Table of '5'**********************
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     for (int i = 1; i <= 10; i++)
//     {
//         cout << (i * 5);
//         cout << endl;
//     }
// }

//**********************Arm-Strong Number********************************************
// #include <iostream>
// #include <cmath>
// using namespace std;
// int main()
// {
//     int num, n, remainder, result = 0;
//     cout << "enter a three digit numbers" << endl;
//     cin >> num;
//     n = num;
//     while (n != 0)
//     {
//         remainder = n % 10;
//         result = result + remainder * remainder * remainder;
//         n = n / 10;
//     }
//     if (result == num)
//     {
//         cout << num << " is an armstrong number" << endl;
//     }
//     else
//     {
//         cout << num << " is not an armstrong number" << endl;
//     }
// }

//******************************************Check VOWEL/ CONSONENT ********************************
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     char c;
//     bool isLowecaseVowel, isUppercaseVowel;
//     cout << "enter an alphabet" << endl;
//     cin >> c;
//     isLowecaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
//     isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

//     if (!isalpha(c))
//         cout << "Non alphabet" << endl;
//     else if (isLowecaseVowel || isUppercaseVowel)
//         cout << c << "  is a vowel" << endl;
//     else
//     {
//         cout << c << " is consonant" << endl;
//     }
// }

//***************************SUM OF NATURAL NUMBERS*****************
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n, sum = 0;
//     cout << "enter an integer" << endl;
//     cin >> n;
//     for (int i = 0; i <= n; i++)
//     {
//         sum = sum + i;
//     }
//     cout << "sum is : " << sum;
//     return 0;
// }

//*******************Reverse a String********************
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string str = "saurabh yadav";
//     reverse(str.begin(), str.end());
//     cout << str << endl;
// }(

//*******************************************Fibonacci-Series*********************

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n, term1 = 0, term2 = 1, nextterm = 0;
//     cout << "enter the number of terms of fibonacci: " << endl;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         if (i == 1)
//         {
//             cout << term1 << " ";
//             continue;
//         }
//         if (i == 2)
//         {
//             cout << term2 << " ";
//             continue;
//         }
//         nextterm = term1 + term2;
//         term1 = term2;
//         term2 = nextterm;

//         cout << nextterm << " ";
//     }
//     return 0;
// }

//***************************************** SWAPPING -- Programs ***************************

// #include <bits/stdc++.h>
// using namespace std;
// int main()                     //usign temp variable...
// {
//     int a = 5, b = 10;
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
//     cout << a << " " << b << endl;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a = 5, b = 10;             //swap without using temp var..
//     a = a + b;
//     b = a - b;
//     a = a - b;
//     cout << a << " " << b << endl;
// }

//************************Add two numbers without using (+) Arihtmetic operator..

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a = 5, b = 10;
//     for (int i = 0; i < b; i++)
//     {
//         a++;
//     }
//     cout << a;
// }
