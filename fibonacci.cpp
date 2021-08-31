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
