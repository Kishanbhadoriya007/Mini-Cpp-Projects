// Level 6: Conditional Statements (if-else, elif) ---Make decisions in your code.

#include<bits/stdc++.h>
using namespace std;

int main(){

// 50)Adult Check: Ask the user for their age. If the age is 18 or greater, print "You are an adult."

// int age;
// cout<<"Enter your age"<<endl;
// cin>>age;
// if(age>=18){
//     cout<<"You are an adult."<<endl;
// }else{
//     cout<<"You are not an adult."<<endl;
// }

// 51)Voting Age: Ask for age. If 18 or greater, print "You can vote." Otherwise, print "You cannot vote yet."

// int age;
// cout<<"Enter your age"<<endl;
// cin>>age;
// if(age>=18){
//     cout<<"You can vote"<<endl;
// }else{
//     cout<<"You can not vote"<<endl;
// }

// 52)Positive, Negative, or Zero: Ask for a number. Print "Positive", "Negative", or "Zero" accordingly.

// int a;
// cout<<"Enter a number"<<endl;
// cin>>a;
// if(a>0){
//     cout<<"Positive";
// }else if(a==0){
//     cout<<"Zero";
// }else{
//     cout<<"Negative";
// }

// 53)Even or Odd: Ask for a number. If it's even, print "Even." Else, print "Odd."

// int a;
// cout<<"Enter a number"<<endl;
// cin>>a;
// if(a%2==0){
//     cout<<"Even.";
// }else{
//     cout<<"Odd.";
// }

// 54)Pass or Fail: Ask for a score (0-100). If the score is 50 or more, print "Pass." Else, print "Fail."

// int a;
// cout<<"Enter your Score"<<endl;
// cin>>a;
// if(a>=50 && a<=100){
//     cout<<"PASS.";
// }else if(a<50 && a>0){
//     cout<<"FAIL.";
// }else{
//     cout<<"Invalid score";
// }

// 55)Number Comparison (Larger/Equal): Ask for two numbers. Print which number is larger, or if they are equal.

// int a,b;
// cout<<"Enter two numbers"<<endl;
// cin>>a>>b;
// if(a>b){
//     cout<<a<<" is larger";
// }else if (b>a){
//     cout<<b<<" is larger";
// }else if(a==b){
//     cout<<"Both are equal";
// }

// 56)Smallest of Three Numbers: Ask for three numbers and print the smallest among them.

// int a,b,c;
// cout<<"Enter three numbers."<<endl;
// cin>>a>>b>>c;
// if(a<b && a<c){
//     cout<<a;
// }else if(b<a && b<c){
//     cout<<b;
// }else{
//     cout<<c;
// }

// 57)Largest of Three Numbers: Ask for three numbers and print the largest among them.

// int a,b,c;
// cout<<"Enter three numbers \n"<<endl;
// cin>>a>>b>>c;
// if(a>b && a>c){
//     cout<<a;
// }else if(b>a && b>c){
//     cout<<b;
// }else{
//     cout<<c;
// }

// 58)Weekend or Weekday: Ask for a day number (1 for Monday, ..., 7 for Sunday). If it's 6 or 7, print "Weekend!" Else, print "Weekday."

// int day;
// cout<<"Enter day"<<endl;
// cin>>day;
// if(day == 6 || day == 7){
//     cout<<"WEEKEND!";
// }else{
//     cout<<"Weekday.";
// }

// 59)Grade Calculator: Ask for a score (0-100). If 90-100, print "A". If 80-89, print "B". If 70-79, print "C". If 60-69, print "D". Else, print "F".

// int a;
// cout<<"Enter your score\n"<<endl;
// cin>>a;
// if(a>=90 && a<=100){
//     cout<<"A";
// }else if(a>=80 && a<=89){
//     cout<<"B";
// }else if(a>=70 && a<=79){
//     cout<<"C";
// }else if(a>=60 && a<=69){
//     cout<<"D";
// }else if(a<60 && a>=0){
//     cout<<"F";
// }else{
//     cout<<"Invalid score";
// }

// 60)Login Mock: Ask for a username. If the username is "admin", print "Welcome, Admin!". Else, print "Hello, Guest!".

// string username;
// cout<<"Enter Username\n"<<endl;
// cin>>username;
// if(username == "admin"){            // '' for char  "" for str
// cout<<"Welcome Admin!";
// }else{
//     cout<<"Hello, Guest!";
// }

// 61)Password Mock: Ask for a password. If it's "secret123", print "Access granted." Else, print "Access denied."

// string pass;
// cout<<"Enter password\n"<<endl;
// cin>>pass;
// if(pass == "secret123"){
//     cout<<"Access granted";
// }else{
//     cout<<"WRONG PASSWORD! \nAccess denied";
// }

// 62)Combined Login Check: Ask for a username and password. If username is "admin" AND password is "password123", print "Login successful", else "Invalid credentials."

// string pass, username;
// cout<<"Enter Username"<<endl;
// cin>>username;
// cout<<"Enter Password"<<endl;
// cin>>pass;
// if(username == "admin" && pass == "password123"){
//     cout<<"Access Granted";
// }else{
//     cout<<"WRONG USERNAME OR PASSWORD!! ACCESS DENIED";
// }

// 63)Discount: Ask for purchase amount. If amount > $100, give a 10% discount. Print the final amount.

// double a;
// cout<<"Enter amount"<<endl;
// cin>>a;
// if(a>100){
//     cout<<"10\% discount has been granted!"<<endl;
//     a=a-(a/10);
// }
// cout<<"new amount is "<<a<<"$";

// 64)Temperature Advice: Ask for temperature. If > 30°C, print "It's hot! Stay hydrated." If 15-30°C, print "Pleasant weather." If < 15°C, print "It's cold! Wear a jacket."

// int t;
// cout<<"Enter Temperature"<<endl;
// cin>>t;
// if(t>30){
//     cout<<"It's hot! Stay hydrated.";
// }else if(t<15){
//     cout<<"It's cold! Wear a jacket.";
// }else {
//     cout<<"Pleasant weather.";
// }

// 65)Vowel or Consonant (Simple): Ask for a single lowercase character. If it's 'a', 'e', 'i', 'o', or 'u', print "Vowel". Else, print "Consonant". 

// char ch;
// cout<<"Enter character"<<endl;
// cin>>ch;
// ch = tolower(ch);
// if(ch=='a' || ch=='b' || ch=='c' || ch=='d' || ch=='e'){
//     cout<<"Vowel";
// }else{
//     cout<<"Consonant";
// }

// 66)Triangle Type (by sides): Ask for three side lengths. If all are equal, print "Equilateral". If two are equal, print "Isosceles". Else, print "Scalene". (Assume valid triangle inputs).

// int a,b,c;
// cout<<"Enter sides\n";
// cin>>a>>b>>c;
// if(a==b && b==c){
//     cout<<"Equilateral triangle";
// }else if(a==b || b==c){
//     cout<<"Isosceles triangle";
// }else{
//     cout<<"Scalene triangle";
// }

// 67)Leap Year check Ask for a year and print whether it's a leap year or not

// long long int y;
// cout<<"Enter year"<<endl;
// cin>>y;
// if(y%4 == 0){
//     if(y%400==0){
//         cout<<y<<" is a Leap Year.";
//     }else if(y%100 == 0){
//         cout<<y<<" Not a Leap year";
//     }else{
//         cout<<y<<" is a Leap Year";
//     }
// }else{
//     cout<<y<<" not a Leap year";
// }

// 68)Number Divisibility (3 AND 5): Ask for a number. Check if it's divisible by both 3 AND 5. Print an appropriate message.

// int a;
// cout<<"Enter a number"<<endl;
// cin>>a;
// if(a%3==0){
//     if(a%5==0){
//     cout<<a<<" is divisible by both 3 and 5";
//     }else{
//         cout<<a<<" is divisible by only 3";
//     }
// }else if(a%5==0){
//     cout<<a<<" is divisible by only 5";
// }else{
//     cout<<a<<" not divisible by either";
// }

// 69)Movie Ticket Price: Ask for age. If age < 5, ticket is free. If age 5-12, ticket is $5. If age > 12, ticket is $10. Print the ticket price.

// int age;
// cout<<"Enter age"<<endl;
// cin>>age;
// if(age<5){
//     cout<<"Ticket is free";
// }else if(age>=5 && age<=12){
//     cout<<"Ticket is 5$";
// }else{
//     cout<<"Ticket is 5$";
// }

// 70)Combined Comparison (Age Range): Ask the user for their age. Print true if their age is greater than 18 AND less than 65, false otherwise.

// int age;
// cout<<"Enter your age"<<endl;
// cin>>age;
// if(age>18 && age<65){
//     cout<<"True";
// }else{
//     cout<<"False";
// }

// 80)Nested If (Driving): Ask for age. If age >= 18, then ask if they have a driver's license (yes/no). If yes, print "You can drive." Else print "You need a license." If age < 18, print "Too young to drive."

// int age;
// cout<<"Enter your age"<<endl;
// cin>>age;
// if(age>=18){
//     string a;
//     cout<<"Do you have a driving licence?"<<endl;
//     cin>>a;
//     if(a=="yes"){
//         cout<<"You can drive";
//     }else{
//         cout<<"You will need a licence";
//     }

// }else if(age<18){
// cout<<"You are too young to drive";
// }

    return 0;
}