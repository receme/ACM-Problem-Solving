
#include<stdio.h>
#include<stdlib.h>

int a,b,c,d,m,l,p;
int main(){



    while(scanf("%d %d %d %d",&a,&b,&c,&d)==4){
        if(a==0&&b==0&&c==0&&d==0)break;
        if(b>=a)
         p=40-(abs(b-a));
        else
         p=abs(a-b);
        p=p*9;

        if(c<=b)
         l=40-(abs(c-b));
        else
         l=abs(c-b);
        l=l*9;

        if(d>=c)
         m=40-(abs(d-c));

        else
         m=abs(c-d);
        m=m*9;

        m=1080+p+l+m;

        printf("%d\n",m);

    }
    return 0;
}

