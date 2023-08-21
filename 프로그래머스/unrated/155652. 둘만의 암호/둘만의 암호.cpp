#include <string>
#include <vector>

using namespace std;

string solution(string s, string skip, int index) {
    string answer = "";
    
    for(auto c : s)
    {
        for(int i = 0; i < index;)
        {
            if(c + 1 <= 'z')
            {
                c += 1;
                i++;
            }
            else
            {
                c = 'a';
                i++;
            }
            if(skip.find(c) != string::npos)
            {
                i--;
            }
        }
        answer += c;
    }
    
    return answer;
}