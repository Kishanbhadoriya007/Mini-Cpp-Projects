// Level 10: Basic Data Structures --- Lists/Arrays Work with collections of data.
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

int main(){
list <long> n = {1,2,3,4,5};
int m = n{1}; //list is accessed with {}
for(int i=0;i<5;i++){

}
}