///week10-2
#include <stdio.h>
int main()
{
    int a[10] = {9,8,7, 6,5,4, 3,2,1, 0};
    for (int k=0; k<10; k++) printf("%d ", a[k]);///
    printf("\n");///¦L°}¦C¤¤¼Æ¦r

    for(int i=0; i<10; i++){//left i, will be smallest
        for(int j=i+1; j<10; j++){//left j start from i+1
            if (a[i]>a[j]){// wrong size then switch
                int temp =a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        for(int k=0; k<10; k++) printf("%d ", a[k]);
        printf("\n");///¦L°}¦C¤¤¼Æ¦r
    }
    for(int k=0; k<10; k++) printf("%d ", a[k]);
    printf("\n");///¦L°}¦C¤¤¼Æ¦r
}
