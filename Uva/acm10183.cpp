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
//*************************************

char fibo[10000][MAX],fir[MAX],sec[MAX],res[MAX],a[200],b[200],m[100],n[100];
long i,k,lenf,lent,temp;

int main(){




 strcpy(fir,"0");
 strcpy(sec,"1");
 
 for(i=0;i<500;i++){
     
   call_sum(sec,fir,res);
   strcpy(fir,sec);
   strcpy(sec,res);
   strcpy(fibo[i],res);                 
}
  
 
 
 while(scanf("%s %s",m,n)==2){

 if(m[0]=='0' &&n[0]=='0') break;
 
  lenf=strlen(m);
  lent=strlen(n);
    
  k=0;
 for(i=0;i<500;i++){
    temp=strlen(fibo[i]);

   if (temp>lenf || strcmp(fibo[i],m)>0 && lenf==temp|| strcmp(fibo[i],m)==0 && lenf==temp)
    {
   if (lent==temp )
    {
   if (strcmp(fibo[i],n)<0 || strcmp(fibo[i],n)==0)
    {
     k++; continue;
    }
    }
else if (temp <lent)
 k++; 
else break;
}
    
      
}    
                      
 


printf("%d\n",k);
  
}
return 0;

}

