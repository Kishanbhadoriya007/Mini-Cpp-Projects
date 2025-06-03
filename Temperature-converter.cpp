#include <iostream>
#include <vector>
#include <cmath>
#include <math.h>

int main ()
{
    double temp;
    char unit;
    int choice;

do{  
    std::cout<<"************Temperature Converter***************\n";
    std::cout<<"C = Celsius\n";
    std::cout<<"F = Fahrenheit\n";
    std::cout<<"What unit would you like to convert to? \n";
    std::cin>>unit;
  
    if(unit == 'C' || unit == 'c'){
        std::cout<<"Enter temperature in Fahrenheit\n";
        std::cin>>temp;

        temp = (temp - 32.0)/1.8;
        std::cout<<"Temperature is"<<temp<<"C\n";

    }
    else if(unit == 'F' || unit == 'f' )
    {
        std::cout<<"Enter temperature in Celsius\n";
        std::cin>>temp;
        temp = (1.8 *temp)+ 32.0;
        std::cout<<"Temperature is"<<temp<<"F\n";
        
    }
    else{
        std::cout<<"Please Enter only C or F\n";
    }
    std::cout<<"************************************************\n";
    std::cout<<"Enter 1 to continue, any other to terminate\n";
    std::cin>>choice;

  }
  while(choice == 1);





return 0;
}
