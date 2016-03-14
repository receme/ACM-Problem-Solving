
#include<stdio.h>

int main(){

    long t,i,j,count,m,p,n,l;
    scanf("%ld",&t);

    for(i=0;i<t;i++)
    {

    scanf("%ld %ld",&p,&l);
      count=p;
      n=p;

      for(;;){
       if(n==4){
        count=count+1;
        break; }
       if(n==1)
        break;
       if(n>=l){
      m=n/l;
      count=count+m;
      n=m+n%l;  }

      }

printf("%ld\n",count);

}

return 0;
}
