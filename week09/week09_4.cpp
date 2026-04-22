///week09-4 交換陣列數字
#include <stdio.h>
int main()
{
    int a=99, b=34; //first two bottle a coffee b water
    printf("一開始 a: %d b: %d\n", a, b);

    int temp = a; //a third bottle temp to hold a coffee
    a = b; // now empty a bottle hold b water
    b = temp; // empty b bottle hold coffee in temp

    printf("交換後 a: %d b: %d\n", a, b);
}
