#include <iostream>
using namespace std;

int main()
{
    string std[] = {"c=","c-","dz=","d-","lj","nj","s=","z="};
    string word;
    
    cin >> word;
    
    for(int i = 0; i<8; i++)
    {
        while(true)
        {
            if(word.find(std[i])==string::npos)
            {
                break;
            }
            word.replace(word.find(std[i]),std[i].length(), "a" );
        }
    }
    cout << word.length();
}