#include<stdio.h>


struct data{
 
 int point;
}s[1000];

int i,j,k,l,m,n,a[101][101],b[1000],r,p,x;

int main(){
    
    while(scanf("%d %d",&m,&n)==2){
      
       if(m==0&&n==0)
        break;
      
     for(i=0;i<m;i++)
      for(j=0;j<n;j++)
       scanf("%d",&a[i][j]);
     
    
    scanf("%d",&l);
    
  for(x=0;x<l;x++){
                   
   scanf("%d",&r);    
   
    for(i=0;i<r;i++)
     scanf("%d",&b[i]);
     
   for(i=0;i<100;i++)
    s[i].point=0;
   
     
   for(i=0;i<m;i++){
    p=1;
    for(;;){
    
    for(j=0;j<n;j++)
     if(a[i][j]==p){
       s[j].point+=b[p-1];
       break; }
   p++;
   if(p>r) 
    break; 
    }
}
k=s[0].point;
for(i=1;i<n;i++)
  if(s[i].point>k){
   k=s[i].point;
   }
 j=0;
for(i=0;i<n;i++)
 if(k==s[i].point){
  b[j]=i+1;
  j++; }
  
for(i=0;i<j;i++){
 printf("%d",b[i]);
 if(i!=j-1)
  printf(" ");
 
 }     
printf("\n");

}

}
return 0;
}   
   
   
   
                     
     
          
     
