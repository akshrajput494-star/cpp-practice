#include <iostream>
using namespace std;
typedef struct employee
{
    /* data */
    int eID;
    char favChar;
    float salary;
}ep;

union money
{
    /* data */
    int rice;
    char car;
    float pounds;
};

int main(){
enum meal{breakfast, lunch, dinner};
    meal m1 = breakfast;
    cout<<m1;
    // cout<<breakfast;
    // cout<<lunch;
    // cout<<dinner;

    // union money m1;
    // m1.rice = 3;
    // m1.car = 'c';
    // cout<<m1.car;
    
    
    // ep harry;
    // ep shubham;
    // ep rohan;
    // harry.eID = 1;
    // harry.favChar = 'c';
    // harry.salary = 120000;
    // cout<<"the id no of harry is "<<harry.eID<<endl;
    // cout<<"the fav character of harry "<<harry.favChar<<endl;
    // cout<<"the salary of harry is "<<harry.salary<<endl;
    // shubham.eID = 2;
    // shubham.favChar = 's';
    // shubham.salary = 180000;
    // cout<<"the id no of shubham is "<<shubham.eID<<endl;
    // cout<<"the fav character of shubham is "<<shubham.favChar<<endl;
    // cout<<"the salary of rohan is "<<shubham.salary<<endl;
    
    // rohan.eID = 2;
    // rohan.favChar = 'r';
    // rohan.salary = 180000;
    // cout<<"the id no of rohan is "<<rohan.eID<<endl;
    // cout<<"the fav characterof rohan is "<<rohan.favChar<<endl;
    // cout<<"the salary of rohan is "<<rohan.salary<<endl;

    return 0;
}