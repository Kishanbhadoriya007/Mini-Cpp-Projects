#include <iostream>
#include <vector>
#include <cmath> //#include <math.h>
#include <ctime> //#include <time.h>
#include <cstdlib>
#include <iomanip>
int searchArray(int array[], int size, int element );

int main(){
    int numbers[]= {1,2,3,4,5,6,7,8,9};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    int index;
    int myNum;
    char choice;
    do{
    std::cout<<"Enter element to search for: \n";
    std::cin>>myNum;

    index = searchArray(numbers, size, myNum); 

    if(index != -1){
        std::cout<<myNum<<" is at index "<< index<<'\n'; 
    }else{
        std::cout<<myNum<<" is not in the array \n"; 
    }

    std::cout<<"Do you wan to search more? Press Y or y to continue, any other key to terminate. \n";
    std::cin>>choice;

    }while(choice == 'y' || choice == 'Y');

    return 0;
}

int searchArray(int array[], int size, int element ){
    for(int i =0; i<size; i++){
        if(array[i] == element ){
            return i;
        }
    }
    return -1;             //return -1 means nothing was found
};
