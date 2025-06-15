// Level 9: Functions/Methods ---Create reusable blocks of code.//
#include<bits/stdc++.h>
using namespace std;


// 110)Simple Greet Function: Define a function called greet that prints "Hello there!". Call this function.
// string greet(){
//     cout<<"Hello there";
// }

// int main(){

//     greet();
//     return 0;
// }
/**Key Takeaway: Use cout when you want to show something to the user. Use return when you want your function to give a piece of data back to your program so it can be stored and used for other calculations. */

// 111)Personalized Greet Function: Define a function greet_user(name) that takes a name as an argument and prints "Hello, [name]!". Ask the user for their name and then call this function with their name.

// string Greet_user(string name){
//     cout<<"Hello "<<name<<endl;
// }
// int main(){
//     string user;   //this variable is not named "name" as in function to show that it doesn't need to have same name, just same datatype
//     cout<<"Enter your name"<<endl;
//     getline(cin,user);
//     Greet_user(user);
//     return 0;
// }

// 112)Add Function: Define a function add_numbers(num1, num2) that takes two numbers as arguments and returns their sum. Ask the user for two numbers, call the function, and print the returned result.

// long long add_numbers(long long num1, long long num2){
//     long long sum = num1+num2;
//     return sum;
// }
// int main(){
//     long long n1,n2;     //this variables is not named num1/num2 to show that it doesn't need to have same name, just same datatype
//     cout<<"Enter the number you wanna add"<<endl;
//     cin>>n1>>n2;
//     cout<<add_numbers(n1,n2);         //datatype need not to be defined here
//     return 0;
// }

// 113)Area Function (Rectangle): Define a function calculate_rectangle_area(length, width) that returns the area. Ask for length and width, call the function, and print the result.

// long long calculate_rectangle_area(long long length, long long width){{
//     return  length*width;
// }}

// int main(){
//     long long l,w;        //again using different names to show they need not to be same
//     cout<<"Enter the length and width respectively"<<endl;
//     cin>>l>>w;
//     cout<<calculate_rectangle_area(l,w);

// }

// 114)isEven Function: Define a function is_even(number) that takes a number and returns true if it's even, false otherwise. Ask the user for a number, call this function, and print a message like "[Number] is even: [True/False]".

// bool is_even(long long number){
//     return number%2==0;
// }
// int main(){
//     long long n;
//     cout<<"Enter the number"<<endl;
//     cin>>n;
//     cout<<n<<"is even "<<boolalpha<<is_even(n);
//     return 0;
// }

// 115)Simple Menu Function: Create a function display_menu() that prints a few options like:  1. View Greeting 2. View Joke 3. ExitCall this function. (No need to handle input for the menu yet, just display it).

// void display_menu(){      //doesn't need to return data to main so using void
//     cout<<"1. View Greeting 2 \n2. View Joke \n3. ExitCall this function.";
// }
// int main(){
//     display_menu();
//     return 0;
// }

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
// }

// 117)Function to Find Maximum (two numbers): Write a function find_max(num1, num2) that takes two numbers and returns the larger of the two.

// long long find_max(long long num1, long long num2){
//     //traditional idiomatic way
//     // if(num1>num2){
//     //     return num1;
//     // }else{
//     //     return num2;
//     // }

//     //STL way with #include<algorithm>
//     return max(num1,num2);
// }

// int main(){
//     long long n1, n2;
//     cout<<"Enter the numbers\n";
//     cin>>n1>>n2;
//     cout<<find_max(n1,n2)<<" is larger of the two\n";
//     return 0;
// }

// 118)Function to Check Leap Year (Improved): Write a function is_leap_year(year) that takes a year and returns True if it's a leap year (considering divisibility by 4, not by 100 unless also by 400) and False otherwise.

// bool is_leap_year(long long year){
//     if(year%4==0){
//         if(year%100==0){
//             if(year%400==0){
//                 cout<<year<<" is a leap year\n";
//                 return true;
//             }else{
//                 cout<<year<<" is not a leap year\n";
//                 return false;
//             }
//         }else{
//             cout<<year<<" is a leap year\n";
//             return true;
//         }
//     }else{
//         cout<<year<<" is not a leap year\n";
//         return false;
//     }
//     //alternative logic 
//     // if(year%4 == 0){
// //     if(year%400==0){
// //         cout<<year<<" is a Leap Year.\n";
// //          return true;
// //     }else if(year%100 == 0){
// //         cout<<year<<" Not a Leap year\n";
// //          return false;
// //     }else{
// //         cout<<year<<" is a Leap Year\n";
// //         return true;
// //     }
// // }else{
// //     cout<<year<<" not a Leap year\n";
// //     return false;
// // }

// }
/******A More Elegant Solution: The Boolean Expression
You can represent the entire set of leap year rules in a single, concise boolean expression. This is the standard, preferred way to solve this problem in C++ and many other languages.
The rule is:
A year is a leap year if it is (divisible by 400) OR (it is divisible by 4 AND it is NOT divisible by 100).
Let's translate that directly into code: */

// bool is_leap_year(long long year){
//     return (year % 400 == 0) || (year % 4 == 0 && year % 100 !=0);
// }

// int main(){
//     long long y;
//     cout<<"Enter the year\n";
//     cin>>y;
//     if(is_leap_year(y)){
//         cout<<y<<" is a leap year\n";
//     }else{
//         cout<<y<<" is not a leap year\n";
//     }
// }

// 119)Function to Convert Celsius to Fahrenheit: Write a function celsius_to_fahrenheit(celsius) that takes a Celsius temperature and returns the equivalent Fahrenheit temperature.

// double celsius_to_fahrenheit(double celsius){
// celsius = (celsius*9)/5 +32;
// return celsius;
// }
// int main(){
//     double c;
//     cout<<"Enter temperature in celsius\n";
//     cin>>c;
//     cout<<celsius_to_fahrenheit(c)<<" F";
// }

// 120)Function for Simple Interest: Write a function calculate_simple_interest(principal, rate, time) that takes principal, annual rate (as a decimal, e.g., 0.05 for 5%), and time (in years) and returns the simple interest.

// double calculate_simple_interest(double principal, double rate, double time){
// return (principal*rate*time)/100;
// }

// int main(){
//         double p,r,t;
    
//     cout<<"Enter principal\n";
//     cin>>p;
//     cout<<"Enter rate (in percentage)\n";
//     cin>>r;
//     cout<<"Enter time\n";
//     cin>>t;
//     cout<<"The total Interest is = "<<calculate_simple_interest(p,r,t);
    
// }