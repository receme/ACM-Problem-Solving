
#include<stdio.h>
#include<string.h>

int main(){

   char a[1000];
   int i,j,c,n,m,count;

   scanf("%d",&n);
c=0;
   for(j=0;j<=n;j++){

       gets(a);
       m=strlen(a);
      count=0;
      for(i=0;i<m;i++){
           if(a[i]=='a'||a[i]=='d'||a[i]=='g'||a[i]=='j'||a[i]=='m'||a[i]=='p'||a[i]=='t'||a[i]=='w'||a[i]==' '){
             count=count+1;
             continue; }

           if(a[i]=='b'||a[i]=='e'||a[i]=='h'||a[i]=='k'||a[i]=='n'||a[i]=='q'||a[i]=='u'||a[i]=='x'){
            count=count+2;
            continue; }


           if(a[i]=='c'||a[i]=='f'||a[i]=='i'||a[i]=='l'||a[i]=='o'||a[i]=='r'||a[i]=='v'||a[i]=='y'){
             count=count+3;
             continue;}

           if(a[i]=='s'||a[i]=='z'){
            count=count+4;
            continue; }

      }

    if(j!=0)
      printf("Case #%d: %d\n",c,count);

      c++;

   }

   return 0;
}


