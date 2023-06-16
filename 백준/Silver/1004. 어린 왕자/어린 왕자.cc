#include<stdio.h>
#include<cmath>

int main()
{
    int T, n;
    int x1, y1, x2, y2, cx, cy, r;
    int touch;
    double planetD, planetD2;
    
    scanf("%d", &T);
    
    for(int i = 0; i<T; i++)
    {
        touch = 0;
        scanf("%d %d %d %d",&x1, &y1, &x2, &y2);
        scanf("%d", &n);
        for(int j = 0; j < n; j++)
        {
            scanf("%d %d %d", &cx, &cy, &r);
            planetD = sqrt(pow(x1-cx,2)+pow(y1-cy,2));
            planetD2 = sqrt(pow(x2-cx,2)+pow(y2-cy,2));
            if((planetD < r && planetD2 > r)||(planetD > r && planetD2 < r))
            {
                touch++;
            }
            
        }
        printf("%d\n", touch);
    }
    return 0;
}