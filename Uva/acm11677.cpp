
#include<stdio.h>

int main(){
    int h1,m1,h2,m2,m;

    while(scanf("%d %d %d %d",&h1,&m1,&h2,&m2)==4){
        if(h1==0&&m1==0&&h2==0&&m2==0) break;

        m=0;
        for(;;){
         m1=m1+1;
         m++;
         if(m1==60){
          m1=0;
          h1++;
           }

         if(h1==24){
           h1=0;}

        if(h1==h2&&m1==m2)
         break;
        }

       printf("%d\n",m);

    }

    return 0;
}

