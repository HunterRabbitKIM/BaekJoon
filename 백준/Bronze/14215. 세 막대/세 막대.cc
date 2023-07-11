#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    
    if(a>=b+c)
    {
        a=b+c-1;
    }
    else if(b>=a+c)
    {
        b=a+c-1;
    }
    else if(c>=a+b)
    {
        c=a+b-1;
    }
    cout << a+b+c;
}