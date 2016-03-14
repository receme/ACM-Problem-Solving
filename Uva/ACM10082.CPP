
#include<stdio.h>
#include<string.h>

int main(){
int i,j,n;
char ch,a[10000];
char b[50]={'Q','W','E','R','T','Y','U','I','O','P','[',']','A',
	    'S','D','F','G','H','J','K','L',';','Z','X','C','V',
	    'B','N','M',',','.','/','`','1','2','3','4','5','6','7','8','9','0','-','='};

while(gets(a)){
  n=strlen(a);

 for(i=0;i<n;i++){
   ch=a[i];
   if(ch=='~'||ch=='!'||ch=='@'||ch=='#'||ch=='$'||ch=='%'||ch=='^'||ch=='&'||ch=='*'||
      ch=='('||ch==')'||ch=='_'||ch=='+'||ch=='{'||ch=='}'||ch=='|'||ch==':'||ch=='"'||ch=='<'||ch=='>'||ch=='?'){
       putchar(ch);
       continue;}


    if(ch==39){
     printf(";");
     continue;}

    if(ch==92){
     printf("]");
     continue;}

    if(ch>=97&&ch<=122){
     putchar(ch);
     continue;}

    if(ch=='`'){printf("`");continue;}
    if(ch=='Q'){printf("Q");continue;}
    if(ch=='A'){printf("A");continue;}
    if(ch=='Z'){printf("Z");continue;}

j=0;
while(ch!=b[j])
  j++;
  if(ch==' '||ch==10)
   printf(" ");
  else
   putchar(b[j-1]);




 }
printf("\n");

  }
  return 0;

 }
