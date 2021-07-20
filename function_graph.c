//This program only supports integeral I/O.  Date: 2021/7/12   From: Eplankton

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int x = 0, y = 0;
int lb = 0;     //lower-bound
int ub = 0;     //upper-bound
int step = 1;   //the length of one step

int main()
{
    void graph(int x, int y);        //The core to draw the graph.

    printf("\n ~~~ Please enter the bound of 'x' : ");
    scanf("%d %d", &lb, &ub);
    printf("\n ~~~ The step length is : ");
    scanf("%d", &step);
    printf("\nThe graph of the function on [ %d , %d ] is \n\n", lb, ub);
    printf("-----------------------------------------------------------------> y\n");

    x = lb;     //Give 'x' a start value.

    graph(x, y);        //Graph function.

    printf("|\n");
    printf("V x");
    printf("\n\n");

    system("pause");
    return 0;
}

void graph(int x,int y)      //core function body.
{
    for (; lb <= x && x <= 0;)
    {
        y = x * x;  //analytic expression of function , input as y = f(x).
        int n = 0;
        printf("|");

        while( 0 <= n && n <= y-1 )
        {
            printf(" ");
            n = n + 1;
        }

        printf("+  (%d,%d)", x, y);
        n = 1;      //Reuse the value 'n' .

        while( 0 <= n && n <= step )
        {
            printf("\n");
            n = n + 1;
        }

        x = x + step;
        n = 0;
    }

    for (; 0 <= x && x <= ub;)
    {
        y = x * x;  //analytic expression of function , input as y = f(x).
        int n = 0;
        printf("|");
        
        while( 0 <= n && n <= y-1 )
        {
            printf(" ");
            n = n + 1;
        }

        printf("+  (%d,%d)", x, y);
        n = 1;      //Reuse the value 'n' .

        while( 0 <= n && n <= step )
        {
            printf("\n");
            n = n + 1;
        }

        x = x + step;
        n = 0;
        
    }

}
