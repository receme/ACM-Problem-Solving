
#include<stdio.h>
#include<string.h>

int main(){

    char b[40]={'q','w','e','r','t','y','u','i','o','p','[',']',
                'a','s','d','f','g','h','j','k','l',';','z','x',
                 'c','v','b','n','m',',','.','/'};
    char ch,a[100000];
    int i,j,k,n;

    gets(a);

    n=strlen(a);

    for(i=0;i<n;i++){
        ch=a[i];
        if(ch==92){
         printf(";");
         continue; }

        if(ch==39){
         printf("l");
         continue; }
        if(ch=='z'){
         printf("'");
         continue;}
        if(ch=='q'||ch=='w'||ch=='-'||ch=='=')
         continue;

        if(ch=='x'){
         printf("%c",92);
         continue;}


   if(ch>=48&&ch<=57)
    continue;

        j=0;
while(ch!=b[j])
  j++;
  if(ch==' ')
   printf(" ");
  else
   putchar(b[j-2]);
    }
    printf("\n");

    return 0;
}

