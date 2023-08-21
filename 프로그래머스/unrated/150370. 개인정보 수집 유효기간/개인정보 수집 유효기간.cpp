#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    vector<int> answer;
    
    map<char, int> m;
    
    for(auto term : terms)
    {
        m[term[0]]=stoi(string(term.begin()+1, term.end()));
    }
    
    int tyear = stoi(string(today, 0, 4))-2000;
    int tmonth = stoi(string(today, 5, 7))-1;
    int tday = stoi(string(today, 8,10))-1;
    
    int todays = (tyear * 12 * 28) + tmonth * 28 + tday;
    
    for(int i = 0; i < privacies.size(); i++)
    {
        const string privacie = privacies[i];
        string day(privacie.begin(), privacie.begin()+10);
        char termc = privacie[11];
        
        int month = m[termc];
        
        int term_year = month/12;
        int term_month = month % 12;
        
        int pyear = stoi(string(privacie, 0 ,4))+term_year;
        int pmonth = stoi(string(privacie, 5, 7))+term_month;
        int pday = stoi(string(privacie, 8, 10))-1;
        
        pyear -= 2000;
        pmonth -= 1;
        pday -= 1;
        
        int limit_day = (pyear*12*28)+pmonth*28+pday;
        if(todays > limit_day)
        {
            answer.push_back(i+1);
        }
    }
    
    
    return answer;
}