#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    
    vector<int> arr;
    
    for(int i = 0; i < score.size(); i++)
    {
        arr.push_back(score[i]);
        sort(arr.begin(),arr.end());
        if(k < arr.size())
        {
            arr.erase(arr.begin());
        }
        answer.push_back(*arr.begin());
    }
    
    
    return answer;
}