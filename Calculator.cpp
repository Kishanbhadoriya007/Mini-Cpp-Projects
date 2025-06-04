#include <bits/stdc++.h>
using namespace std;
int main ()
{
    char op;
    long double num1,num2, result;

    int choice;
    cout<<"This is a calculator"<<'\n';
    do{
    cout<<"*********Calculator************"<<std::endl;

    cout<<"Enter the arithmatic operation you want to perform [+ or - or / or * or ^(exponent)]: ";
    cin>>op;

    cout<<"Enter Number  1: ";
    cin>>num1;

    cout<<"Enter Number  2: ";
    cin>>num2;

    switch(op){
        case '+':
        result = num1+num2;
        cout<<result<<'\n';
        break;
        case '-':
        result = num1-num2;
        cout<<result<<'\n';
        break;
        case '/':
        result = num1/num2;
        cout<<result<<'\n';
        break;
        case '*':
        result = num1*num2;
        cout<<result<<'\n';
        break;
        case '^':
        result = pow(num1, num2);
        cout<<result<<'\n';
    }

    cout << "************************************************************"<<std::endl;

    cout << "Press '1' to continue, Press any  key to terminate: ";
    cin >> choice;

    } while (choice==1);

return 0;
}