#include <iostream>
using namespace std;

int main(){
    int marks[4]= {23, 34, 45, 56};
    int mathmarks [4];
    mathmarks[0] = 456;
    mathmarks[1] = 123;
    mathmarks[2] = 234;
    mathmarks[3] = 345;

    cout<<"these are math marks"<<endl;
    cout<<mathmarks[0]<<endl;
    cout<<mathmarks[1]<<endl;
    cout<<mathmarks[2]<<endl;
    cout<<mathmarks[3]<<endl;
    //you can change the value of an array element
    marks[2]= 344;  
    cout<<"these are marks"<<endl;  
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    for (int i = 0; i < 4; i++)
    {
        cout<<"the value of marks "<<i<<" is "<<marks[i]<<endl;
    }

    // quiz " do same with while & do_while loops "

    //while
    // int i = 0;
    // while (i < 4)
    // {
    //     cout<<"the value of marks "<<i<<" is "<<marks[i]<<endl;
    //     i++;
    // }

    //do_while
    // int i = 0;
    // do 
    // {
    //     cout << "the value of marks " << i << " is " << marks[i] << endl;
    //     i++;
    // } while (i < 4);

    //pointers and arrays
    int* p = marks;
    cout<<*(p++)<<endl;
    cout<<*(++p);
    // cout<<"the value of marks[0] is "<<*p<<endl;
    // cout<<"the value of marks[0] is "<<*(p+1)<<endl;
    // cout<<"the value of marks[0] is "<<*(p+2)<<endl;
    // cout<<"the value of marks[0] is "<<*(p+3)<<endl;
    
    return 0;
}