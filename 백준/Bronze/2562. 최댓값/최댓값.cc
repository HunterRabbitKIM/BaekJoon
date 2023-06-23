#include <iostream>
using namespace std;

int main()
{
    int arr[9];
    
    for(int i = 0; i < 9; i++)
    {
        cin >> arr[i];
    }
    
    int maxvalue = -1;
    int maxindex;
    
    for(int i = 0; i < 9; i++)
    {
        if(arr[i]>maxvalue)
        {
            maxvalue = arr[i];
            maxindex = i;
        }
    }
    cout << maxvalue << endl << maxindex+1;
}