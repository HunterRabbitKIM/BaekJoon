#include <iostream>
#include <vector>;
#include <cmath>;
using namespace std;

int arr[16];
int n;
int cnt = 0;
bool notattak;

void queen(int x)
{
	if (n == x)
	{
		cnt++;
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			arr[x] = i;
			notattak = true;
			for (int j = 0; j < x; j++)
			{
				if (arr[x] == arr[j] || abs(arr[x] - arr[j]) == abs(x - j))
				{
					notattak = false;
					break;
				}
			}
			if (notattak)
			{
				queen(x + 1);
			}
		}
	}
}


int main() {

	cin >> n;

	queen(0);
	
	cout << cnt;

}