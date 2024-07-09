#include <iostream>
#include <vector>
#include <cmath> //#include <math.h>
#include <ctime> //#include <time.h>
#include <cstdlib>
#include <iomanip>

void showBalance(double balance);
double deposit();
double withdraw(double balance);
// void exit();

int main(){
double balance =0;
int choice = 0;
std::string name;
std::cout<<"Enter your name: ";
std::cin>>name;
std::cout<<"Welcome "<<name<<" Choose\n";
    do{
    std::cout<<"**********************\n";
    std::cout<<"Enter your choice \n";
    std::cout<<"********************** \n";
    std::cout<<"1. Show Balance \n";
    std::cout<<"2. Deposit Money \n";
    std::cout<<"3. Withdraw Money \n";
    std::cout<<"4. Exit \n";
    std::cin>>choice;

    switch(choice){
        case 1: showBalance(balance);
        break;
        case 2: balance = balance + deposit();
        showBalance(balance);
        break;
        case 3: balance = balance - withdraw(balance);
        showBalance(balance);
        break;
        case 4: std::cout<<"Thanks for visiting ";
        break;
        default: std::cout<<"Invalid choice";

    }
    }while(choice != 4);
    return 0;
}

void showBalance(double balance){
    std::cout<<"Your balance is: $"<<std::setprecision(2)<< std::fixed<<balance<<"\n";
}
double deposit(){  
    double amount = 0;
std::cout<<"Enter amount to be deposited: "; 
std::cin>>amount;
if(amount> 0){
return amount;
}else {
    std::cout<<"That's not a valid amount: ";
    return 0;
}
}
double withdraw(double balance){
    double amount;

    std::cout<<"Enter the amount to be withdrawn: ";
    std::cin>>amount;

    return amount;

}

