#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define MAX 1000
char arr[MAX];

void omit_leading_zero(char ar[]){
 int l=strlen(ar);
 int flag=0;
 int m=0;
 memset(arr,0,MAX);
 
 for(int i=0;i<l;i++){
 
  if(ar[i]==48&&flag==0)
   continue;
   
  flag=1;
 
  arr[m]=ar[i];
  m++;
}

} 
  
   
  
    
  

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

void call_mult(char *first,char *sec,char *result){
char F[MAX],S[MAX],temp[MAX];
int f_len,s_len,f,s,r,t_len,hold,res;
f_len=strlen(first);
s_len=strlen(sec);
reverse(first,F);
reverse(sec,S);
t_len=f_len+s_len;
r=-1;

for(f=0;f<=t_len;f++)
temp[f]='0';
temp[f]='\0';
for(s=0;s<s_len;s++){
hold=0;
for(f=0;f<f_len;f++){
res=(F[f]-'0')*(S[s]-'0') + hold+(temp[f+s]-'0');
temp[f+s]=res%10+'0';
hold=res/10;
if(f+s>r) r=f+s;
}
while(hold!=0){
res=hold+temp[f+s]-'0';
hold=res/10;
temp[f+s]=res%10+'0';
if(r<f+s) r=f+s;
f++;
}
}
for(;r>0 && temp[r]=='0';r--);
temp[r+1]='\0';
reverse(temp,result);
}


char a[MAX],b[MAX],fir[MAX],sec[MAX],res[MAX],ch;
int m,n,i;
int main(){
    
  while(scanf("%s %c %s",a,&ch,b)==3){
        
     
        omit_leading_zero(a);
        strcpy(fir,arr);
        omit_leading_zero(b);
        strcpy(sec,arr);
        
        m=strlen(fir);
        n=strlen(sec);         
        if(ch=='+'){
          if(m>n)
           call_sum(fir,sec,res);
          else
           call_sum(sec,fir,res);
          }
        else
         call_mult(fir,sec,res); 
                      
    printf("%s %c %s\n",a,ch,b);
    
     if (m>10 || strcmp(fir,"2147483648")>0 && m==10|| strcmp(fir,"2147483648")==0 && m==10)
       printf("first number too big\n");
     if (n>10 || strcmp(sec,"2147483648")>0 && n==10|| strcmp(sec,"2147483648")==0 && n==10)
       printf("second number too big\n");  
     n=strlen(res);
     
     if (n>10 || strcmp(res,"2147483648")>0 && n==10|| strcmp(res,"2147483648")==0 && n==10)
       printf("result too big\n");
         
}

return 0;
}                    
    
    
