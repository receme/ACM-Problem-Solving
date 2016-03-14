#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define MAX 1000

void reverse(char *from, char *to ){
int len=strlen(from);
int l;
for(l=0;l<len;l++)
to[l]=from[len-l-1];
to[len]='\0';
}
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
void call_sum(char *first, char *sec, char *result){
char F[MAX], S[MAX], Res[MAX];
int f,s,sum,extra,now;
f=strlen(first);
s=strlen(sec);
reverse(first,F);
reverse(sec,S);
for(now=0,extra=0;(now<f && now<s);now++){
sum=(F[now]-'0') + (S[now]-'0') + extra;
Res[now]=sum%10 +'0';
extra= sum/10;
}
for(;now<f;now++){
sum=F[now] + extra-'0';
Res[now]=sum%10 +'0';
extra=sum/10;
}
for(;now<s;now++){
sum=F[now] + extra-'0';
Res[now]=sum%10 +'0';
extra=sum/10;
}
if(extra!=0) Res[now++]=extra+'0';
Res[now]='\0';
if(strlen(Res)==0) strcpy(Res,"0");
reverse(Res,result);}
//***************************************************


int main(){
char fir[MAX],res[MAX],a[MAX];
int i,N,f,cas=0,s1,s2;
long remainder;
while(scanf("%d %d",&N,&f)==2){
 if(N==0&&f==0)break;
 cas++; 
               


scanf("%s",&res);
s1=strlen(res);
for(i=0;i<N-1;i++){
scanf("%s",&fir);
s2=strlen(fir);
if(s1>s2)
call_sum(res,fir,res);
else
call_sum(fir,res,res);
s1=strlen(res);
}

printf("Bill #%d costs ",cas);
int len=strlen(res);
for(int i=0;i<len;i++) printf("%c",res[i]);
printf(": each friend should pay ");
call_div(res,f,res);
len=strlen(res);
for(int i=0;i<len;i++) printf("%c",res[i]); 
printf("\n\n");
}

return 0;
}
