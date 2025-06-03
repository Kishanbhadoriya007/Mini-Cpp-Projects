#include <string>
#include <iostream>
#include <vector>
#include <cmath> //#include <math.h>
#include <ctime> //#include <time.h>
#include <cstdlib>
#include <iomanip>

void drawBoard(char *spaces);
void playerMove(char *spaces, char player);
void computerMove(char *spaces, char computer);
bool checkWinner(char *spaces, char player, char computer);
bool checkTie(char *spaces);

int main() {
    char spaces[9];
    char player = 'X';
    char computer = 'O';
    char choice = 'Y';

    do {
        // Reset the board and running flag for each new game
        for (int i = 0; i < 9; i++) {
            spaces[i] = ' ';
        }
        bool running = true;

        drawBoard(spaces);

        while (running) {
            playerMove(spaces, player);
            drawBoard(spaces);
            if (checkWinner(spaces, player, computer)) {
                running = false;
                break;
            } else if (checkTie(spaces)) {
                running = false;
                break;
            }
            computerMove(spaces, computer);
            std::cout << "\n                   Computer chooses its turn               \n";
            drawBoard(spaces);

            if (checkWinner(spaces, player, computer)) {
                running = false;
                break;
            } else if (checkTie(spaces)) {
                running = false;
                break;
            }
        }
        std::cout << "Thanks for playing \n";
        std::cout << "Do you want to play again? (Y to continue, any other key to terminate): \n";
        std::cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}

void drawBoard(char *spaces) {
    std::cout << "\n";
    std::cout << "     |     |     \n";
    std::cout << "  " << spaces[0] << "  |   " << spaces[1] << " |   " << spaces[2] << "  \n";
    std::cout << "_____|_____|_____\n";
    std::cout << "     |     |     \n";
    std::cout << "  " << spaces[3] << "  |   " << spaces[4] << " |   " << spaces[5] << "  \n";
    std::cout << "_____|_____|_____\n";
    std::cout << "     |     |     \n";
    std::cout << "  " << spaces[6] << "  |   " << spaces[7] << " |   " << spaces[8] << "  \n";
    std::cout << "     |     |     \n";
    std::cout << "\n";
}

void playerMove(char *spaces, char player) {
    int number;
    do {
        std::cout << "Enter a spot to place a marker: (between 1 to 9) ";
        std::cin >> number;
        number--;
        if (spaces[number] == ' ') {
            spaces[number] = player;
            break;
        }
    } while (number < 0 || number >= 9);
}

void computerMove(char *spaces, char computer) {
    int number;
    srand(time(0));

    while (true) {
        number = rand() % 9;
        if (spaces[number] == ' ') {
            spaces[number] = computer;
            break;
        }
    }
}

bool checkWinner(char *spaces, char player, char computer) {
    // Rows Win conditions
    if (spaces[0] != ' ' && spaces[0] == spaces[1] && spaces[1] == spaces[2]) {  // first row
        if (spaces[0] == player) {
            std::cout << "YOU WIN! \n";
        } else {
            std::cout << "YOU LOSE!\n";
        }
    } else if (spaces[3] != ' ' && spaces[3] == spaces[4] && spaces[4] == spaces[5]) {  // second row
        if (spaces[3] == player) {
            std::cout << "YOU WIN! \n";
        } else {
            std::cout << "YOU LOSE!\n";
        }
    } else if (spaces[6] != ' ' && spaces[6] == spaces[7] && spaces[7] == spaces[8]) {  // third row
        if (spaces[6] == player) {
            std::cout << "YOU WIN! \n";
        } else {
            std::cout << "YOU LOSE!\n";
        }
    }
    // Columns Win conditions
    else if (spaces[0] != ' ' && spaces[0] == spaces[3] && spaces[3] == spaces[6]) {  // first column
        if (spaces[0] == player) {
            std::cout << "YOU WIN! \n";
        } else {
            std::cout << "YOU LOSE!\n";
        }
    } else if (spaces[1] != ' ' && spaces[1] == spaces[4] && spaces[4] == spaces[7]) {  // second column
        if (spaces[1] == player) {
            std::cout << "YOU WIN! \n";
        } else {
            std::cout << "YOU LOSE!\n";
        }
    } else if (spaces[2] != ' ' && spaces[2] == spaces[5] && spaces[5] == spaces[8]) {  // third column
        if (spaces[2] == player) {
            std::cout << "YOU WIN! \n";
        } else {
            std::cout << "YOU LOSE!\n";
        }
    }
    // Diagonal Win conditions
    else if (spaces[0] != ' ' && spaces[0] == spaces[4] && spaces[4] == spaces[8]) {  // first diagonal
        if (spaces[0] == player) {
            std::cout << "YOU WIN! \n";
        } else {
            std::cout << "YOU LOSE!\n";
        }
    } else if (spaces[2] != ' ' && spaces[2] == spaces[4] && spaces[4] == spaces[6]) {  // second diagonal
        if (spaces[2] == player) {
            std::cout << "YOU WIN! \n";
        } else {
            std::cout << "YOU LOSE!\n";
        }
    } else {
        return false;
    }
    return true;
}

bool checkTie(char *spaces) {
    for (int i = 0; i < 9; i++) {
        if (spaces[i] == ' ') {
            return false;
        }
    }
    std::cout << "It's A TIE! \n";
    return true;
}
