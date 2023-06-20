#include <stdio.h>

int draw_rect_triangle(int n);  // Function to draw a rectangle triangle
int draw_equilateral_triangle(int n);  // Function to draw an equilateral triangle

int main(void)
{
    int n, type;

    printf("Which type of triangle would you like to draw? (1 - rectangular triangle, 2 - equilateral triangle): ");
    scanf("%d", &type);

    printf("Enter the height of the triangle: ");
    scanf("%d", &n);

    switch (type)
    {
    case 1:
    {
        draw_rect_triangle(n);
        break;
    }
    case 2:
    {
        draw_equilateral_triangle(n);
        break;
    }
    default:
        printf("\nInvalid option\n");
    }
    return 0;
}

int draw_rect_triangle(int n)
{
    int row, col;
    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= row; col++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

int draw_equilateral_triangle(int n)
{
    int row, space, col;
    for (row = 0; row <= n; row++)
    {
        for (space = n; space > row; space--)
        {
            printf(" ");
        }
        for (col = 1; col <= (2 * row - 1); col++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
