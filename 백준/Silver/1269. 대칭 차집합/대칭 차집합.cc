#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int a,b;
    vector<int> num1;
    vector<int> num2;
    int number1, number2;
    
    cin >> a >> b;
    
    vector<int> count1;
    vector<int> count2;
    
    for(int i = 0; i < a; i++)
    {
        cin >> number1;
        num1.push_back(number1);
    }
    
    for(int i = 0; i < b; i++)
    {
        cin >> number2;
        num2.push_back(number2);
    }
    
    sort(num1.begin(), num1.end());
    sort(num2.begin(), num2.end());
    
    for(int i = 0; i < b; i++)
    {
        if(!binary_search(num1.begin(), num1.end(), num2[i]))
        {
            count1.push_back(number2);
        }
    }
    
    for(int i = 0; i < a; i++)
    {
        if(!binary_search(num2.begin(), num2.end(), num1[i]))
        {
            count2.push_back(number2);
        }
    }
    
    cout << count1.size()+count2.size();
    
    
    
    
}