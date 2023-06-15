#include <stdio.h>
#include <math.h>

int main()
{
    int testcase,x1,y1,r1,x2,y2,r2;
    float distance;
    
    scanf("%d",&testcase);
    
    for(int i = 0; i<testcase; i++)
    {
        scanf("%d %d %d %d %d %d",&x1,&y1,&r1,&x2,&y2,&r2);
        distance=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
        
        if(distance == 0 && r1 == r2)
        {
            printf("-1\n");
        }
        else if(distance == r1+r2 || distance == abs(r1-r2))
        {
            printf("1\n");
        }
        else if(distance < r1+r2 && distance > abs(r1-r2))
        {
            printf("2\n");
        }
        else
        {
            printf("0\n");
        }
    }
    return 0;
}