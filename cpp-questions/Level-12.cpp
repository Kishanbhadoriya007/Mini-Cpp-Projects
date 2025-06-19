// Level 12: Introduction to Recursion (The Second Bridge)
#include<bits/stdc++.h>
using namespace std;

// Q-146) Example: Countdown- Question: Write a recursive function to print numbers from N down to 1.

// void countdown(long N){        //Functions doesn't need to return value so we are using void instead of long
//     if(N<=1){
//         cout<<1;
//         return;
//     }//else {
//     //     cout<<N<<endl;
//     //     N=N-1;
//     // }
// // countdown(N);  
//      countdown(N-1);  //instead of using above else logic we can just Call function with N-1 (next number in sequence)
// }
// int main(){
//     long n;
//     cout<<"Enter the number to countdown from \n";
//     cin>>n;
//     countdown(n);
//     return 0;
// }

// Q-147) Write a recursive function to print numbers from 1 up to N.

// void countup(long N, long i){
//     if(N==0){
//         return;
//     }
//     cout<<"N = "<<N<<" i = "<<i<<endl;
//     cout<<i<<endl;
//     countup(N-1,i+1); 
// }
// int main(){
//     long n,i=1;
//     cout<<"Enter the number\n";
//     cin>>n;
//     countup(n,i);
//     return 0;
// }

// Q-148) Recursively calculate the sum of all integers from 1 to N.

// //original approach (my)
// // long sum(long N, long i, long s){
    
// //     // if(i==N+1){
// //     //     return s;
// //     // }
// //     // s=s+i;
// //     // return sum(N,i+1,s);

// //     
// // }

// //suggested approach, faster  with less variables
// long sum(long N){
//         if(N<=1){
//         return N;
//     }
//     return N + sum(N-1);
// }
// int main(){
//     long n,i=1,s=0;
//     cout<<"Enter the number you want sum upto \n";
//     cin>>n;
//     while(n<0){
//         cout<<"Number can't be smaller than 0\n";
//         cin>>n;
//     }
//     // cout<<sum(n,i,s);  //for original approach
//     cout<<sum(n);
//     return 0;
// }

// Q-149) Recursively calculate the factorial of a number N.

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

// Q-150) Recursively find the Nth Fibonacci number.

// long long fibonacci(long long n){
    
//     // long long i=0;
//     if(n<=1){
//         return n;
//     }
//     return fibonacci(n-1)+fibonacci(n-2);
// }

// int main(){
//     long long N;
//     cout<<"Enter the number upto you want fibonacci  number to \n";
//     cin>>N;
//     while(N<0){
//         cout<<"N can't be negative. Please try again \n";
//         cin>>N;
//     }
//     cout<<"The first "<<N<<" terms of Fibonacci series are "<<endl;
//     for(long long i=0; i<N;++i){
//         cout<<fibonacci(i)<<'\n';
//     }
//     return 0;
// }

// Q-151) Write a recursive function power(base, exp) to calculate base to the power of exp.

// long long exponent(long long b, int p){

//     if(p<=0){
//         return 1;
//     }
//     return b*exponent(b,p-1);
// }

// int main(){
//     long long b;
//     int p;
//     cout<<"Enter base \n";
//     cin>>b;
//     while(b<0){
//         cout<<"base can't be negative. Try again\n";
//         cin>>b;
//     }
//     cout<<"Enter power/exponent \n";
//     cin>>p;
//     while(p<0){
//         cout<<"Program not advanced enough, so exp/power can't be negative. Try again  \n";
//         cin>>p;
//     }
//     cout<<exponent(b,p);
//     return 0;
// }

// Q-152) Recursively print all elements of an array.

long print(long i){

}
int main(){
    long arr[10]= {11,23,34,45,56,67,78,89,90,0};

    return 0;
}



