#include <iostream>

int age {34};

int main(){

    int favourite_number;

    std::cout << "Enter your favourite number between 1 and 100: " << std::endl;
    std::cin >> favourite_number;
    std::cout << "Awesome!! That's my favourite number too!" << std::endl;

    return 0;
}