// there are two types of header files
#include <iostream>
// 1. system defined header file - it comes with the compiler
// 2. user defined header file - it is written by the programmer
// #include "this.h" // this will produce an error if this.h is not present in the current directory or we can say current folder
using namespace std;

int main()
{
    int a = 16, b = 71;
    cout << "this is a hello world program"<<endl;
    cout << "operators in c++"<<endl;//(endl is used to print in new line just like \n)
    cout << "following are the types of operators in c++"<<endl;
    // Arithmetic operators(+,-,*,/,%,++,--)
    cout <<"the value of a + b is "<<a + b<<endl;
    cout <<"the value of a - b is "<<a - b<<endl;
    cout <<"the value of a * b is "<<a * b<<endl;
    cout <<"the value of a / b is "<<a / b<<endl;
    cout <<"the value of a % b is "<<a % b<<endl;
    cout <<"the value of a++ is "<<a++<<endl;
    cout <<"the value of a-- is "<<a--<<endl;
    cout <<"the value of ++a is "<<++a<<endl;
    cout <<"the value of --a is "<<--a<<endl;

    // asignment operators(=,+=,-=,*=,/=,%=)-> use to assign values to variables
    int c=3, d=7;
    char e ='d';

    // comparison operators(==,!=,>,<,>=,<=)-> use to compare two values
    cout <<"the value of a == b is "<<(a==b)<<endl;
    cout <<"the value of a != b is "<<(a!=b)<<endl;
    cout <<"the value of a > b is "<<(a>b)<<endl;
    cout <<"the value of a < b is "<<(a<b)<<endl;
    cout <<"the value of a >= b is "<<(a>=b)<<endl;
    cout <<"the value of a <= b is "<<(a<=b)<<endl; 

    // logical operators(&&,||,!) -> use to combine conditional statements
    cout <<"the value of logical and operator ((a==b) && (a<b)) is "<<((a==b) && (a<b))<<endl;
    cout <<"the value of logical or operator ((a==b) || (a<b)) is "<<((a==b) || (a<b))<<endl;
    cout <<"the value of logical not operator (!(a==b)) is "<<(!(a==b))<<endl;
    return 0;
    }