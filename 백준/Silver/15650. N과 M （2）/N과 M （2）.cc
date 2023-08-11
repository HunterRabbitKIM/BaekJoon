#include <iostream>
using namespace std;

int n, m;
int arr[9];
bool visited[9];

void dfs(int depth, int x)
{
	if (depth == m)
	{
		for (int i = 0; i < m; i++)
		{
			cout << arr[i] << " ";
		}
		cout << "\n";
		return;
	}
	for(x; x<=n; x++)
	{
		if (!visited[x])
		{
			visited[x] = true;
			arr[depth] = x;
			dfs(depth + 1, x);
			visited[x] = false;
		}
	}
}

int main() {

	cin >> n >> m;
	dfs(0, 1);
	
}