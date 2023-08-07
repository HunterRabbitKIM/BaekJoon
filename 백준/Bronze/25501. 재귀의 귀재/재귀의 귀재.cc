#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int cnt;

int recursion(const char* s, int l, int r) {
    cnt++;
    if (l >= r) return 1;
    else if (s[l] != s[r]) return 0;
    else return recursion(s, l + 1, r - 1);
}

int isPalindrome(const char* s) {
    return recursion(s, 0, strlen(s) - 1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t, pal;
    char ch[1001];

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cnt = 0;
        cin >> ch;
        pal = isPalindrome(ch);
        cout << pal << " " << cnt << "\n";
    }
}