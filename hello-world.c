#include <stdio.h>
#include <stdlib.h>

int main() {
    int x, y;
    char A[16], B[16], C[16];
    int a,b,c;

    printf("\n Hello, World!\n\n");

    for(x=1; x<10; x++)
    {
        for(y=1; y<10; y++)
        {
            printf("%2dX%2d=%2d ", x, y, x*y);
        }
        printf("\n");
    }

    printf("\n Solving linear equations with one unknown\n");
    printf("Solving ax+b=c\n");

retry:
    printf("input a (!=0 integer) = ");
    scanf("%s", A);
    a=atoi(A);
    if(a==0) goto retry;
    printf("input b (integer) = ");
    scanf("%s", B);
    printf("input c (integer) = ");
    scanf("%s", C);
    printf("Solving %sx+%s=%s", A,B,C); 
    b=atoi(B);
    c=atoi(C);
    printf("\t.....\t x=%f\n", ((float)(c-b)/(float)a));

    return 0;
}
