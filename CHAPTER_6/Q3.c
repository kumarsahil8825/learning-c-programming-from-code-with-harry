#include<stdio.h>

int main(){
    int height;
    int breadth = 1;
    printf("This program print right trangle patterns with star\n");

    printf("Enter the Height in number:- ");
    scanf("%d", &height);

    for (int i = 1; i <= height; i++)
    {
        for (int j = 1; j <= breadth; j++)
        {
            printf("*");
        }
    printf("\n");
    breadth++;
    }
    return 0;
}