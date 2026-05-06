//week11-2c SOIT106_ADVANCE_001
# include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int ans = 0; //partB
    int N2 = N; //partC
    while ( N > 0 ) {
        ans = ans * 10 + N%10; //partB
        N = N/10;
    }
    printf("%d+%d=%d\n", N2, ans, ans+N2);
}
