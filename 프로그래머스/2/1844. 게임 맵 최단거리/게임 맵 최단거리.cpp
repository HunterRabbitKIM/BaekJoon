#include <vector>
#include <queue>
using namespace std;

struct Point {
    int x;
    int y;
    int distance;
};

int solution(vector<vector<int> > maps) {
    int n = maps.size();
    int m = maps[0].size();

    vector<vector<bool> > visited(n, vector<bool>(m, false));
    queue<Point> q;

    int dx[] = {-1, 1, 0, 0};
    int dy[] = {0, 0, -1, 1};

    q.push({0, 0, 1});
    visited[0][0] = true;

    while (!q.empty()) {
        Point current = q.front();
        q.pop();

        if (current.x == n - 1 && current.y == m - 1) {
            int answer = current.distance;
            return answer;
        }

        for (int i = 0; i < 4; i++) {
            int nx = current.x + dx[i];
            int ny = current.y + dy[i];

            if (nx >= 0 && nx < n && ny >= 0 && ny < m && maps[nx][ny] == 1 && !visited[nx][ny]) {
                q.push({nx, ny, current.distance + 1});
                visited[nx][ny] = true;
            }
        }
    }

    return -1;
}
