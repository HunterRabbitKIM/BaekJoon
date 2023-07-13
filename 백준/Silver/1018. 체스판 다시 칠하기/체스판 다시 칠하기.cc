#include <iostream>
using namespace std;

int main()
{
    char map[52][52];
    char wb[8][8];
    char bw[8][8];
    int count1=0; 
    int count2=0;
    int min = 999999;
    int n, m;
    
    cin >> n >> m;
    
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            if((i+j)%2==0)
            {
                wb[i][j] = 'W';
                bw[i][j] = 'B';
            }
            else
            {
                wb[i][j] = 'B';
                bw[i][j] = 'W';
            }
        }
    }
    
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> map[i][j];
        }
    }
    
    for(int x = 0; x<=n-8; x++)
    {
        for(int y = 0; y <= m-8; y++)
        {
            for(int k = 0; k < 8; k++)
            {
                for(int z = 0; z < 8; z++ )
                {
                    if(map[k+x][z+y] != wb[k][z])
                    {
                        count1++;
                    }
                    if(map[k+x][z+y] != bw[k][z])
                    {
                        count2++;
                    }
                }
            }
            if(count1 < count2)
            {
                if(min > count1)
                {
                    min = count1;
                }
            }
            else
            {
                if(min > count2)
                {
                   min = count2;
                }
            }
            count1 = 0;
            count2 = 0;
        }
    }
    cout << min;
    
    
}