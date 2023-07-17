#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    int arr[10001] = {0,};
    int a;
    
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a);
        arr[a]++;
    }
    
    for(int i = 0; i < 10001; i++)
    {
        for(int j = 0; j < arr[i]; j++)
        {
            printf("%d\n", i);
        }
    }
}