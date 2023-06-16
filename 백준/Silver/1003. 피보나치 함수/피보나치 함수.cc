#include <stdio.h>

int dp[41];

int fibonacci(int n) {
    if (n == 0) {
        dp[0]=0;
        return 0;
    } else if (n == 1) {
        dp[1]=1;
        return 1;
    }  
    if(dp[n] != 0)
    {
        return dp[n];
    }
    else {
        return dp[n] = fibonacci(n-1) + fibonacci(n-2);
    }
}

int main()
{
    int T, N;
    
    scanf("%d", &T);
    
    for(int i = 0; i < T; i++)
    {
        scanf("%d",&N);
        if(N==0)
        {
            printf("1 0\n");
        }
        else if(N==1)
        {
            printf("0 1\n");
        }
        else
        {
            fibonacci(N);
            printf("%d %d\n",dp[N-1], dp[N]);
        }
    }
    
    return 0;
}
