#include <stdio.h>

int rysuj_pros(int n);
int rysuj_row(int n);

int main(void)
{
    int n, typ;

    printf("Jaki typ trojkata chcesz narysowac (1 - prostokatny, 2 - rownoboczny): ");
    scanf("%d", &typ);

    printf("Podaj wysokosc trojkata: ");
    scanf("%d", &n);

    switch (typ)
    {
    case 1:
    {
        rysuj_pros(n);
        break;
    }
    case 2:
    {
        rysuj_row(n);
        break;
    }
    default:
        printf("\n????????????\n");
    }
    return 0;
}

int rysuj_pros(int n)
{
    int w, k;
    for (w = 1; w <= n; w++)
    {
        for (k = 1; k <= w; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

int rysuj_row(int n)
{
    int w, s, k;
    for (w = 0; w <= n; w++)
    {
        for (s = n; s > w; s--)
        {
            printf(" ");
        }
        for (k = 1; k <= (2 * w - 1); k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
