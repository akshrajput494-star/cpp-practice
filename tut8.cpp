#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    // int a = 34;
    // cout<<"the value of a was "<<a<<endl;
    // a = 45;
    // cout<<"the value of a is "<<a<<endl;
    // // constents in c++
    // const int b =55;
    // cout<<"the value of b is "<<b<<endl;
    // // b= 23 // you will gen an error because b is an constant and its value can't be changed
    // cout<<"the value of b is "<<b<<endl;

    // int a = 3, b = 78, c = 1234;
    // cout<< "the value of a without setw is " << a << endl;
    // cout<< "the value of b without setw is " << b << endl;
    // cout<< "the value of c without setw is " << c << endl;

    // cout<< "the value of a with is " << setw(4) << a << endl;
    // cout<< "the value of b with is " << setw(4) << b << endl;
    // cout<< "the value of c with is " << setw(4) << c << endl; // by the use of setw we can set the minimum width for the output of the variable and if the value of the variable is less than the width then it will print some extra spaces before the value of the variable to make it equal to the width that we have set


    //operators precedence
    int a = 4, b = 6;
    int c = a*5+b;
    cout<<c;
    return 0;

}