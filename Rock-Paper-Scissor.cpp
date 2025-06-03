#include <iostream>
#include <vector>
#include <cmath> //#include <math.h>
#include <ctime> //#include <time.h>
#include <cstdlib>
#include <iomanip>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main(){

    char player;
    char computer;
    char playAgain;

    do{
    player = getUserChoice();
    std::cout<<"Your choice ";
    showChoice(player);

    computer = getComputerChoice();
    std::cout<<"Computer's choice ";
    getComputerChoice();
    showChoice(computer);

    chooseWinner(player, computer);
    std::cout<<"\nDo you want to play again\n";
    std::cin>>playAgain;

    }while(playAgain == 'Y' || playAgain == 'y');

    return 0;

}
char getUserChoice(){

    char player;
    std::cout<<"Rock-Paper-Scissors Game!\n";
    do{
    std::cout<<"Only Choose one of the following \n";
    std::cout<<"*************************\n";
    std::cout<<"'r' for Rock\n";
    std::cout<<"'p' for Paper\n";
    std::cout<<"'s' for Scissors\n";
    std::cin>> player;
    }while(player != 'r' && player != 'p' && player != 's');
    return player;
    }
char getComputerChoice(){
   srand(time(0));
   int num = rand() % 3 + 1;

   switch(num){
    case 1: return 'r';
    case 2: return 'p';
    case 3: return 's';
   }
}
void showChoice(char choice){
    switch (choice)
    {
    case 'r': std::cout<<" Rock\n";
        break;
    case 'p': std::cout<<" Paper\n";
    break;
    case 's': std::cout<<" Scissor\n";
    break;
    
    default:
        break;
    }
}
void chooseWinner(char player, char computer){
    switch (player)
    {
    case 'r': if(computer == 'r'){
        std::cout<<"It's a tie!\n";
    }else if (computer == 'p'){
        std::cout<<"Computer Wins!";
    }else{
        std::cout<<"You Win!";
    }
        break;
    case 'p': if(computer == 'p'){
        std::cout<<"It's a tie!\n";
    }else if (computer == 's'){
        std::cout<<"Computer Wins!";
    }else{
        std::cout<<"You Win!";
    }
        break;
    case 's': if(computer == 's'){
        std::cout<<"It's a tie!\n";
    }else if (computer == 'r'){
        std::cout<<"Computer Wins!";
    }else{
        std::cout<<"You Win!";
    }
        break;
    }
}

