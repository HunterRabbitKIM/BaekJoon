#include <iostream>
using namespace std;

int main()
{
    int T;
    int C;
    
    cin >> T;
    
    for(int i = 0; i < T; i++)
    {
        int Q = 0, D = 0, N = 0, P = 0;
        cin >> C;
        while(C)
        {
            if(C>=25)
            {
                Q++;
                C -= 25;
            }
            else if(C>=10)
            {
                D++;
                C -= 10;
            }
            else if(C>=5)
            {
                N++;
                C -= 5;
            }
            else if(C>=1)
            {
                P++;
                C -= 1;
            }
            else
            {
                break;
            }
        }
        cout << Q << " " << D << " " << N << " " << P << endl;
        
    }
    
}