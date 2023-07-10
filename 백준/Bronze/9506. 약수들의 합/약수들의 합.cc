#include <iostream>
using namespace std;

int main()
{
    int n;
    
    while(true)
    {
        cin >> n;
        int index = 0;
        int sum = 0;
        int arr[n] = {0,};
        
        if(n == -1)
        {
            break;
        }
        
        for(int j = 1; j < n; j++)
        {
            if(n%j==0)
            {
                sum += j;
                arr[index] = j;
                index++;
            }
        }
        
        if(n != sum)
        {
            cout << n << " is NOT perfect." << endl;
        }
        else
        {
            cout << n << " = " << arr[0];
            for(int k = 1; k < n; k++)
            {
                if(arr[k] != 0)
                {
                    cout << " + " << arr[k];
                }
            }
            cout << endl;
        }
    }
}