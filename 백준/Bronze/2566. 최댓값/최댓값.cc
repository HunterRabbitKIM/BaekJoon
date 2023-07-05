#include <iostream>
using namespace std;

int main()
{
    int n;
    int max=-1,x,y;
    
    for(int i=1;i<10;i++)
    {
        for(int j=1; j<10; j++)
        {
            cin >> n;
            if(max<n)
            {
                max = n;
                x = i;
                y = j;
            }
        }
    }
    cout<<max<<endl<<x<<" "<<y;
}