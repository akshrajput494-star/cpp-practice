#include <iostream>
using namespace std;
int c = 45;
int main()
{
    // ***********bilt in data types in c++ ************
    // int a, b, c;
    // cout << "Enter the value of a: "<<endl;
    // cin >> a;
    // cout << "Enter the value of b: "<<endl;
    // cin >> b;
    // c = a + b;
    // cout << "The sum of a and b is: " << c << endl;
    // cout << "the global c is " <<::c;
    
    //*********** float, double and long double literals in c++ ************
    // float d = 34.4f;
    // long double e = 34.4l;
    // cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
    // cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
    // cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
    // cout<<"The size of 34.41 is "<<sizeof(34.41)<<endl;
    // cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;
    // cout << "the value of d is " << d << endl << "the value of e is " << e;

    // ********* refrence variables in c++ ************
    
    // rohan das ---> monty --> rohu --> dangerous coder
    // float x = 455;
    // float & y = x;
    // cout << x << endl;
    // cout << y << endl;

    // ************** type casting in c++ ************
    int z = 45;
    float m = 45.46;
    cout << "the value of z is " << (float)z << endl;
    cout << "the value of z is " << float(z) << endl;
    cout << "the value of m is " << (int)m << endl;
    cout << "the value of m is " << int(m) << endl;
    int n = int(m);
    cout << "the expression is " << z + m << endl;
    cout << "the expression is " << z + int(m) << endl;
    cout << "the expression is " << z + (int)m << endl;

    return 0;

}
