#include <iostream>
#include <vector>
#include <cmath>
#include <math.h>

int main ()
{
    int rows;
    int columns;
    char symbol;

    std::cout<<"Hoow many Rows: ";
    std::cin>>rows;

    std::cout<<"Hoow many Columns: ";
    std::cin>>columns;

    std::cout<<"Enter a symbol to use: ";
    std::cin>>symbol;



for(int i =1; i<=rows; i++){
    for(int j=1; j<=columns; j++){
        std::cout<<symbol<<" ";

    }   
    std::cout<<'\n';
    }  
return 0;
}
