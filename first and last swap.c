#include <stdio.h>
#include<math.h>

int main()
{
    int n,a,b,c,d,e,f;
    scanf("%d",&n);
    a=(int)log10(n);
    b=n%10;
    c=(int)pow(10,a);
    d=n/c;
    e=d;
    f=(n%c)/10;
    n=(b*c)+f*10+e;
    printf("%d",n);
    
}
