#include<stdio.h>
#include<string.h>
char f[10000];
int count[11];
char factorial[1010][10000];
void multiply(int k){
int cin,sum,i;
int len = strlen(f);
cin=0;
i=0;
while(i<len){
sum=cin+(f[i] - '0') * k;
f[i] = (sum % 10) + '0';
i++;
cin = sum/10;
}
while(cin>0){
f[i++] = (cin%10) + '0';
cin/=10;
}
f[i]='\0';
for(int j=0;j<i;j++)
factorial[k][j]=f[j];
factorial[k][i]='\0';}
void fac(){
int k;
strcpy(f,"1");
for(k=2;k<=1000;k++)
multiply(k);
}
void print(int n){
int i;
int len = strlen(factorial[n]);
for(i=0;i<10;i++)
 count[i]=0;
printf("%d! --\n",n);
for(i=0;i<len;i++){
  if(factorial[n][i]=='0')
   count[0]++;
  if(factorial[n][i]=='1')
   count[1]++;
  if(factorial[n][i]=='2')
   count[2]++;
  if(factorial[n][i]=='3')
   count[3]++;
  if(factorial[n][i]=='4')
   count[4]++;
  if(factorial[n][i]=='5')
   count[5]++;
  if(factorial[n][i]=='6')
   count[6]++;
  if(factorial[n][i]=='7')
   count[7]++;
  if(factorial[n][i]=='8')
   count[8]++;
  if(factorial[n][i]=='9')
   count[9]++;
}
printf("   (0)    %d    (1)    %d    (2)    %d    (3)    %d    (4)    %d\n",count[0],count[1],count[2],count[3],count[4]);
printf("   (5)    %d    (6)    %d    (7)    %d    (8)    %d    (9)    %d\n",count[5],count[6],count[7],count[8],count[9]);


}
int main(){
int n;
factorial[0][0]='1';
factorial[1][0]='1';
fac();
while(scanf("%d",&n)==1){
print(n);
}
return 0;
}
