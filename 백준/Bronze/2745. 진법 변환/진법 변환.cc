#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int main()
{
    string N;
    int B;
    cin >> N >> B;
    
    int count = 0;
    
    for(int i = 0; i < N.length(); i++)
    {
        if('0'<=N[i] && N[i]<='9')
        {
            count += (N[i]-48)*(int)pow(B,N.length()-1-i);
        }
        else
        {
            count += (N[i]-65+10)*(int)pow(B,N.length()-1-i);
        }
    }
    
    cout << count;
    
    
    
    
}