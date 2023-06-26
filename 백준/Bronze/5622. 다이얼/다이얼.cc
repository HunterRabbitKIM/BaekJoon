#include <iostream>
#include <string>
using namespace std;

int main() 
{
	string str;
	cin >> str;
    
// 각 알파벳 당 시간을 가지고 있는 배열
	int time[26] = { 3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10 };

	int sum = 0;
	for (int i = 0; i < str.size(); i++)
	{
		sum += time[str[i]-65];
	}

	cout << sum;

	return 0;
}