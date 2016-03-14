#include <stdio.h>
#include <string.h>
#define MAX 10000
char X[MAX][MAX],Y[MAX][MAX],a[10000];
char w[2]=" ";
int i,j,m,n,c[MAX][MAX],b[MAX][MAX],len,r,s,k,q,q1;
int LCSlength() {

for (i=1;i<=r;i++) c[i][0]=0;
for (j=0;j<=s;j++) c[0][j]=0;
for (i=1;i<=r;i++)
for (j=1;j<=s;j++) {

if (strcmp(X[i-1],Y[j-1])==0) {
c[i][j]=c[i-1][j-1]+1;
b[i][j]=1; 
}
else if (c[i-1][j]>=c[i][j-1]) {
c[i][j]=c[i-1][j];
b[i][j]=2; 
}
else {
c[i][j]=c[i][j-1];
b[i][j]=3; 
}
}

return c[r][s];
}

int main() {
    int f,l=1,len1,flag;
    r=0; s=0;
while (gets(a)) {
 
  for(f=0;f<r;f++){

   memset(X[f],0,10000); }
  
  for(f=0;f<s;f++){

  memset(Y[f],0,10000);  }

len=strlen(a);

a[len]=' ';
for(f=0;f<len;f++)
  if((a[f]>=65&&a[f]<=90)||(a[f]>=97&&a[f]<=122)||(a[f]>=48&&a[f]<=57))  
     continue;
   else                                                                      
    a[f]=' ';

  q=0;q1=0;
r=0;flag=0;k=0;
for(f=0;f<len;f++){
  
  if((a[f]>=65&&a[f]<=90)||(a[f]>=97&&a[f]<=122)||(a[f]>=48&&a[f]<=57)){
     q=1;
     X[r][k]=a[f];
     k++;
        }
 else {
   k=0;             
   r++;}
}    
if((a[len-1]>=65&&a[len-1]<=90)||(a[len-1]>=97&&a[len-1]<=122)||(a[len-1]>=48&&a[len-1]<=57||a[len1-1]==32))
 r++;                


gets(a);  

len1=strlen(a);
a[len1]=' ';

if(len==0||len1==0){
printf("%2d. Blank!\n",l);
l++;
continue;
}

for(f=0;f<len;f++)
  if((a[f]>=65&&a[f]<=90)||(a[f]>=97&&a[f]<=122)||(a[f]>=48&&a[f]<=57))  
     continue;
   else                                                                      
    a[f]=' ';
    

s=-1;flag=0;k=0;
for(f=0;f<len1;f++){
   
  if((a[f]>=65&&a[f]<=90)||(a[f]>=97&&a[f]<=122)||(a[f]>=48&&a[f]<=57)){
    if(k==0)s++;
    q1=1;                                                                
     Y[s][k]=a[f];
     k++;}
  else {  
  k=0;
  }
} 
if((a[len1-1]>=65&&a[len1-1]<=90)||(a[len1-1]>=97&&a[len1-1]<=122)||(a[len1-1]>=48&&a[len1-1]<=57)||a[len1-1]==32)
 s++;
 
if(q==0&&q1==0){
 printf("%2d. Length of longest match: 0\n",l);

 }
else 

printf("%2d. Length of longest match: %d\n",l,LCSlength());
l++; 

}
return 0;
}

