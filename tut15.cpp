#include <iostream>
using namespace std;

// int sum(int a, int b){
//     int c = a + b;
//     return c;
//}

//function prototype
// type functon-name (arguments);
// int sum(int a, int b); //--> acceptable
// int sum(int a, b ); //-->not acceptable
int sum(int, int); //--> acceptable
// void g(void);// -->acceptable
void g();
int sum (int a, int b);
int main(){
    int num1, num2;
    cout<<"enter first number"<<endl;
    cin>>num1;
    cout<<"enter second number"<<endl;
    cin>>num2;
    cout<<"the sum of "<<sum(num1, num2);
    g();
    return 0;
}
int sum(int a, int b){
    int c = a + b;
    return c;
}

void g(){
    cout<<"\nHello, good morning";
}