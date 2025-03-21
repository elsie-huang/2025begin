#include <stdio.h>
#include <stdlib.h>

int main() {
    int x, y;
    char A[16], B[16], C[16];
    int sorting_array[16];
    int a,b,c;

    /* 1st week */
    printf("\n Hello, World!\n\n");

    /* 2nd week */

#if 1
    printf("\n======== nine nine table ========\n");
    for(x=1; x<10; x++)
    {
        for(y=1; y<10; y++)
        {
            printf("%2dX%2d=%2d ", x, y, x*y);
        }
        printf("\n");
    }
#endif

    /* 3rd week */
#if 1
    printf("\n======== Solving linear equations with one unknown ========\n");
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
#endif

    /* 4th week */
    /* x 是長度     */
    /* A[x] 是數列  */
#if 1
    printf("\n======== Sorting practice ========\n\n");
retry2:
    printf("input array length (<=16): ");
    scanf("%d", &x);
    if(x>16)
        goto retry2;
    printf("input number: ");
    for(a=0; a<x; a++)
        scanf("%d", &sorting_array[a]);
    printf("sorting start... ");
    for(a=0; a<x; a++)
        printf("%d ", sorting_array[a]);
    printf("\n");

    for(a=0; a<x; a++)
    {
        for(b=a+1; b<x; b++)
        {
            if(sorting_array[a]>sorting_array[b])
            {
                y=sorting_array[a];
                sorting_array[a]=sorting_array[b];
                sorting_array[b]=y;
            }
        }
        printf("Step %d: ", a+1);
        for(b=0; b<x; b++)
            printf("%d ", sorting_array[b]);
        printf("\n");
    }
#endif

#if 1
    /* 5th week */
    /* x 是長度                                */
    /* sorting_array[x] 是排序好的數列          */
    /* c 用來檢查是不是每個數都整除              */
    printf("\n======== Find the Highest common factor ========\n\n");
    printf("Array:");
    for(a=0; a<x; a++)
        printf(" %d", sorting_array[a]);
    printf("\n");

    for(a=sorting_array[0]; a>0; a--)
    {
        c=0;
        for(b=0; b<x; b++)
        {
            if((sorting_array[b]%a) !=0)
            {
                c=1;
                break;
            }
        }
        if(c==0)
        {
            printf("\nThe Highest common factor is %d\n", a);
            break;
        }
    }
#endif

#if 1
    /* 6th week */
    /* x 是長度                     */
    /* A[x] 是排序好的數列          */
    /* c 用來檢查是不是每個數都整除  */
    printf("\n======== Find the prime number ========\n\n");
    printf("Array: ");
    for(a=0; a<x; a++)
        printf(" %d", sorting_array[a]);
    printf("\n\n");

    c=0;
    for(a=0; a<x; a++)
    {
        for(b=2; b<sorting_array[a]; b++)
        {
            if((sorting_array[a]%b)==0)
            {
                break;
            }
        }
        if(b==sorting_array[a])
        {
            printf("%d is a prime number\n", sorting_array[a]);
            c=1;
        }
    }
    if(c==0)
        printf("No prime number in this arrary\n");

#endif
        return 0;
}
