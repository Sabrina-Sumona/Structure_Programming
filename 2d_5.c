#include<stdio.h>
# define size 5
void printgrid(int grid[ ][size]);


int main ()
{
    int i,j,k=1;
    int grid[size][size];

        for(i=0;i<size;i++)
        {
            for(j=0;j<size;j++)
            {
                grid[i][j]=(size*k-j);

            }
            k++;
        }

    printgrid(grid);
    return 0;
}


void printgrid(int grid[][size])
{
    int i,j;

    for(i=(size-1);i>=0;i--)
    {
        for(j=(size-1);j>=0;j--)
        {

            printf("%d ",grid[i][j]);

        }
        printf ("\n");
    }

}


