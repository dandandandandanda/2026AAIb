/// week09-6 泡泡排序法bubble sort
#include <stdio.h>
int main()
{///陣列10 numbers
    int a[10] = {11,22,33,44,55,66,77,88,99,97};

    for (int i=0; i<10; i++) printf("%d ", a[i]);//擠一行
    printf("\n");///換行

    for (int k=0; k<10-1; k++) {//add line
        for (int i=0; i<10-1; i++){
            if ( a[i] < a[i+1]) {/// want left big right small, but switched
                int temp = a[i];///switched
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }
        //again but move the smallest to the right
        for (int i = 0; i<10; i++) printf("%d ", a[i]);//擠一行
        printf("\n");///跳行
    }//add line
}
