#include <iostream>
#include <vector>
#include <cmath>
#include <math.h>
#include <ctime>
#include <time.h>
#include <cstdlib>

int main ()
{
    int num;
    int guess;
    int tries;

    srand(time(NULL));
    num = 1+(rand() % 100);

    std::cout<<"*********Number Guessing Game**********\n";

    do{
        std::cout<<"Enter a guess between 1-100: ";
        std::cin>>guess;
        tries++;

        if(guess<num){
            std::cout<<"Too low!\n";
        }
        else if(guess>num){
            std::cout<<"Too high!\n";
        }
        else{
            std::cout<<"CORRECT! YOU WIN\n";
        }

    }
    while(guess !=num);
return 0;
}