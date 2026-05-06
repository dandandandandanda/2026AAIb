//week11-5 SOIT108_ADVANCE_002
# include <stdio.h>
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);// a small b big
    int ans = 0;// before loop ans 0
    for (int i=a; i<=b; i++) {
        int bad = 0;// bad=0 not broken
        //small loop for telling ½è¼Æ
        for (int k=2; k<i; k++) {
            if (i%k==0) bad = 1;//broken
        }
        if (bad==0) ans++;// not broken
    }// loop middle ans++
    printf("%d\n", ans);//loop end print ans
}
