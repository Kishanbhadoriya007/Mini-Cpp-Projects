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

// void printvector(const vector<long> &vec, int index){    //Array just means vector in c++, array in C++ Const array,  Even in competitive programming questions array is taken as vector for c++
// if(index==vec.size()){
//     return;
// }
// cout<<vec[index]<<" ";
// printvector(vec,(index+1));
// }
// int main(){
//     vector<long> vec = {11,23,34,45,56,67,78,89,90,0};
//     // s= sizeof(arr)/sizeof(arr[0]);  //sizeof for array in c++ actually outputs total size in bits for that array, so we have to divide by 1 array element size to get real size/number of elements
//     printvector(vec,0);
//     return 0;
// }

// Q-153) Recursively sum all elements in an array.

// long sumvector(const vector<long> &vec,int index, long counter){
//     if(index==vec.size()){
//         // return index;     //this was a mistake/bug, 10 value was getting returned because of this, we need to return counter or summed up value here, as this is the last return statement, this actually returns value to main
//         return counter;
//     }
//     counter =  counter + vec[index];
//     // cout<<"element = "<<vec[index]<<endl<<"counter = "<<counter<<endl<<"index = "<<index<<endl;   //this was just for debugging
//     return sumvector(vec,index+1,counter);
// }
// int main(){
//     vector <long> vec = {11,22,33,44,55,66,77,88,99,0};
//     cout<<sumvector(vec,0,0);
//     return 0;
// }

// Q-154) Recursively reverse a std::string.

// string reversed(string str, int i, int l){ //this can work with void function too if we use & operand
// string reversed(string str, int i, int l){    //It works without returning value because through & operand we are directly editing the original string
//     if(i>=l){
//         return str;
//     }
//     swap(str[i],str[l]);
//     return reversed(str,i+1,l-1);
// }
// void reversed(string &str, int i, int l){    //It works without returning value because through & operand we are directly editing the original string
//     if(i>=l){
//         return;   //no longer need to return value
//     }
//     swap(str[i],str[l]);
//     reversed(str,i+1,l-1);  //no longer return needed
// }
// int main(){
//     string str;
//     cout<<"Enter the string - \n";
//     getline(cin, str);
// //  cout<<reversed(str,0,str.length()-1);
//     reversed(str,0,str.length()-1);
//     cout<<str;
// }

// Q-155) Recursively check if a string is a palindrome.

// string palindrome(const string str,string rstr, int i){
//     if(i==str.length()){
//     cout<<rstr<<endl;
//     return rstr;
// }
//     rstr = str[i]+rstr;
//     cout<<"rstr= " <<rstr<<endl;
//     return palindrome(str,rstr,i+1);
// }
// int main(){
// string str,reversedstr;
// cout<<"Enter the string - \n";
// getline(cin,str);
// reversedstr = palindrome(str,reversedstr,0);
// cout<<reversedstr<<endl;
// if(str==reversedstr){
// cout<<str<<" is a palindrome ";
// }else{
// cout<<str<<" is not a palindrome ";
// }
// }

/* boolean method, idiomatic method, more efficient */

// bool palindrome(const string str, int i, int l){    
//     if(i>=l){
//     return true;
//     }else if(str[i]!=str[l]){
//     return false;
// }
//     return palindrome(str,i+1,l-1);
// }
// int main(){
//     string str;
//     cout<<"Enter the string - \n";
//     getline(cin,str);
//     if(palindrome(str,0,str.length()-1)){
//         cout<<str<<" is a palindrome \n";
//     }else{
//         cout<<str<<" is not a palindrome \n";
//     }
//     return 0;
// }

// Q-156) Recursively count the digits in an integer.

// long countdigits(long long i, long counter){
//     if(i==0){
//         return counter;
//     }
//     i=i/10;
//     counter++;
//     return countdigits(i,counter);
// }
// int main(){
//     long long i;
//     cout<<"enter the number you wanna count digitis for \n";
//     cin>>i;
//     if(i==0){
//     cout<<1endl; 
//     }else{
//     cout<<countdigits(i,0);
//     }
// }

// Q-157) Recursively sum the digits of an integer.

// long long sum_of_digits(long long i, long long sum){
//     if(i==0){
//         return sum;
//     }
//     sum = sum + i%10;
//     i /= 10;
//     return sum_of_digits(i,sum);
// }
// int main(){
//     long long n;
//     cout<<"Enter the number you want sum of digits of - \n";
//     cin>>n;
//     cout<<sum_of_digits(n,0);
// }

// Q-158) Recursively find the GCD of two numbers.

// long GCD(long a, long b){
//     if(b==0){
//         return a;
//     }
//     return GCD(b, a%b);
// }
// int main(){
//     long n1,n2;
//     cout<<"Enter first number\n";
//     cin>>n1;
//     cout<<"enter second number\n";
//     cin>>n2;
//     while (n1 <= 0 || n2 <= 0) {
//         cout << "Both numbers must be positive. Please try again.\n";
//         cout << "Enter first positive number: \n";
//         cin >> n1;
//         cout << "Enter second positive number: \n";
//         cin >> n2;
//     }
//     cout<<GCD(n1,n2);
// }

// Q-159) Recursively check if an array is sorted.

// bool sort_check(const vector <long> &vec, int index){
//     if(index==vec.size()){
//         return true;
//     }
//     if(vec[index]>vec[index+1]){
//         return false;
//     }
    
//     return sort_check(vec,index+1);
// }
// int main(){
//     vector<long> Vec;
//     int n;
//     cout<<"Enter the index of array \n";
//     cin>>n;
//     //this is intialising vector as per input, but we can use push_back as that is more idiomatic approach
//     // vector<long> Vec(n);
//     // for(int i=0;i<n;++i){
//     //     cout<<"Enter "<<i<<"th element\n";
//     //     cin>>Vec[i];
//     // }
//     //PUSH BACK APPROACH
//     for(int i=0;i<n;i++){
//         long element;
//         cout<<"Enter the "<<i<<"th element\n";
//         cin>>element;
//         Vec.push_back(element);
//     }
//     if(sort_check(Vec,0)){
//         cout<<"Entered array is sorted"<<endl;
//     }else{
//         cout<<"Array is not sorted"<<endl;
//     }
// }