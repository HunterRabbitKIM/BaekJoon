#include <iostream>
#include <array>
using namespace std;

int main()
{
    int N;
    float arr[1001] ={0,};
    int max = 0;
    float result = 0;
    cin >> N;
    
    for(int i = 0; i < N; i++)
    {
        cin >> arr[i];
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }
    for(int i = 0; i < N; i++)
    {
        arr[i]=arr[i]/max*100;
        result += arr[i];
    }
    result = result/N;
    cout << result << endl;
    
}