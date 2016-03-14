
#include<stdio.h>
#include<string.h>

int main(){
    char a[1000],b[1000];
    int i,j,k,n;

    while(gets(a)){
        n=strlen(a);
        j=0;
        for(i=0;i<n;i++){
            if(a[i]!=' '){
             b[j]=a[i];
             j++; }
            else{
             for(k=j-1;k>=0;k--)
                printf("%c",b[k]);
                printf(" ");
                j=0;}

        }

        for(k=j-1;k>=0;k--)
                printf("%c",b[k]);
                printf("\n");

     }
                return 0;
    }
