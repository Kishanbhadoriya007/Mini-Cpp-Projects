#include <iostream>
#include <vector>
#include <cmath> //#include <math.h>
#include <ctime> //#include <time.h>
#include <cstdlib>
#include <iomanip>
void sort(int array[], int size );
int main(){

    int array[] = {10,1,9,2,8,3,7,4,6,5};
    int size = sizeof(array)/sizeof(array[0]);

    sort(array, size);

    for(int element: array){
        std::cout << element << " ";
    };
    return 0;
}

void sort(int array[], int size ){
    
}

// double getTotal(double prices[], int size);

// int main(){

//     double prices[] = {49,99,69,56};
//     int size = sizeof(prices)/sizeof(prices[0]);
//     double total = getTotal(prices, size);   //function doesn't need [] perimeter

//     std::cout<<"$"<<total;
//     return 0;
// }
// double getTotal(double prices[], int size){                 // function's declration needs perimeter
//     double total;

//     for(int i = 0; i < size; i++){
//         total += prices[i];
//     }
//     return total;
// }



// int main(){

//     std::string students [] = {"Spomgebob","Patrick"  ,"Squidward"  };
//     //for each loop
//     for(std::string student : students){
//         std::cout<< student<<'\n';

//     }
    

// return 0;
// }
//     // std::string students [] = {"Spomgebob","Patrick"  ,"Squidward"  };

//     // std::cout<< students[0]<<std::endl<<'\n';
//     // std::cout<< students[1]<<std::endl<<'\n';  ===== this is long way to print all of array 
//     // std::cout<< students[2]<<std::endl<<'\n';
    
//                        //better approach would be for loop

//     char grades[] = {'A','B','C','D','F'};
    
//     for(int i =0; i<=sizeof(grades)/sizeof(char);i++){
//         std::cout<<grades[i]<<'\n'; 
//     }

    

// }
    // std::string cars[] = {"Corvette", "swift", "Scorpio", "Buggati"};  //arrays should be of same datatype
//     std::string cars[3];
//     cars[0] = "Camaro";
//     cars[1] = "Mustang";
//     cars[2] = "Scorpio";
//     std::cout << cars[0]<<'\n'<<cars[1]<< '\n'<<cars[2]<<'\n';
// }
// int myNum =1;   //Global variablle

// void printNum();

// int main(){
//                //Local variable
//     printNum();
//     int myNum = 1;
//     std::cout<<myNum;
//     return 0;
    
// }

// void printNum(){
//     // int myNum = 2;         //local variable
//     std::cout<<myNum;
// }




// void bakePizza();
// void bakePizza(std::string topping1);
// void bakePizza(std::string topping1, std::string topping2);

// int main ()
// {
//     std::string firstName = "Bro";

// bakePizza("Peproni", "mushrooms");

// return 0;
// }

// void bakePizza(){
//     std::cout<<" Here is your Pizza\n";
// }
// void bakePizza(std::string topping1){
//     std::cout<<" Here is your "<<topping1<<" Pizza\n";

// }
// void bakePizza(std::string topping1, std::string topping2){
//     std::cout<<" Here is your "<<topping1<<" and "<<topping2<<" pizza\n";

// }


//     double length = 5.0;
//     double area =  square(length);
//     double volume = cube(length);

//     std::cout<<"Area = "<< area <<"cm^2\n";
//     std::cout<<"Volume = "<< volume <<"cm^3\n";
//     return 0;
// }
// double square(double length){
//     double result = length*length;   // or return length*length;
//     return result;
// }
// {
//     std::string name = "bro";
//     int age = 21;

// happyBirthday(name, age);
// happyBirthday(name, age);
// happyBirthday(name, age);
//     return 0;
// }

// void happyBirthday(std:: string name, int age ){                     //defining the function, it can be declared and defined at once too
//     std::cout<<"Happy birthday to you "<<name<< "\n";
//     std::cout<<"Happy birthday to you "<<name<<"\n";
//     std::cout<<"Happy birthday dear you "<<name<<"\n";
//     std::cout<<"Happy birthday to you "<<name<<"\n";
//     std::cout<<"You are "<<name<<" years old\n";
// }
//     srand(time(0));
//     int randNum = rand() % 5 + 1;
//     int choice = 1;
//     switch(randNum){
//         case 1: std::cout<<"You win T shirt ";
//         break;
//         case 2: std::cout<<"You win sticker";
//         break;
//         case 3: std::cout<<"You win bunglow";
//         break;
//         case 4: std::cout<<"You win Car";
//         break;
//         case 5: std::cout<<"You win fridge";
//         break;
//     }
// return 0;
// }
//     // not truly Random but they are close
//     srand(time(NULL));
//     int num1 = (rand() % 20)+1;  
//     std::cout<<num1<<'\n';
//     int num2 = (rand() % 20)+1;  
//     std::cout<<num2<<'\n';
//     int num3 = (rand() % 20)+1;  
//     std::cout<<num3<<'\n';
   
