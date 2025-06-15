// Level 8: Basic String Manipulation ---Work with text data.
#include<bits/stdc++.h>
using namespace std;

std::string trim(const std::string& str) {
    // Find the first character that is not whitespace
    const size_t first = str.find_first_not_of(" \t\n\r");

    // If the string is all whitespace, return it as is.
    if (std::string::npos == first) {
        return str;
    }

    // Find the last character that is not whitespace
    const size_t last = str.find_last_not_of(" \t\n\r");

    // Return the substring between the first and last non-whitespace characters
    return str.substr(first, (last - first + 1));
}

int main(){

// 91)String Length: Ask the user for a word and print its length (number of characters).

// string str;
// cout<<"Enter \n";
// // cin>>str;
// getline(cin, str);
// // int l = str.length();
// // cout<<"The length is \n"<<l;
// int count=0;
// for(int i=0; str[i]!=0;i++){
// count++;
// }
// cout<<count;

// 92)String Concatenation (First/Last Name): Ask the user for their first name and last name separately. Create a full name by concatenating them with a space in between and print it.

// string first_name, last_name, full_name;
// cout<<"Enter your first name\n";
// // cin>>first_name;
// getline(cin, first_name);
// cout<<"Enter your last name\n";
// // cin>>last_name;
// getline(cin,last_name);
// full_name = first_name +" "+ last_name;
// cout<<full_name;

// 93)Uppercase String: Ask the user for a word. Print the word in all uppercase letters.

// string str;
// cout<<"Enter the word\n";
// getline(cin, str);
// // transform(str.begin(), str.end(),str.begin(), :: toupper);
// for(int i=0;i<str.length();++i){
//     str[i] = toupper(str[i]);
// }
// cout<<str;

// 94)Lowercase String: Ask the user for a word (possibly with mixed case). Print the word in all lowercase letters.

// string str;
// cout<<"Enter the word\n";
// getline(cin, str);
// // for(int i=0; i<str.length();++i){
// //     str[i]=tolower(str[i]);
// // }
// transform(str.begin(),str.end(),str.begin(), :: tolower);
// cout<<str;

// 95)Print Characters of a String (Loop): Ask the user for a word. Use a loop to print each character of the word on a new line.

// string str;
// cout<<"Enter the word\n";
// getline(cin, str);
// for(int i=0;i<str.length();++i){
//     cout<<str[i]<<endl;
// }

// 96)Reverse a String (using loop): Ask for a string. Create a new string that is the reverse of the input string by iterating through the input string and building the new string character by character. Print the reversed string.

// string str, rstr;
// cout<<"Enter the word\n";
// getline(cin, str);
// for(int i=str.length();i>=0;--i){
// rstr = rstr + str[i];
// }
// cout<<rstr;

// 97)Access First Character: Ask for a string and print its first character.

// string str;
// cout<<"Enter the word\n";
// getline(cin,str);
// cout<<str[0];

// 98)Access Last Character: Ask for a string and print its last character.

// string str;
// cout<<"Enter the word\n";
// getline(cin, str);
// int i = str.length();
// i=i-1;
// cout<<str[i];

// 99)Substring Check: Ask for two strings. Check if the second string is a substring of the first.

// string str1,str2;
// bool is = false;
// cout<<"Enter first word\n";
// getline(cin,str1);
// cout<<"Enter second word\n";
// getline(cin,str2);

// // for(int i=0;i<(str1.length()-str2.length());++i){   //checks uptill largest possible starting point
// //     bool current_match = true;
// //     for(int j=0;j<str2.length();++j){
// //         if(str1[i+j]!=str2[j]){
// //             current_match=false;
// //             break;
// //         }
// //     }
// //     if(current_match){
// //         is = true;
// //         break;
// //     }
// // }

// // if(is){
// //         cout<<str2<<" is substrate of "<<str1<<endl;
// //     }else{
// //         cout<<str2<<" is not substrate of "<<str1<<endl;
// //     }

// if (str1.find(str2) != string::npos){ 
//     cout<<str2<<" is substrate of "<<str1<<endl;
//     }else{
//         cout<<str2<<" is not substrate of "<<str1<<endl;
//     }

// 100)Replace Character: Ask for a string, a character to replace, and a new character. Replace all occurrences and print the new string.

// string str;
// char ch, nch;
// cout<<"Enter the word/line\n";
// getline(cin,str);
// cout<<"Enter the character to replace\n";
// cin>>ch;
// cout<<"Enter the character to replace with\n";
// cin>>nch;

// // for(int i=0;i<str.length();++i){
// //     if(str[i]==ch){
// //         str[i] = nch;
// //     }
// // }
// // cout<<str;

// //****find method*/
// // for(int i=0;i<str.length();++i){        
// //    int a = str.find(ch);
// //    str[a]=nch;
// // }
// // cout<<str;

// //*****Replace method (idiomatic way for this question) */
// replace(str.begin(),str.end(),ch,nch);
// cout<<str;

// 101)Remove Spaces: Ask for a string and remove all spaces from it. Print the result.

// string str,rstr;
// cout<<"Enter the line\n";
// getline(cin,str);
// str.erase(remove(str.begin(),str.end(), ' '), str.end());
// cout<<str;

// 102)Count Specific Character: Ask for a string and a character. Count how many times the character appears in the string.

// string str;
// char ch;
// int c=0;
// cout<<"Enter the word/line\n";
// getline(cin,str);
// cout<<"Enter the character you want to find\n";
// cin>>ch;
// for(int i=0;i<str.length();i++){
//     if(str[i]==ch){
//         c++;
//     }
// }
// cout<<c;

// //std::count approach from #include<algorithm)
// // c = count(str.begin(),str.end(), ch);
// // cout<<c;

// 103)Check Palindrome (Simple Word): Ask for a word. Check if it reads the same forwards and backwards (e.g., "madam").

// string str,rstr;
// cout<<"Enter the word\n";
// getline(cin,str);
// for(int i=0;i<str.length();i++){
//     rstr = str[i]+rstr;
// }
// cout<<rstr<<endl;
// if(rstr==str){
//     cout<<str<<" is a palindrome\n";
// }else{
//     cout<<str<<" is not a palindrome\n";
// }

// 104)Check if String is Empty: Ask for a string and print if it's empty or not.

// string str;
// bool isempty=true;
// cout<<"Enter string\n";
// getline(cin,str);
// /*********this code assumes whitespaces only and zero length as empty string whereas standard is considering str.length()=0 string as empty string******** */
// // for(int i=0;i<str.length();i++){
// //     if(str[i] != ' '){
// //         cout<<"The string is not empty";
// //         isempty=false;
// //         break;
// //     }
// // }

// //true empty string solution
// if(str.empty()){
//     cout<<"String is empty\n";
// }else{
//     cout<<"string is not empty";
// }

// // if(isempty==true){
// //     cout<<"String is empty";
// // }

// 105)Strip Leading/Trailing Spaces: Ask for a string with leading/trailing spaces and print it with those spaces removed.

// string str,rstr;
// cout<<"Enter the word/line with space at forefront or end"<<endl;
// getline(cin,str);
// for(int i=0;i<str.length();i++){
//     if(str[i]!=' '){
//         rstr = rstr+str[i];
//     }
// }
// cout<<rstr;

/***A more straightforward and correct approach in C++ is to use the find_first_not_of and find_last_not_of string methods.[1] These functions find the positions of the first and last characters that are not spaces */

/** trim function is defined above int main()*/

// std::string my_string;
//     std::cout << "Enter the word/line with space at forefront or end" << std::endl;
//     std::getline(std::cin, my_string);

//     // Now, CALL the function you defined above
//     std::string trimmed_string = trim(my_string);

//     std::cout << "The trimmed string is: " << trimmed_string << std::endl;



// 106)Capitalize First Letter: Ask for a string and capitalize only its first letter.

// string str;
// cout<<"Enter the word\n";
// getline(cin,str);
// str[0]=toupper(str[0]);
// cout<<str;

//107)Counting Vowels in a String: Ask for a word and count how many vowels (a, e, i, o, u, case-insensitive) it contains.

// string str;
// // int count;
// cout<<"Enter the word or line\n";
// getline(cin,str);
// // for(int i=0;i<str.length();++i){
// //     // str = tolower(str[i]);               //this wouldn't work because str is a string and tolower(str[i]) is a char
// //     // str[i] = tolower(str[i]);             //this works but permanently modifies user's input to lower case which is not ideal
// //     char ch = tolower(str[i]);               //this is perfect idiomatic way
// //     if(str[i]=='a'|| str[i] == 'e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
// //         count  = count+1;
// //     }
// // }
// /***STD::COUNT_IF APPROACH */

// long long count = count_if(str.begin(),str.end(), [](char c){
//     char lower_c = tolower(c);
//     return lower_c == 'a' || lower_c == 'e' || lower_c == 'i' || lower_c == 'o' || lower_c == 'u';
// });

// cout<<"Total number of vowels = "<<count;

// 108)Count Words in a Sentence: Ask for a sentence and count how many words are in it (assume words are separated by single spaces).

// string str;
// long words=1;
// cout<<"Enter the line\n";
// getline(cin,str);
// str = trim(str);
// for(int i=0;i<str.length();i++){
// if(str[i]==' '){
//     words++;
// }
// }
// cout<<"Total number of words are = "<<words;

/*### A More Robust and Standard C++ Solution

The most common and reliable way to solve this in C++ is to use a **`stringstream`**. This object allows you to treat a string as an input stream, just like `cin`. The extraction operator `>>` is perfect for this because it automatically does two things:
1. Skips any and all leading whitespace.
2. Reads characters until it hits whitespace again.

This means it naturally separates "words" for you, handling all the edge cases automatically.*/



// 109)Count Uppercase and Lowercase Characters: Ask for a string and count how many uppercase and lowercase letters it contains.

// string str, rstr;
// long up=0;
// cout<<"Enter the string\n";
// getline(cin, str);
// for(int i=0;i<str.length();i++){
//     if(str[i]!=' '){              //creating rstr to keep original str unchanged
//         rstr = rstr + str[i];
//     }
// }
// for(int j=0;j<rstr.length();j++){
//      if(rstr[j]!=tolower(rstr[j])){
//         up++;
//     }
// }
// cout<<"Total uppercase letters = "<<up<<endl<<"Total lowercase letters = "<<rstr.length()-up;

// C++ provides a much clearer and more standard way to do this in the <cctype> header: the isupper() and islower() functions. Using them makes your code easier to read and understand.

// string str;
// long uc=0,lc=0; //uppercase and lowercase
// cout<<"Enter string\n";
// getline(cin,str);
// for(char c : str){
//     if(isupper(c)){
//         uc++;
//     }else if(islower(c)){
//         lc++;
//         }
//     }

// cout<<"Total uppercase letters are = "<<uc<<endl<<"Total lowercase letters are = "<<lc<<endl;



return 0;
}