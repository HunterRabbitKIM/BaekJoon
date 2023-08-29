#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    
    for(string s : babbling)
    {
        int use = 0;
        bool j = true;
        for(int i = 0; i < s.size(); i++)
        {
            if(s.substr(i,3)=="aya" && use != 1)
            {
                use = 1;
                i+=2;
            }
            else if(s.substr(i,2)=="ma" && use != 2)
            {
                use = 2;
                i+=1;
            }
            else if(s.substr(i,3)=="woo" && use != 3)
            {
                use = 3;
                i+=2;
            }
            else if(s.substr(i,2)=="ye" && use != 4)
            {
                use = 4;
                i+=1;
            }
            else
            {
                j = false;
                break;
            }
        }
        if(j== true)
        {
            answer++;
        }
    }
    
    return answer;
}