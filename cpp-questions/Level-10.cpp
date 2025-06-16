// Level 10: Basic Data Structures --- Lists/Arrays Work with collections of data.  This level covers the creation and basic manipulation of the most fundamental data structures. 

#include<bits/stdc++.h>
using namespace std;

// 121)Create and Print a List/Array: Create a list (or array, depending on your language) containing 5 integers and print the entire list.

// int main(){
// int a;
// long arr[5]={1,2,3,4,5};
// list<long> n={1,2,3,4,5};
// cout<<"Array is\n";
// for(long i : arr){
//     cout<<i<<endl;;
// }
// cout<<"list is \n";
// for(long i : n){
//     cout<<i<<endl;
// }
// }

// 123)Modify Element by Index: Create a list/array, change the value of an element at a specific index, and print the updated list.

// int main(){
//     long arr[5]={1,2,3,4,5};
//     arr[2]=69;
//     for(long i : arr){
//         cout<<i<<endl;
//     }
// }

// 124)Iterate and Print Elements (List/Array): Use a loop to iterate through a list/array of numbers and print each element on a new line.
// int main(){
// string str[5] = {"kishan","milan","ayush","nikhil","jatin"};
// for(string s : str){
// cout<<s<<endl;
// }
// return 0;
// }

// 125)Sum of List Elements: Create a list/array of numbers and calculate their sum.

//traditional way
// int main(){
//     int arr[5]={1,2,3,4,5};
//     int count=0;
//     for(int i : arr){
//         count = count + i;
//     }
//     cout<<"The sum of array is = "<<count;
// }
/* The STL Way (Next Level): For this specific task, the STL provides a dedicated function in the <numeric> header called std::accumulate */
// vector <int> arr = {1,2,3,4,5};
// int sum = accumulate(arr.begin(),arr.end(), 0);

// 126)Average of List Elements: Create a list/array of numbers and calculate their average.

// int main(){
//     double arr[5]={9,8,7,6,5};
//     double avg=0;
//     for(long i : arr){
//         avg = i+avg;
//     }
//     avg = avg/5;
//     cout<<"Average of array is = "<<avg;
// }

// 127)Find Maximum in List: Create a list/array of numbers and find the largest number in it.

// int main(){

//     //traditional method
//     // int arr[5]={1,3,1,9,6};
//     //   int m = arr[0];
//     // for(int i=1;i<5;i++){
//     //     if(arr[i]>m){
//     //         m=arr[i];
//     //     }
//     // }
//     //using max_element STL, this is specifically created  for arrays
//     vector<int> v = {1,3,1,9,6};
//     auto m  = max_element(v.begin(),v.end()); //int  datatype doesn't work here
//     cout<<"Max element is = "<<*m;    //auto datatype needs *
// }

// 128)Find Minimum in List: Create a list/array of numbers and find the smallest number in it.

// int main(){
// vector <long> n = {6,7,3,4,2};
// // int m = n[0]; 
// /*Traditional method, only tells you the value, not the address, with  address we could have done more operations */
// // for(int i=0;i<5;i++){
// //     if(m>n[i]){
// //         m=n[i];
// //     }
// //     cout<<m<<endl;
// // }
// // cout<<"The smallest element is = "<<m;
// //STL method
// auto m = min_element(n.begin(),n.end());
// cout<<"Min element is = "<<*m;
// }

// Q-129) Check if Element Exists in List: Create a list/array and ask the user for a number. Check if that number exists in the list and print an appropriate message.

// int main(){
// vector <long> n = {12,23,34,45,56,67,78,89,90,0};
// long a;
// // bool b = false;
// cout<<"Enter the number you wanna check \n";
// cin>>a;
// // for(int i=0;i<n.size();i++){
// //     if(n[i]==a){
// //         cout<<a<<" exists in the list at "<<i;
// //         b=true;
// //         break;
// //     }
// // }
// // if(b==false){
// //     cout<<a<<" doesn't exist in the list\n";
// // }
// auto it = find(n.begin(),n.end(), a);   
// if(it !=  n.end()){            /* why n.end() here? because if The number is NOT found Let's say you're searching for a = 100.  std::find starts at 12, then 23, 34, 45, 56, 90...It checks every single book and gets to the end of the shelf. It never found 100.Because the search failed, std::find has a special way to tell you this: it returns the n.end() marker. It's like the function is telling you, "I searched all the way to the finish line and found nothing."So now, your marker it is pointing to the same spot as n.end(). */
//     cout<<a<<" exists in the list \n";
// }else{
//     cout<<a<<" doesn't exist in the list \n";
// }
// return 0;}

// Q-130) Count Occurrences of Element in List: Create a list/array (it can have duplicate elements) and ask the user for a number. Count how many times that number appears in the list.

// int main(){
// vector<long> n {1,2,3,3,4,5,6,7,7,8,8,9,10,12,23,34,45,56,67,78,89,90,0,0};
// long a;
// // long count=0;   //this  is a
// cout<<"Enter the number you wanna find\n";
// cin>>a;
// // // for(int i=0;i<n.size();i++){
// // //     if(a==n[i]){
// // //         count++;
// // //     }
// // // }
// // // cout<<"Total occurences of "<<a<<" are = "<<count;

// // //modern for loop method
// // for(long i : n){
// //     if(a==n[i]){
// //         count++;
// //     }
// // }
// // cout<<"Total occurences of "<<a<<" are = "<<count;

// //STL STD::COUNT METHOD, Different from previously declared count variable
// long total = count(n.begin(),n.end(), a);
// cout<<"Total occurences of "<<a<<" are = "<<total;

// return 0;}

// Q-131) Append Element to List: Create an empty list/array. Ask the user for 3 numbers (one at a time) and add each number to the end of the list. Print the final list.

// int main(){
//     list<long>  n;
//     long a,b,c;
//     cout<<"Enter the three  number you  wanna add to list\n";
//     cin>>a>>b>>c;
//     n.push_back(a);
//     n.push_back(b);
//     n.push_back(c);
//     for( long i  : n){
//         cout<<i<<", ";
//     }
// }

// Q-132) Remove Element from List (by value): Create a list with some elements. Ask the user for a number to remove. Remove the first occurrence of that number from the list. Print the list.

// int main(){
// list<long> n={1,1,2,2,3,3,4,4,5,5};
// long a;
// cout<<"Here's the list"<<endl;
// for(long i : n){
//     cout<<i<<" ";
// }
// cout<<'\n'<<"Enter the number to remove"<<endl;
// cin>>a;
// // n.remove(a);  //this removes ALL elements and not just duplicates
// auto it = find(n.begin(), n.end(),a );
// if(it!=n.end()){
//     n.erase(it);           //this erases
//     cout<<"Successfully removed the first occurence of "<<a<<endl;
// }else{
//     cout<<"Element was not found in the list\n";
// }
// cout<<"Updated list\n";
// for(long j : n){
//     cout<<j<<" ";
// }
// return 0;}

// Q-133) Remove Element from List (by index): Create a list. Ask the user for an index. Remove the element at that index. Print the list.

list<long> n;