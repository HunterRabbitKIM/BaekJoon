#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <string>
using namespace std;

int cnt = 0;
int K;
int tmp[500001] = { 0, };

void merge(int* A, int p, int q, int r) {
    int i = p, j = q + 1, t = 1;
    while (i <= q && j <= r) {
        if (A[i] <= A[j])
        {
            tmp[t++] = A[i++];
        }
        else
        {
            tmp[t++] = A[j++];
        }
    }
    while (i <= q)
        tmp[t++] = A[i++];
    while (j <= r)
        tmp[t++] = A[j++];
    i = p; t = 1;
    while (i <= r)
    {
        A[i++] = tmp[t++];
        cnt++;
        if (cnt == K)
        {
            cout << tmp[t - 1];
        }
    }

}

void merge_sort(int* A, int start, int end) {
        int p = start, r = end, q;
    if (p < r) {
        q = (p + r) / 2;      
            merge_sort(A, p, q);      
            merge_sort(A, q + 1, r);  
            merge(A, p, q, r);        
    }
}



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N >> K;
    int* A;
    A = new int[N];
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    merge_sort(A, 0, N-1);
    if (cnt < K)
    {
        cout << -1;
    }
}
