#include<iostream>
using namespace std;
int glo = 6;
void sum()
{
    int a; 
    cout<<"the value of glo is "<<glo ;
}

int main()
{
    int glo = 9;
    glo = 36;

    // int a = 4;
    // int b = 5;
    int a = 5, b = 5;
    float pi = 3.14;
    char c = 'h';
    bool is_true = true;
    sum();
    cout<<" the value of glo is "<<glo << is_true;
    // cout<<"this is tutorial 4 here is the value of a is "<<a<<" and the value of b is "<<b;
    // cout<<"\nthe value of pi is "<<pi;
    // cout<<"\nthe value of c is "<<c;
    return 0;
}