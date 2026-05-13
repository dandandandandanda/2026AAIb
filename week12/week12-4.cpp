///week12-4 最大公因數
#include <stdio.h>
int main()
{
    printf("請輸入兩個數(.51 68)");
    int a, b;
    scanf("%d%d", &a, &b);
    int ans = 1; ///1可除一切 候選答案
    for(int i=1; i<=a; i++){
        if( a%i==0 && b%i==0 ) ans = i;
        ///if i can / a and b
    }
    printf("最大公因數是 %d\n", ans);
    printf("%d / %d 約分後, 變 %d /%d \n", a, b, a/ans, b/ans);
}
