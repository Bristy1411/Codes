#include <stdio.h>
int main()
{
    int i,j,k;
    for(i=0;i<5;i++)
    {
        for(j=0;j<4;j++)
        {
            for(k=0;k<3;k++)
            {
                printf("For i=%d, j=%d k=%d\n",i,j,k);
            }
        }
    }

    return 0;
}
