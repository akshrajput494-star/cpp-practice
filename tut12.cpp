#include <iostream>
using namespace std;

int main(){
    // what is a pointer  --> it is a data type which store the adresses of the other data types


    int a= 3;
    int * b = &a;
    // & --> (address of) Address of operator
    cout<<"the address of a is " <<&a<<endl;
    cout<<"the address of a is " <<b<<endl;

    // * --> (value at) Dereference of operators 
    cout<< "the value at address b is "<<*b<<endl;

    // poinyer to pointer 
    int ** c = &b;
    cout << "the address of b is " << &b << endl;
    cout  <<" the address of b is " << c << endl;
    cout <<" the value at address is c " << *c << endl;
    cout <<"the value at address at address c is "<<**c<<endl;

    return 0;

}