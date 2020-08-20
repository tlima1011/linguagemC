#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main()
{

    for(int i = 0; i < 50;i++){
        if(i % 2 != 0){
            printf("%d ", i);
        }
    }

    return 0;
}
