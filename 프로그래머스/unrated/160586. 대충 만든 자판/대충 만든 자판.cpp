#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
    
    map<char, int> m;
    
    for(int i = 0; i < keymap.size(); i++)
    {
        for(int j = 0; j < keymap[i].size(); j++)
        {
            if(m.find(keymap[i][j])!= m.end())
            {
                m[keymap[i][j]]=min(m[keymap[i][j]], j+1);
            }
            else
            {
                m.insert(make_pair(keymap[i][j], j+1));
            }
        }
    }
    
    for(int i = 0; i < targets.size(); i++)
    {
        int count = 0;
        for(int j = 0; j < targets[i].size(); j++)
        {
            if(m.find(targets[i][j])!=m.end())
            {
                count += m[targets[i][j]];
            }
            else
            {
                count = -1;
                break;
            }
        }
        answer.push_back(count);
    }
    
    return answer;
}