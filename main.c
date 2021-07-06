#include <stdio.h>
int main()
{
    int a[100],b,c,d,e;
    printf("\n Please Enter the total Number of Elements : ");
    scanf("%d", &b);
    printf("\n Please Enter the Array Elements : ");
    for (c=0; c<b; c++){
    scanf("%d", &a[c]);
    }
    for (c=0;c<b-1;c++){
        for(d=c+1; d<b;d++){
            if(a[c]>a[d]){
            e = a[c];
            a[c] = a[d];
            a[d] = e;
            }
        }
    }
    printf("\n List Sorted in Ascending Order : ");
    for(c=0;c<b;c++){printf("%d ", a[c]);
    }
    return 0;
}