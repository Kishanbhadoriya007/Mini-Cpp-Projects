#include<bits/stdc++.h>
using namespace std;

/**LOOP METHOD */
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

/*******RECURSION METHOD */

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
