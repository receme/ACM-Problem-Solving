#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define MAX 1000
/*******************************************************************/
int call_div(char *number,long div,char *result){
int len=strlen(number);
int now;
long extra;
char Res[MAX];
for(now=0,extra=0;now<len;now++){
extra=extra*10 + (number[now]-'0');

Res[now]=extra / div +'0';
extra%=div;
}
Res[now]='\0';
for(now=0;Res[now]=='0';now++);
strcpy(result, &Res[now]);
if(strlen(result)==0)
strcpy(result, "0");
return extra;
}
/*******************************************************************/


int main(){
char fir[MAX],res[MAX],ch;
long sec,remainder;
while(scanf("%s %c %ld",&fir,&ch,&sec)==3){
remainder=call_div(fir,sec,res);
if(ch==47){
 int len=strlen(res);
 for(int i=0;i<len;i++) printf("%c",res[i]);
}
else if(ch=='%')
 printf("%ld",remainder); 
printf("\n");    
}
return 0;
}
