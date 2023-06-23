#include <iostream>
using namespace std;

int main()
{
    int arr[42] = {0,};
    int A;
    int B=0;
    
    for(int i = 0; i<11; i++)
    {
        cin >> A;
        arr[A%42]++;
        
    }
    
    for(int i = 0; i<42; i++)
    {
        if(arr[i]>=1)
          B++;  
    }
    cout << B;
    
}