// Level 7: Loops (for, while) ---Repeat actions without rewriting code.
#include<bits/stdc++.h>
using namespace std;
int main(){

// 71)Print Numbers 1 to 10 (For Loop): Use a for loop to print numbers from 1 to 10.

// for(int i=1;i<=10;i++){
//     cout<<i<<endl;
// }

// 72)Print Numbers 1 to 10 (While Loop): Use a while loop to print numbers from 1 to 10.

// int i=1;
// while(i<=10){
//     cout<<i<<endl;
//     i++;
// }
////do while loop method
// do{
//     cout<<i<<endl;
//     i++;
// }while(i<=10);

// 73)Print "Hello" 3 Times: Use a loop to print "Hello" three times.

// for(int i=1;i<=3;i++){
//     cout<<"hello"<<endl;
// }

// 74)Countdown from 5 to 1: Use a loop to print numbers from 5 down to 1.

// for (int i=5; i>0;i--){
//     cout<<i<<endl;
// }

// 75)User-defined Repetitions: Ask the user for a number N. Then, print "Looping..." N times.

// int N;
// cout<<"Enter a number"<<endl;
// cin>>N;
// for(int i=1;i<=N;i++){
//     cout<<"Looping"<<endl;
// }

// 76)Even Numbers up to 20: Use a loop to print all even numbers from 1 up to 20 (i.e., 2, 4, ..., 20).

// for(int i=1;i<=10;i++){
//     cout<<2*i<<endl;
// }

// 77)Odd Numbers up to 19: Use a loop to print all odd numbers from 1 up to 19 (i.e., 1, 3, ..., 19).

// for(int i=0;i<10;i++){
//     cout<<2*i+1<<endl;
// }

// 78)Sum up to N: Ask the user for a number N. Calculate the sum of all numbers from 1 to N and print it.

// long long int N,sum=0;
// cout<<"Enter the number\n"<<endl;
// cin>>N;
// // cout<<(N*(N+1))/2;
// for(int i=1;i<=N;i++){
//  sum = sum+i;
// }
// cout<<sum;

// 79)User-defined Multiplication Table: Ask the user for a number. Print its multiplication table up to 10.

// int n;
// cout<<"Enter the number"<<endl;
// cin>>n;
// for(int i=1;i<=10;i++){
//     cout<<n<<"x"<<i<<"="<<i*n<<'\n';
// }

// 80)Factorial: Calculate the factorial of a number (e.g., 5! = 5*4*3*2*1). Ask the user for a non-negative integer and print its factorial.

// long long int n, fact=1;
// cout<<"Enter non negative interger\n";
// cin>>n;
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

// 81)Count Down with Message: Count down from 10 to 1, then print "Liftoff!".

// for(int i=10;i>0;i--){
//     cout<<i<<endl;
// }
// cout<<"LIFTOFF!";

// 82)Loop with a Step (0 to 20, by 2): Print numbers from 0 to 20, but only every second number (0, 2, 4, ..., 20).

// for(int i=0;i<=10;i++){
//     cout<<i*2<<'\n';
// }

// 83)Sum of Even Numbers up to N: Ask for N. Sum all even numbers from 1 to N.

// long long int N,sum=0, i=0;
// cout<<"Enter a number\n";
// cin>>N;
// // for(int i=0;i<=N;i=i+2){
// //     sum = sum + (i);
// // }
// while(i<=N){
//     sum = sum + i;
//     i = i+2;
// }
// cout<<sum;

// 84)Basic Data Validation - Positive Integer Input: Write a loop that repeatedly asks the user for a positive integer until valid input (number > 0) is received.

// int a;
// cout<<"Enter the number\n";
// cin>>a;
// for(int i=a;i<0;){
//     cout<<"You have entered negative number! Enter a positive number\n";
//     cin>>a;
//     i=a;
// }

// 85)Count Digits in a Number: Ask the user for an integer and count how many digits it has.

// long long a,i=0;
// cout<<"Enter a number\n";
// cin>>a;
// // while(a!=0){
// // a /= 10;
// // i++;
// // }
// //cout<<i
// //do while method
// // do{
// //     a /= 10;
// //     i++;
// // }while(a!=0);
// cout<<i;

// 86)Reverse a Number: Ask the user for an integer and print its digits in reverse order (e.g., 123 -> 321).

// long long N,b,d=0; //N =original number, b = remainder, d = reversed number
// cout<<"Enter the number\n";
// cin>>N;
// while(N!=0){
//     b = N%10;
//     cout<<b<<endl;
//     d = d*10+b;
//     N = N/10;
// }
// cout<<d<<'\n';

// long long N, TempN, sum=0;
// cout<<"Enter your number\n";
// cin>>N;
// while(N!=0){
//     TempN=N%10;
//     cout<<TempN<<endl;
//     sum = sum + TempN;
//     N = N/10;
// }
// cout<<"Sum of digits is = "<<sum;

// 88)Fibonacci Sequence (first N terms): Ask for a number N and print the first N terms of the Fibonacci sequence (0, 1, 1, 2, 3, ...).

// long long N,a=0,b=1,next;
// cout<<"Enter number of terms\n";
// cin>>N;
// if(N<=0){
//     cout<<"Number of terms should be positive"<<endl;
//     // return 1;
// }else{
// cout << "First " << N << " terms of Fibonacci sequence:\n";
// cout<<a<<endl<<b<<endl;
// }
// for(int i=3;i<=N;i++){
// next = a+b;
// cout<<next<<endl;
// a=b;
// b=next;
// }

// // 89)Prime Number Check: Ask the user for a number and determine if it's a prime number.

// long long n;
// bool isprime=true;
// cout<<"Enter the number\n";
// cin>>n;
// if(n<=1){
//     cout<<"Not a prime number\n";
// }else if(n==2){
//     cout<<"2 is a prime number";
// }
// else{
//     for(long long i=2;i<n;i++){
//         if(n%i==0){
//         cout<<n<<" is not a prime\n";
//         isprime = false;
//         break;
//         }else{
//         isprime = true;
//         }
//     }
//     if(isprime == true){
//     cout<<n<<" is a prime number";
// }
// }

// 90)Print Primes up to N: Ask for a number N and print all prime numbers up to N.

// long long n;
// bool isprime = true;
// cout<<"Enter the number\n";
// cin>>n;
// while(n<1){
//     cout<<"Terms can't be negative or zero. enter a positive non zero number\n";
//     cin>>n;
// }
// // cout<<"2\n";
// for(long long i=2;i<=n;i++){

//     for(long long j=2;j<i;j++){
//         if(i%j==0){
//             isprime=false;
//             break;
//         }else{
//             isprime=true;
//         }
//     }
//     if(isprime == true){
//         cout<<i<<endl;
//     }
// }

return 0;
}
