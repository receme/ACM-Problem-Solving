
#include<stdio.h>

int main(){
    double m,n;

    while(scanf("%lf",&n)==1){
        if(n<0) break;
        if(n==1){
            printf("0%c\n",37);
            continue; }

       m=n*25;
        printf("%.0lf",m);
        printf("%c\n",37);

    }

    return 0;
}
