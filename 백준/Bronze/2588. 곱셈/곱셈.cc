#include <iostream>
using namespace std;

int main()
{
    int A;
    int B;
    
    cin >> A >> B;
    cout << A*(B%10) << endl << A*((B/10)%10) << endl << A*((B/100)%10) << endl << A*B << endl;
}