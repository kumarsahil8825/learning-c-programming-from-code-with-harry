#include <stdio.h>
#include <math.h>

int main()
{
    int i, j,k, length, breadth;

    printf("Enter the Value of Length:- ");
    scanf("%d", &length);
    k = length;
    for (i = 1; i <= length; i++)
    {
        for (j = 1; j <= length; j++)
        {
            if (i == j || k == j )
            {
                printf("* ");

            }
            else
            {
                printf("  ");
            }
            
        }
        k--;
        printf("\n");
    }

    return 0;
}
