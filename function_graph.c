//This program only supports integeral I/O.  2021/7/12

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int x = 0, y = 0;
int lb = 0;     //lower-bound
int ub = 0;     //upper-bound

int main()
{
    void draw(int x, int y);        //The core to draw the graph.

    printf("\n ~~~ Please enter the bound of 'x' : ");
    scanf("%d %d", &lb, &ub);
    printf("\nThe graph of the function on [ %d , %d ] is \n\n", lb, ub);
    printf("-----------------------------------------------------------------> y\n");

    x = lb;     //Give 'x' a start value.

    draw(x, y);

    printf("V x");
    printf("\n\n");

    system("pause");
    return 0;
}

void draw(int x,int y)      //core function body.
{
    for (; lb <= x && x <= 0;)
    {
        y = x * x;  //This should be the analytic expression of your function , input as y = f(x).
        int n = 0;
        printf("|");

        while( 0 <= n && n <= y-1 )
        {
            printf(" ");
            n = n + 1;
        }

        printf("+  (%d,%d)\n", x, y);
        x = x + 1;
        n = 0;
    }

    for (; 0 <= x && x <= ub;)
    {
        y = x * x;  //This should be the analytic expression of your function , input as y = f(x).
        int n = 0;
        printf("|");
        
        while( 0 <= n && n <= y-1 )
        {
            printf(" ");
            n = n + 1;
        }

        printf("+  (%d,%d)\n", x, y);
        x = x + 1;
        n = 0;
    }
    
}
