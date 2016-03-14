
#include<stdio.h>
#include<string.h>


int main(){

    char a[10000],b[10000];
    int i,j,k,n,m,l;



    while(scanf("%d",&n)==1){
        if(n==0)break;
        scanf("%s",a);

        m=strlen(a);
        n=m/n;

        for(i=0;i<m;){
           k=0;
           for(j=0;j<n;j++){
               if(i==m) break;
                b[k]=a[i];
                 k++;
                 i++; }



         for(l=k-1;l>=0;l--)
          printf("%c",b[l]);
    }


         printf("\n");

    }

    return 0;
}
