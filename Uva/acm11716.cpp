
#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){

    char a[10000],b[1000][1000];
    int i,j,k,n,m,c,x,f;

    scanf("%d",&c);
  f=0;
    for(i=0;i<=c;i++){

        gets(a);
        n=strlen(a);
        m=sqrt(n);
        if(m*m!=n){
         printf("INVALID\n");
         continue; }
        x=0;

        for(j=0;j<m;j++)
         for(k=0;k<m;k++){
          b[j][k]=a[x];
          x++;}

       for(j=0;j<m;j++)
        for(k=0;k<m;k++)
         printf("%c",b[k][j]);

       if(f!=0)
       printf("\n");
       f=1;
    }

    return 0;
}
