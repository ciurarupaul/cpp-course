using namespace std;
#include <string>
#include <iostream>
#include <algorithm>

/*
// pyramid challenge
//  for input 'ABC', display
//   A  
//  ABA
// ABCBA

string reverse_string(string str) {
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
*/

/* 
pointers
*/
// You are tasked with writing a function that uses a pointer to multiply an integer value.
void multiply_with_pointer(int *ptr, int multiplier){
    *ptr *= multiplier;
}

// Write a C++ function find_max_element that takes an integer array and its size as input and returns the maximum element in the array using pointers.
int find_max_element(int *arr, int size){
   int idx {0}, max_number {*arr};

    while (++idx < size)
       if(*(arr + idx) > max_number){
            max_number =*(arr + idx);
       }

    return max_number;
}

// Write a C++ function reverse_array that takes an integer array and its size as input and reverses the order of the elements in the array. The function should modify the array in-place.
void reverse_array(int *arr, int size){
    
}

int main(){
    // 1st task
    int a {20};
    int *pointer {&a};
    multiply_with_pointer(pointer, 20);
    cout << a << endl;

    // 2nd task
    int arr[] = {12, 45, 67, 23, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int maxElement = find_max_element(arr, size);
    cout << maxElement << endl;

    // 3rd task
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
 
    reverse_array(arr, size);

    return 0;
}