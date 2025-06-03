#include <iostream>
#include <vector>
#include <cmath>
#include <math.h>

int main ()
{
    char op;
    double num1;
    double num2;
    double result;
    int choice;

    do{
    std::cout<<"*********Calculator************"<<std::endl;

    std::cout<<"Enter the arithmatic operation you want to perform (+ or - or / or *): ";
    std::cin>>op;

    std::cout<<"Enter Number 1: ";
    std::cin>>num1;

    std::cout<<"Enter Number 2: ";
    std::cin>>num2;

    switch(op){
        case '+':
        result = num1+num2;
        std::cout<<result<<'\n';
        break;
        case '-':
        result = num1-num2;
        std::cout<<result<<'\n';
        break;
        case '/':
        result = num1/num2;
        std::cout<<result<<'\n';
        break;
        case '*':
        result = num1*num2;
        std::cout<<result<<'\n';
        break;
    }
    std::cout << "************************************************************"<<std::endl;

    std::cout << "Press '1' to continue, Press any  key to terminate: ";
    std::cin >> choice;

    } while (choice==1);

return 0;
}