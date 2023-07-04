#include <iostream>
using namespace std;

int main()
{
    string name;
    float avg=0;
    float sum=0;
    
    float score[20]={0,};
    float grade[20]={0,};
    
    string g;
    
    for(int i = 0; i<20; i++)
    {
        cin >> name >> grade[i] >> g;
        if(g == "A+")
        {
            score[i] = 4.5;
        }
        else if(g == "A0")
        {
            score[i] = 4.0;
        }
        else if(g == "B+")
        {
            score[i] = 3.5;
        }
        else if(g == "B0")
        {
            score[i] = 3.0;
        }
        else if(g == "C+")
        {
            score[i] = 2.5;
        }
        else if(g == "C0")
        {
            score[i] = 2.0;
        }
        else if(g == "D+")
        {
            score[i] = 1.5;
        }
        else if(g == "D0")
        {
            score[i] = 1.0;
        }
        else if(g == "F")
        {
            score[i] = 0.0;
        }
        else if(g == "P")
        {
            score[i] = 0.0;
            grade[i] = 0;
        }
        avg += score[i]*grade[i];
        sum += grade[i];
    }
    
    avg = avg / sum;
    cout << fixed;
    cout.precision(6);
    cout << avg;
}