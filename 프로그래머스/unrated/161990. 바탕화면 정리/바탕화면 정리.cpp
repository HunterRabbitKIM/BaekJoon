#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> wallpaper) {
    vector<int> answer;
    
    int rdx=-1, rdy=-1;
    int lux=51, luy=51;
    int temp = 51;
    int sum = 0;
    char arr[50][50] ={'.', };
    
    for(int i = 0; i < wallpaper.size(); i++)
    {
        for(int j = 0; j < wallpaper[i].size(); j++)
        {
            arr[i][j] = wallpaper[i][j];
            if(arr[i][j] == '#')
            {
                if(rdx < i)
                {
                    rdx = i;
                }
                if(rdy < j)
                {
                    rdy = j;
                }
                if(lux > i)
                {
                    lux = i;
                }
                if(luy > j)
                {
                    luy = j;
                }
            }
            sum = ((rdx - lux)+(rdy - luy));
            if(sum < temp)
            {
                temp = sum;
            }
        }
    }
    if(sum > temp)
    {
        answer.push_back(lux);
        answer.push_back(luy);
        answer.push_back(rdx+1);
        answer.push_back(rdy+1);
    }
    
    return answer;
}