//  return 0;   
// }


    // for(int i=1; i<=69; i++){
    //     std::cout<<i<<"\n";

    // } 
//     std::string name;

//     while(name.empty()){
//         std::cout<<"Enter your name: ";
//         std::getline(std::cin, name);
//     }
//     std::cout<<"Hello "<<name;

// return 0;
// }
//     std::string name;

//     while(name.empty()){
//         std::cout<<"Enter your name: ";
//         std::getline(std::cin, name);
//     }
//     std::cout<<"Hello "<<name;

// return 0;
// }
//     std::string name;
//     // int choice = 1;
//     do{
//     std::cout<< "Enter your name: ";
//     std::getline(std::cin, name); 
//     // name.clear()  ---- for clearing name entered
//     // name.append("@gmail.com");            //appending a string
//     // name.insert(0, "@");     //------for inserting into string
//     // name.find(' ');          // gives us position of space
//     if(name.length()>20){
//         std::cout<<"Your name can't be bigger than 20 characters\n";
//     }else if(name.empty()){
//         std::cout<<"You didn't enter your name\n";

//     }
//     else{
//         std::cout<<"Welcome "<<name<<'\n';
//     }
//     }while(name.length()>12 ||name.empty());



// return 0;
// }

 
//     //Temperature Converter 

//     double temp;
//     char unit;
//     int choice;

// do{  
//     std::cout<<"************Temperature Converter***************\n";
//     std::cout<<"C = Celsius\n";
//     std::cout<<"F = Fahrenheit\n";
//     std::cout<<"What unit would you like to convert to? \n";
//     std::cin>>unit;
  
//     if(unit == 'C' || unit == 'c'){
//         std::cout<<"Enter temperature in Fahrenheit\n";
//         std::cin>>temp;

//         temp = (temp - 32.0)/1.8;
//         std::cout<<"Temperature is"<<temp<<"C\n";

//     }
//     else if(unit == 'F' || unit == 'f' )
//     {
//         std::cout<<"Enter temperature in Celsius\n";
//         std::cin>>temp;
//         temp = (1.8 *temp)+ 32.0;
//         std::cout<<"Temperature is"<<temp<<"F\n";
        
//     }
//     else{
//         std::cout<<"Please Enter only C or F\n";
//     }
//     std::cout<<"************************************************\n";
//     std::cout<<"Enter 1 to continue, any other to terminate\n";
//     std::cin>>choice;

//   }
//   while(choice == 1);





// return 0;
// }

    // Logical operators  && || and !
//     int temp;
//     std::cout<<"Enter the temperature: ";
//     std::cin>>temp;

//     // if (temp >= 0 && temp <= 30){
//     //     std::cout<<"The temperature is good! ";
//     // }
//     // else{
//     //     std::cout <<"The temperature is bad";
//     // }
//     if (temp <= 0 || temp >= 30){
//         std::cout<<"The temperature is bad! ";
//     }
//     else{
//         std::cout <<"The temperature is good ";
//     }

// return 0;
// }
//     char op;
//     double num1;
//     double num2;
//     double result;
//     int choice;

//     do{
//     std::cout<<"*********Calculator************\n";

//     std::cout<<"Enter the arithmatic operation you want to perform (+ or - or / or *): ";
//     std::cin>>op;

//     std::cout<<"Enter Number 1: ";
//     std::cin>>num1;

//     std::cout<<"Enter Number 2: ";
//     std::cin>>num2;

//     switch(op){
//         case '+':
//         result = num1+num2;
//         std::cout<<result<<'\n';
//         break;
//         case '-':
//         result = num1-num2;
//         std::cout<<result<<'\n';
//         break;
//         case '/':
//         result = num1/num2;
//         std::cout<<result<<'\n';
//         break;
//         case '*':
//         result = num1*num2;
//         std::cout<<result<<'\n';
//         break;
//     }
//     std::cout << "************************************************************\n";

//     std::cout << "Press '1' to continue, Press any  key to terminate: ";
//     std::cin >> choice;

//     } while (choice==1);

// return 0;
// }

// char grade;

// std::cout<<"What's your grade: ";
// std::cin>>grade;

// switch(grade){
//     case 'A':
//     std::cout<<"You did great";
//     break;
//     case 'B':
//     std::cout<<"You did Fine";
//     break;
//     case 'C':
//     std::cout<<"You Passed but can do better";
//     break;
//     case 'D':
//     std::cout<<"Blud you barely passed";
//     break;
//     case 'F':
//     std::cout<<"Mf You Failed";
//     break;
// }





// return 0;
// }
// // Switch statements
// int month;

// std::cout<<"Enter the Month: ";
// std::cin>>month;

