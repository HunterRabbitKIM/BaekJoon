#include <iostream>
using namespace std;

int main()
{
    int N;
    
    int count=0;
    int output=0;
    
    int temp;
    
    cin >> N;
    
    while(count != N)
    {
        output++;
        temp = output;
        
        while(temp != 0)
        {
            if(temp % 1000 == 666)
            {
                count++;
                break;
            }
            else
            {
                temp/=10;
            }
        }
    }
    cout << output;
}