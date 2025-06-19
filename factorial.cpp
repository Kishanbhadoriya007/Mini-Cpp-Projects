#include<bits/stdc++.h>
using namespace std;

/**RECURSIVE WAY */

// // Q-149) Recursively calculate the factorial of a number N.

// long long fact(long long n){
//     if(n<=1){
//         return 1;
//     }
//     return n*fact(n-1);
// }
// int main(){
//     long long N;
//     cout<<"Enter the number you want factorial of \n";
//     cin>>N;
//     cout<<fact(N);
//     return 0;
// }

/**CLASSIC LOOP METHOD */

// 80)Factorial: Calculate the factorial of a number (e.g., 5! = 5*4*3*2*1). Ask the user for a non-negative integer and print its factorial.

// long long int n, fact=1;
// cout<<"Enter non negative interger\n";
// cin>>n;
// while(n<0){
// cout<<"n can't be smaller than 0. Enter new n \n";
// cin>>n;
// }
// for(int i=1;i<=n;i++){
//     fact = fact*i;
// }
// cout<<fact;

// long long int n, i=1,fact=1;
// cout<<"Enter the number\n";
// cin>>n;
// while(i<=n){
//     fact = fact*i;
//     i++;
// }
// cout<<fact;


/**FUNCTION METHOD */

// 116)Function for Factorial: Encapsulate the factorial logic (from Level 7) into a function calculate_factorial(n) that takes an integer n and returns its factorial.

// long long factorial(long long n){
//     long long fact=1;
//     long long i=1;
//     //For loop logic
//     // for (long long i=1;i<=n;i++){      
//     //     fact=fact*i;
//     // }
//     //while loop logic
//     // while(i<=n){
//     //     fact =fact*i;
//     //     i++;
//     // }
//     //classic Mathematical factorial logic
//     for(long long i=n;i>0;i--){
//         fact = fact*i;
//     }
//     return fact;
// }

// int main(){
//     long long n;
//     cout<<"Enter the number you want factorial of\n";
//     cin>>n;
//         while(n<0){
//         cout<<"Number can't be negative\n";
//         cin>>n;
//     }
//     cout<<"The factorial of "<<n<<" is = "<<factorial(n);