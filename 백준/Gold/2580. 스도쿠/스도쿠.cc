#include <iostream>
#include <vector>;
#include <cmath>;
using namespace std;

int board[9][9]; // 보드 선언
vector<pair<int, int>> numbers; //빈칸
int cnt = 0;
bool finish = false;

bool check(pair<int, int> num)
{
	int x = num.first / 3;
	int y = num.second / 3;
	for (int i = 0; i < 9; i++) // 같은 행, 같은 열
	{
		if (board[num.first][i] == board[num.first][num.second] && i != num.second)
		{
			return false;
		}
		if (board[i][num.second] == board[num.first][num.second] && i != num.first)
		{
			return false;
		}
	}
	for (int i = 3 * x; i < 3 * x + 3; i++) //같은 구역
	{
		for (int j = 3 * y; j < 3 * y + 3; j++)
		{
			if (board[i][j] == board[num.first][num.second])
			{
				if (i != num.first && j != num.second)
				{
					return false;
				}
			}
		}
	}
	return true;
}

void sudoku(int n)
{
	if (n == cnt)
	{
		for (int i = 0; i < 9; i++)
		{
			for (int j = 0; j < 9; j++)
			{
				cout << board[i][j] << " ";
			}
			cout << "\n";
		}
		finish = true;
		return;
	}
	for (int k = 1; k <= 9; k++)
	{
		board[numbers[n].first][numbers[n].second] = k; //1~9
		if (check(numbers[n]))
		{
			sudoku(n + 1);
		}
		if (finish)
		{
			return;
		}
	}
	board[numbers[n].first][numbers[n].second] = 0;
	return;
}


int main() {
	pair<int, int> number;
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cin >> board[i][j];
			if (board[i][j] == 0)
			{
				cnt++;
				number.first = i;
				number.second = j;
				numbers.push_back(number);
			}

		}
	}
	sudoku(0);
}