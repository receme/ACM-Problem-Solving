#include<stdio.h>
#include<string.h>
#include<ctype.h>

struct data{
    int count;
    char ch;
};

char a[500];
int i,j,k,m,n,l,big;
struct data b[27];


int main(){


  scanf("%d",&n);

     for(i=1;i<1000000;i++){

    for(j=0;j<30;j++)
       b[j].count=0;

         gets(a);
         m=strlen(a);

  for(j=0;j<m;j++)
   a[j]=tolower(a[j]);
if(i!=1){

   l=0;
   for(j=97;j<=122;j++){
    for(k=0;k<m;k++){
     if(a[k]==j){
      b[l].count++;
      b[l].ch=j;}}

      l++;
        }

   big=0;
   for(k=0;k<26;k++)
    if(b[k].count>big)
     big=b[k].count;


    if(big==0){
        printf("abcdefghijklmnopqrstuvwxyz");
        goto x;
         }

  for(k=0;k<26;k++)
    if(b[k].count==big)
     printf("%c",b[k].ch);
   x:
     printf("\n");}
     if(i==n+1)break;

  }
   return 0;
     }
