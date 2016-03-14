#include<stdio.h>
#include<string.h>

char a[100]="`1234567890-=qwertyuiop[]asdfghjkl;'zxcvbnm,./~!@#$%^&*()_+QWERTYUIOP{}|ASDFGHJKL:ZXCVBNM<>";
char b[100]="`123qjlmfp/[]456.orsuyb;=789aehtdck-0zx,inwvg'~!@#QJLMFP?{}$%^>ORSUYB:+|&*(AEHTDCK)ZX<INWVG";

char ch=34,ch1='_';
char s[2001];
int  i,j,k,l,m,n,flag;


int main(){
    
while(gets(s)){
   n=strlen(s);

 for(i=0;i<n;i++){
   if(s[i]=='?'){
    printf("%c",34);
    continue; }                      
   if(s[i]==92){
    printf("%c",92);
    continue; }               
   if(s[i]==' '){
    printf(" ");
    continue; }               
   if(s[i]==ch){
    printf("%c",ch1);
    continue; }
    
   for(j=0;j<94;j++)
    if(s[i]==a[j]){
     printf("%c",b[j]);
     break;}
       
 }
 printf("\n");
}

return 0;
}     
   
          
