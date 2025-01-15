// pyramid challenge
//  for input 'ABC', display
//   A  
//  ABA
// ABCBA

using namespace std;
#include <string>
#include <iostream>
#include <algorithm>

string reverse_string(std::string str) {
   string reversed_string;
    reversed_string.resize(str.length()); // so you can access the spaces

    for (size_t i = str.length() - 1; i > 0; i--) {
        reversed_string[str.length() - i] = str[i - 1];
    }

    return reversed_string;
}


int main (){
    string str;
    cin >> str;

    for(size_t i{0}; i < str.length(); i++){

        int number_of_spaces = str.length() - i;
        string current_string {str, 0, i + 1};
        string reversed_string = reverse_string(current_string);

        for(int spaces{number_of_spaces}; spaces >= 0; spaces--)
            cout << " ";

        cout << current_string;
        cout << reversed_string;

        for(int spaces{number_of_spaces}; spaces >= 0; spaces--)
            cout << " ";

        cout << endl;
    }

    return 0;
}