using namespace std;
#include <iostream>

#include <cstring>
#include <cctype>

#include <string>

// all these functions are dependent on the null terminator. they stop at the first '\0' they encounter

int main(){

 /*

    **********************************
        *** C style strings ***
    **********************************

    char first_name[20] {};
    char last_name[20] {};
    char full_name[40] {};
    char temp[50] {};

    cout << "Please enter your first name: ";
    cin >> first_name;

    cout << "Please enter your last name: ";
    cin >> last_name;

    cout << "Hello, " << first_name << ". Your first name has " << strlen(first_name) + strlen(last_name) << " characters" << endl;

    strcpy(full_name, first_name);
    strcat(full_name, " ");
    strcat(full_name, last_name);

    cout << "Your full name is: " << full_name << endl;

    // short version for the above
    cout << "Enter your full name: ";
    cin.getline(full_name, 50);
    cout << "Your full name is: " << full_name << endl;

    // compare strings
    strcpy(temp, full_name);
    if(strcmp(temp, full_name) == 0)
        cout << temp << " and " << full_name << " are the same!" << endl;
    else
        cout << temp << " and " << full_name << " are NOT the same!" << endl;


    for(size_t i {0}; i < strlen(full_name); i++){
        if(isalpha(full_name[i]))
            full_name[i] = toupper(full_name[i]);
    }

    cout << "Your full name is: " << full_name << endl;

    **********************************
        *** C++ style strings ***
    **********************************

    string s1;
    string s2 {"Frank"};    // Frank
    string s3 {s2};         // Frank
    string s4 {"Frank", 3}; // Fra
    string s5 {s3, 0, 2};   // Fr
    string s6 (3, 'X');     // XXX

*/

    string s0;
    string s1 {"Apple"};
    string s2 {"Banana"};
    string s3 {"Kiwi"};
    string s4 {"apple"};
    string s5 {s1};         // Apple
    string s6 {s1, 0, 3};   //App
    string s7 {10, 'X'};    // XXXXXXXXXX

    


    return 0;
}   