// switch(month){
//     case 1:
//     std::cout<<"It is January";
//     break;
//     case 2:
//     std::cout<<"It is February";
//     break;
//     case 3:
//     std::cout<<"It is March";
//     break;
//     case 4:
//     std::cout<<"It is April";
//     break;
//     case 5:
//     std::cout<<"It is May";
//     break;
//     case 6:
//     std::cout<<"It is June";
//     break;
//     case 7:
//     std::cout<<"It is July";
//     break;
//     case 8:
//     std::cout<<"It is August";
//     break;
//     case 9:
//     std::cout<<"It is September";
//     break;
//     case 10:
//     std::cout<<"It is October";
//     break;
//     case 11:
//     std::cout<<"It is November";
//     break;
//     case 12:
//     std::cout<<"It is December";
//     break;
//     default:
//     std::cout<<"Blud that ain't a month";
// }
// return 0;
// }


// // if statements
// int age;
// std::cout<<"Enter your age: ";
// std::cin>>age;

// if(age>100)
// {
// std::cout<<"Go away Grandpa";
// }
// else if (age>=18){
//     std::cout<<"Welcome to our Site \n";
// }
// else if(age<=0)
// {
// std::cout<<"Blud you ain't even born yet";
// } 
// else{
//     std::cout<<"You ain't old enough Kid";
// }

//     return 0;
// }

// // Math functions 

//     double x =3.22;
//     double y = 3.91;
//     double z;
//     double a;
//     double b;
//     double c;
//     double d;
//     double e;
//     double f;
//     double g;
//     double pi=3.14267;

//     z = std::max(x,y); 
//     std::cout<< z<< '\n';
//     a = std::min(x,y);
//     std::cout<< a<< '\n';
//     b = pow(x, y);
//     std::cout<< b<<std::endl;
//     c = sqrt(b);
//     std::cout<< c<< std::endl;
//     d = abs(x-y);
//     std::cout<< d<< std::endl;
//     e = round(pi);
//     std::cout<< e<< std::endl;
//     f = ceil(x);
//     std::cout<< f<< std::endl;
//     g = floor(y);
//     std::cout<< g<< std::endl;

//     return 0;
// }


// input output

//     std::string name;
//     std::string intro;
//     int age;
//     std::cout << "Give introduction: ";
//     std::getline(std::cin, intro);           //to take all of line as input, string only allows single word
//     std::cout << "What's your name?: ";
//     std::cin>> name;
//     std::cout << "What's your age?: ";
//     std::cin>> age;
    

//     std::cout<< "Hello " <<name <<std::endl;
//     std::cout<< "You are " <<age << " years old";
//     std::cout<< "Your intro was  " <<intro << " your wish will be granted, don't worry";

// return 0;
// }
//     int correct =8;
//     int questions =10;
//     double score = correct/(double)questions*100;

//     std::cout << score << "%"; 
//  return 0;  
// }

 //rick roll
//     std::cout << (char) 78;
//     std::cout << (char) 101;
//     std::cout << (char) 118;
//     std::cout << (char) 101;
//     std::cout << (char) 114;
//     std::cout << (char) 32;
//     std::cout << (char) 71;
//     std::cout << (char) 111;
//     std::cout << (char) 110;
//     std::cout << (char) 110;
//     std::cout << (char) 97;
//     std::cout << (char) 32;
//     std::cout << (char) 71;
//     std::cout << (char) 105;
//     std::cout << (char) 118;
//     std::cout << (char) 101;
//     std::cout << (char) 32;
//     std::cout << (char) 89;
//     std::cout << (char) 111;
//     std::cout << (char) 117;
//     std::cout << (char) 32;
//     std::cout << (char) 85;
//     std::cout << (char) 112;







//     return 0; 
// }
    
    // // double x = 3.14;
    // double x = (int) 3.14;
    // std::cout << x;

    // // D joke
    // std::cout << (char) 100;

    // std::cout << (char) 105;

    // std::cout << (char) 99;

    // std::cout << (char) 107;



//     return 0;
// }































// int main (){
//     int students = 20;
//     // students +=1;
//     // students++;
//     //  students +=2;
//     //  students -=1;
//     //  students-- ;
//     //  students -=2;
//     //  students *=2;
//     //  students *=2;
//     //  students /=2;
//     //  students /=3;
//      int remainder = students % 3;
     

//     std::cout << remainder;

//     return 0;
// }


























// // typedef std ::vector<std::pair<std::string, int>> pairlist_t;
// // typedef std ::string text_t;
// // typedef int number_t;



// using text_t = std ::string ;
// using number_t = int ;

// int main(){
//     text_t firstName = "bro";
//     pairlist_t pairlist;

//     std::cout << firstName << '\n';

//     return 0; 
// }



























// namespace first{
//     int x =1;
// }

// namespace second{
//     int x = 2;
// }

// int main () {
//     int x=0;
//     std::cout << x << '\n';
//     std::cout << first::x << std::endl;
//     std::cout << second::x << std :: endl;
//     return 0;
// }




// int main (){
//     const double PI = 3.1426;
//     double radius = 10;
//     double circumference = 2*PI*radius;
//     double area = PI*radius*radius;
// }