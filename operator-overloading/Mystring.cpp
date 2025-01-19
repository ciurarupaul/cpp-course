#include <cstring>
#include <iostream>
#include "Mystring.h"

// No-args constructor
Mystring::Mystring() 
    : str{nullptr} {
    str = new char[1];
    *str = '\0';
}

// Overloaded constructor
Mystring::Mystring(const char *s) 
    : str {nullptr} {
        if (s==nullptr) {
            str = new char[1];
            *str = '\0';
        } else {
            str = new char[std::strlen(s)+1];
            std::strcpy(str, s);
        }
}

// Copy constructor
Mystring::Mystring(const Mystring &source) 
    : str{nullptr} {
        str = new char[std::strlen(source.str) + 1];
        std::strcpy(str, source.str);
}

// Destructor
Mystring::~Mystring() {
    delete [] str;
}

// Copy assignment -- creates deep copy ; handles lvalue assignment
Mystring &Mystring::operator=(const Mystring &rhs) {
    std::cout << "Using copy assignment" << std::endl;
    if (this == &rhs)                               // self-assignment check
        return *this;

    delete [] this->str;                            // free existing memory 
    str = new char[std::strlen(rhs.str) + 1];       // allocate new memory (specific size)
    std::strcpy(this->str, rhs.str);                // copy the string
    return *this;
}

// Move assignment -- handles assignment from an rvalue, typically from a temp obj, that can be 'moved'
Mystring &Mystring::operator=(Mystring &&rhs){
// && indicates an rvalue c++11
    std::cout << "Using move assignment" << std::endl;
    if(this == &rhs)
        return *this;

    delete [] str;          // free existing memory
    str = rhs.str;          // steal the resource
    rhs.str = nullptr;      // nullify the source's pointer
    return *this;
}

// equality
bool Mystring::operator==(const Mystring &rhs) const {
    return (std::strcmp(str, rhs.str) == 0);
}

// make lowercase
Mystring Mystring::operator-() const {
    char *buff = new char[std::strlen(str) + 1];
    std::strcpy(buff, str);

    for(size_t i = 0; i < std::strlen(buff); i++)
        buff[i] = std::tolower(buff[i]);

    delete [] buff;
    Mystring temp {buff};
    return temp;
}

// concatenate
Mystring Mystring::operator+(const Mystring &rhs) const{
    char *buff = new char[std::strlen(str) + std::strlen(rhs.str) + 1];
    std::strcpy(buff, str);
    std::strcat(buff, rhs.str);
    Mystring temp {buff};
    delete [] buff;
    return temp;
}

// Display method
void Mystring::display() const {
    std::cout << str << " : " << get_length() << std::endl;
}

// getters
 int Mystring::get_length() const { return strlen(str); }
 const char *Mystring::get_str() const { return str; }

// overloaded insertion operator
std::ostream &operator<<(std::ostream &os, const Mystring &rhs) {
    os << rhs.str;
    return os;
}

// overloaded extraction operator
std::istream &operator>>(std::istream &in, Mystring &rhs) {
    char *buff = new char[1000];
    in >> buff;
    rhs = Mystring{buff};
    delete [] buff;
    return in;
}

