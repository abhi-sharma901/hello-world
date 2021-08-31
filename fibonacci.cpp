/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    cout<<"Fibonacci Program\n";
    int a=8,f=0,s=1,t;
    cout<<f<<" "<<s<<" ";
    while(a){
        t=f+s;
        cout<<t<<" ";
        f=s;
        s=t;
        a--;
    }
    return 0;
}
