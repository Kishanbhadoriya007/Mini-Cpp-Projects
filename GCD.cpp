// // Q-158) Recursively find the GCD of two numbers.

#include<bits/stdc++.h>
using namespace std;

long GCD(long a, long b){
    if(b==0){
        return a;
    }
    return GCD(b, a%b);
}
int main(){
    long n1,n2;
    cout<<"Enter first number\n";
    cin>>n1;
    cout<<"enter second number\n";
    cin>>n2;
    while (n1 <= 0 || n2 <= 0) {
        cout << "Both numbers must be positive. Please try again.\n";
        cout << "Enter first positive number: \n";
        cin >> n1;
        cout << "Enter second positive number: \n";
        cin >> n2;
    }
    cout<<GCD(n1,n2);
}

