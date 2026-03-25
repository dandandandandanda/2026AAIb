
///week05-1.cpp
#include <stdio.h>
int main()
{   ///宣告陣列 給初始值
    int a[4] = {10, 20, 30, 40};
    a[2] = 999;///固定其中一數
    for (int i = 0; i < 4; i++){
        printf("%d ", a[i]);
    }///a[0] [1] [2]...
}
