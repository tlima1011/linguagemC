#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main()
{

    int n = 0, n1 = 0, n2 = 1, n3 = 0;

    printf("Quantidade de N: ");
    scanf("%d", &n);
    printf("%d %d ", n1, n2);
    for(int i = 0; i < n - 2;i++){
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        printf("%d ",n3);
    }
    printf("\n");
    getch();
    return 0;
}
