#include <iostream>
using namespace std;
int main(){
    int age ;
    cout<<" tell me your age"<<endl;
    cin>>age;

    // selection control structure if else-if else ladder 
    // if (age<18)
    // {
    //     cout<<"you cannot come to the party"<<endl;
    // }
    // else if (age == 18){
    //     cout<<"you are a kid and you will enter in the party with a kid pass"<<endl;
    // }
    // else {
    //     cout<<"you can come to the party"<<endl;
    // }
    switch (age)
    {
    case 18:
        cout<<"you are 18"<<endl;
        break;
    case 22:
        cout<<"you are 22"<<endl;
        break;
    case 24:
        cout<<"you are 24"<<endl;
        break;
    
    default:
    cout<<"no special cases"<<endl;
        break;
    }


    return 0;
}