#include<stdio.h>
#include<string.h>


int i,j,n,count[3000],l;
char a[100],b[3000][100];
struct data{
 char name[100];
 int count; };
 struct data s[3000];
int main(){
    
    scanf("%d",&n);
    
    for(l=0;l<n;l++){
     scanf("%s",a);
     strcpy(b[l],a);
     gets(a);
     }
     
    for(i=0;i<n;i++)
     for(j=0;j<n-1;j++)
      if(strcmp(b[j],b[j+1])>0){
      strcpy(a,b[j]);
      strcpy(b[j],b[j+1]);
      strcpy(b[j+1],a);
      }
      

  for(i=0;i<3000;i++)
   s[i].count=0;
 j=0;
 strcpy(s[j].name,b[0]);
 s[j].count=1;
 for(i=1;i<n;i++){
   if(strcmp(s[j].name,b[i])==0)
    s[j].count++;
   else{
    j++;
    strcpy(s[j].name,b[i]);
    s[j].count=1; }
}
  for(i=0;i<=j;i++)
      printf("%s %d\n",s[i].name,s[i].count);

return 0;
}  
     
    
