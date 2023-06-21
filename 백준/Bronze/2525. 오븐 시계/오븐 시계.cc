#include <iostream>
using namespace std;

int main()
{
    int A, B; //현재 시간 A:시 B:분
    int C;    //요리하는 데 필요한 시간 C=분
    cin >> A >> B >> C;
    
    if(B+C < 60)
    {
        B = B+C;
    }
    else
    {
        A = (A+(B+C)/60)%24;
        B = (B+C)%60;
    }
    
    cout << A << " " << B;
        
    
}