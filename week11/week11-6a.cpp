//week11-6a SOIT108_ADVANCE_002B
# include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if (a<b){//wrong size, switched
    	int t=a; a=b; b=t;
    }
    if (a<c){//wrong size, switched
    	int t=a; a=c; c=t;
    }
    if (b<c){//wrong size, switched
    	int t=b; b=c; c=t;
    }
    printf("%d", a*100 +b*10 +c +1);
}
