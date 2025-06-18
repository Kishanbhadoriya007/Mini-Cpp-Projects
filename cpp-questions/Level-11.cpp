// Level 11: Pointers & Core C++ Features (The First Bridge)
#include<bits/stdc++.h>
using namespace std;

// Question: Declare an integer variable, assign it a value. Then, declare a pointer to that integer and print both the value of the variable (using the pointer) and its memory address.

// int main(){
//     long a;
//     cout<<"Enter a value\n";
//     cin>>a;
//     long *ptr = &a;
//     cout<<a<<endl<<ptr<<endl<<*ptr;
//     return 0;
// }

// Q-137) Declare a pointer and initialize it to nullptr. Write an if condition to check if the pointer is null before trying to dereference it.

// int main(){
//     long *ptr = nullptr;
//     if(ptr==0){
//         cout<<"it is null\n";
//     }
//     cout<<"Enter the value to be  assigneed  \n";
//     long b;
//     cin>>b;
//     ptr = &b;
//     cout<<ptr<<endl;  //address
//     cout<<*ptr;  //actual value
//     return 0; }

// Q-138) Create an integer array. Declare a pointer that points to the first element. Use a loop and pointer arithmetic (ptr++) to print all elements.

// int main(){
//     long arr[5] =  {1,2,31,4,5};
//     long *ptr = arr;     //short way of writing long *ptr = &arr[0];
//     for(int i=0;i<5;i++){
//         cout<<*ptr<<" ";
//         ptr++;            //pointer arithmetic property automatically goes to next element by ++
//     }
//     return 0;
// }

// Q-139) Write a function increment(int* value) that takes a pointer to an integer and increments the integer's value by one. Call this function from main.

// long increment(int* value){

// (*value)++;
// }
// int main(){
//     int i=0;
//     int *ptr = &i;
//     increment(ptr);
//     cout<<i<<endl<<*ptr<<endl<<ptr;
//     return 0; }

// Q-140) Use new to dynamically allocate an integer. Assign it a value, print it, and then use delete to free the memory.

// int main(){
// long* ptr = new long(10);
// cout<<*ptr<<'\n'<<ptr;
// delete ptr;
// }

// Q-141) Ask for a size N. Dynamically allocate an array of N integers using new int[N]. Fill it with values and print them. Remember to free the memory with delete[].

// int main(){
//     long N;
//     cout<<"Enter the size for array \n";
//     cin>>N;
//     long *ptr = nullptr;  //always intialise pointer
//     ptr  =  new long[N];    //dynamically allocating array
//     for(long i=0;i<N;i++){
//         cout<<"Enter "<<i<<"th element\n";
//         cin>>ptr[i];
//     }
//     for(long j=0;j<N;j++){
//         cout<<ptr[j]<<" ";
//     }
//     delete[] ptr;
//     ptr = nullptr;  //for good measure

// return 0;}

// Q-142) (Scope) Declare a global integer variable. In main, declare a local integer with the same name. Print both variables.

// long a= 10;
// // cout<<a<<endl;
// int main(){
//     int a=5;
//     cout<<a<<endl<<::a;          //::  is used for printing global variable without it getting overwritten by local variable
// }

// Q-143) (Scope) Write a function with a static local variable to count how many times it has been called.

// void count_my_calls(){
//     long a;
//     static long call_count = 0;
//     call_count++;
//     cout<<"This function has been called "<< call_count<< " time(s)."<<endl;
// }

// int main(){
// count_my_calls();
// count_my_calls();
// count_my_calls();
// count_my_calls();
// count_my_calls();
// count_my_calls();
// count_my_calls();
// count_my_calls();
// count_my_calls();
// count_my_calls();
// count_my_calls();
// return 0;
// }

// Q-144) (Overloading Example) Write two printValue functions: one for an int and one for a double.

// int printValue(int a){
// cout<<a<<endl;
// return a;
// }
// double printValue(double a){
//     cout<<a<<endl;
//     return a;
// }
// int main(){
//     int a;
//     double b;
//     cout<<"Enter an interger and a rational number \n";
//     cin>>a>>b;
//     printValue(a);
//     printValue(b);
//     return 0;
// }

// Q-145) (Overloading) Create an overloaded function sum that takes two integers in one version and three integers in another.

// int sum(int a,int b){
//     return a+b;
// }
// int sum(int a,int b, int c){
//     return a+b+c;
// }
// int main(){
    
//      cout<<sum(1,2)<<endl;
//      cout<<sum(1,2,3);  

//     return 0;
// }


