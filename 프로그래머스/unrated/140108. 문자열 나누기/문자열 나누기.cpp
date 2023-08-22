#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    int x=0, x1=0;
    string first="";
    
    for(int i = 0; i < s.size(); i++)
    {
        if(first=="")
        {
            first = to_string(s[i]);
            x++;
            continue;
        }
        
        if(first == to_string(s[i]))
        {
            x++;
        }
        else
        {
            x1++;
        }
        
        if(x==x1)
        {
            answer++;
            x=0;
            x1=0;
            first = "";
        }
    }
    
    if(x != 0)
    {
        answer += 1;
    }
    
    return answer;
}