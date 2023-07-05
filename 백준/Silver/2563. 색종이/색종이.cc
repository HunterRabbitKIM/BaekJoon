#include <iostream>
using namespace std;

int main()
{
    int T;
    int x,y;
    int count = 0;
    int arr[100][100]={0,};
    
    cin >> T;
    
    for(int i = 0; i < T; i++)
    {
        cin >> x >> y;
        for(int i = x; i < x+10; i++)
        {
            for(int j = y; j < y+10; j++)
            {
                if(arr[i][j]==0)
                {
                    count++;
                    arr[i][j] = 1;
                }
            }
        }
    }
    cout << count;
    
}