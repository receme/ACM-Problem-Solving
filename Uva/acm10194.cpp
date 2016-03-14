#include<stdio.h>
#include<string.h>
#include<ctype.h>

int i,j,k,l,m,n,cas,r,m1,sum,hg,ag,q,len;
char a[1001],b[1001],num[100],tour[1001],str[1001];

struct data{

 char name[1001],na[1001];
 int point,gd,gk,ga,gp,win,loss,draw;
}s[100],t;


int main(){
  
   scanf("%d\n",&cas);
  
  for(l=0;l<cas;l++){
    
    for(i=0;i<30;i++)
     s[i].point=s[i].gd=s[i].gk=s[i].ga=s[i].win=s[i].loss=s[i].draw=s[i].gp=0;
    
    
    gets(tour);
    
    scanf("%d\n",&m);
    
   for(i=0;i<m;i++){
     gets(s[i].name);
     len=strlen(s[i].name);
     for(j=0;j<len;j++)
      s[i].na[j]=toupper(s[i].name[j]);
    }   
  scanf("%d\n",&m1);
  
  for(q=0;q<m1;q++){
    gets(str);
    
    n=strlen(str);
    
   memset(a,0,1000);
   for(j=0;j<n;j++){
    if(str[j]=='#'){
     k=j;
     break;}
     
    a[j]=str[j];
    
   } 
   
   r=0;
   for(j=k+1;j<n;j++){
    if(str[j]=='@'){
     k=j;
     break; }
     
    num[r]=str[j];
    r++; }
    
    if(r==1)
     hg=num[0]-48;
    else
     hg=(num[0]-48)*10+(num[1]-48);
    r=0; 
    for(j=k+1;j<n;j++){
       if(str[j]=='#'){
        k=j;
        break; }       
       num[r]=str[j];
       r++;
     }
     
     if(r==1)
      ag=num[0]-48;
     else
      ag=(num[0]-48)*10+(num[1]-48);
      
    memset(b,0,1000);
    r=0;  
    for(j=k+1;j<n;j++){
      b[r]=str[j];
      r++; }
      
      
    for(i=0;i<m;i++)    
     if(strcmp(a,s[i].name)==0)
      break;
      
    s[i].gd=s[i].gd+hg;  
    s[i].gk=s[i].gk+ag;
    s[i].gp++;
              
              
    for(j=0;j<m;j++)    
     if(strcmp(b,s[j].name)==0)
      break;
      
    s[j].gd=s[j].gd+ag;
    s[j].gk=s[j].gk+hg;  
    s[j].gp++;             
        
    if(hg>ag){
     s[i].win++;
     s[i].point=s[i].point+3; 
     s[j].loss++;}
    else if(ag>hg){
     s[j].win++;
     s[j].point=s[j].point+3;
     s[i].loss++; }
    else{
     s[i].draw++;
     s[i].point++;
     s[j].draw++;
     s[j].point++;
     }        
}  
for(i=0;i<m;i++)
 for(j=0;j<m-1;j++)
  if(strcmp(s[j].na,s[j+1].na)>0){
   t=s[j];
   s[j]=s[j+1];
   s[j+1]=t;
   }

for(i=0;i<m;i++)
 for(j=0;j<m-1;j++)
  if(s[j].gp>s[j+1].gp){
   t=s[j];
   s[j]=s[j+1];
   s[j+1]=t; }

for(i=0;i<m;i++)
 for(j=0;j<m-1;j++)
  if(s[j].gd<s[j+1].gd){
   t=s[j];
   s[j]=s[j+1];
   s[j+1]=t;
   }
   
for(i=0;i<m;i++)
 for(j=0;j<m-1;j++)
  if((s[j].gd-s[j].gk)<(s[j+1].gd-s[j+1].gk)){
   t=s[j];
   s[j]=s[j+1];
   s[j+1]=t; }
   
for(i=0;i<m;i++)
 for(j=0;j<m-1;j++)
  if(s[j].win<s[j+1].win){
    t=s[j];
   s[j]=s[j+1];
   s[j+1]=t; } 
 
for(i=0;i<m;i++)
 for(j=0;j<m-1;j++)
  if(s[j].point<s[j+1].point){
    t=s[j];
   s[j]=s[j+1];
   s[j+1]=t; }             

puts(tour);
for(i=0;i<m;i++)
 printf("%d) %s %dp, %dg (%d-%d-%d), %dgd (%d-%d)\n",i+1,s[i].name,s[i].point,s[i].gp,s[i].win,s[i].draw,s[i].loss,(s[i].gd-s[i].gk),s[i].gd,s[i].gk);
 if(l!=cas-1)
  printf("\n"); 
      
}
return 0;
} 
                     
      
    
