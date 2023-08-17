#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    vector<string> answer(players);
    
    map<string, int> m;
    
    for(int i = 0; i < players.size(); i++)
    {
        m[players[i]] = i;
    }
    
    for(int i = 0; i < callings.size(); i++)
    {
        int player = m[callings[i]];
        m[answer[player-1]] += 1;
        m[callings[i]] -= 1;
            
        string tmp = answer[player];
        answer[player] = answer[player-1];
        answer[player-1] = tmp;
    }
    return answer;
}