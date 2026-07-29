#include <iostream>
using namespace std;
int main(){
    /* 
    loops in c++
    there are three type of loops in c++
    1. for loop
    2. while loop
    3. do while loop
    */
   //for loop syntax
   //for(initialization; condition; updation) 
    //for (int i = 0; i <= 40; i++)
    //{

    //cout << i <<endl;
    //}
    //example of infinite for loop
    // for (int i = 0; i < 40; i--)
    // {
    //     cout << i <<endl;
    // }
    
    //while loop syntax
    // while(condition){
    // c++ statements;    
    //}
    //printing 1 to 40 using while loop 
    // int i = 10;
    //     while (i <= 40)
    //     {
    //         cout << i <<endl;
    //         i++;
    //     }
   
    //example of infinite while loop 
    // while (true){
    //     int i = 1;
    //     cout<<i<<endl;
    //     i++;
    // }

    // do while loop syntax
    // do{
    // c++ statements;
    // }while(condition);
    //printing 1 to 40 using do while loop

    int i = 1, n =6;
    do{
        cout << i*n <<endl;
        i++;
    }while (false); 

    return 0;
}