#include <iostream>
using namespace std;

int main()
{
    int n[] = {1,1,2,2,2,8};
    int w;
    
    for(int i = 0; i<6; i++ )
    {
        cin >> w;
        n[i] = n[i]-w;
    }
    
    for(int i = 0; i<6; i++)
    {
        cout << n[i] << " ";
    }
    
    
}