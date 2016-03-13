#include<stdio.h>
#include<string.h>

char a[1000],b[1000],c1;
long i,j,k,m,n,l,c[1000],flag,count[10],f,t,sum; 
   
int main(){

for(i=0;i<7;i++)
 count[i]=0;

scanf("%ld",&m);

for(l=0;l<m;l++){
 scanf("%s",a);
 n=strlen(a);
 for(i=0;i<7;i++)
 count[i]=0;
 
 for(i=0;i<n;i++){
   if(a[i]=='B')
     count[0]++;
   if(a[i]=='U')
     count[1]++;                 
   if(a[i]=='S')
     count[2]++; 
   if(a[i]=='P')
     count[3]++;
   if(a[i]=='F')
     count[4]++; 
   if(a[i]=='T')
     count[5]++;
   if(a[i]=='M')
     count[6]++;
}       
 f=0;
 for(i=0;i<7;i++)
  if(count[i]>9){
   printf("error\n");
   f=1; 
   break; }
  
  if(f==1) continue; 
 
 
 
 
 c1=a[0];
 b[0]=c1;
 k=1;
 
 for(i=1;i<n;i++)
  if(a[i]!=c1){
   b[k]=a[i];
   k++;
   c1=a[i]; }
  
 /* for(j=0;j<k;j++)
   printf("%c",b[j]);*/
 sum=0;  
 for(j=0;j<k;j++){
   if(b[j]=='B'){
    c[j]=1;
    sum=sum+c[j]*count[0]; }
   if(b[j]=='U'){
    c[j]=10;
    sum=sum+c[j]*count[1]; }
   if(b[j]=='S'){
    c[j]=100;
    sum=sum+c[j]*count[2]; }
   if(b[j]=='P'){
    c[j]=1000;
    sum=sum+c[j]*count[3]; }
   if(b[j]=='F'){
    c[j]=10000;
    sum=sum+c[j]*count[4]; }
   if(b[j]=='T'){
    c[j]=100000;
    sum=sum+c[j]*count[5];}
   if(b[j]=='M'){
    c[j]=1000000;
    sum=sum+c[j]*count[6];} 
    }
    
  if(c[0]<c[1])
    flag=0;
  else if(c[0]>c[1])
   flag=1;
   
 if(flag==0){
   f=0;
   t=c[0];
   for(j=1;j<k;j++){
    if(c[j]>t)
     t=c[j];
    else{
      f=1;
      break; }}
      
  if(f==1){
    printf("error\n");
    continue;; }    
}  
 if(flag==1){
   f=0;
   t=c[0];
   for(j=1;j<k;j++){
    if(c[j]<t)
     t=c[j];
    else{
     f=1;
     break; } }     
   if(f==1){
    printf("error\n");
    continue; }
}                          
               
               
printf("%ld\n",sum);           
 
}

return 0;
}                


    
