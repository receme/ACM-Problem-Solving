
#include<stdio.h>
#include<string.h>
char f[10000000];
char factorial[10000][100000];
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
for(k=2;k<=9999;k++)
multiply(k);
}
void print(int n){
int i;
int len = strlen(factorial[n]);

for(i=0;i<len;i++){
if(factorial[n][i]!='0'){
 printf("%c",factorial[n][i]);
 break; }
}
printf("\n");
}
int main(){
int n;
factorial[0][0]='1';
factorial[1][0]='1';
fac();
while(scanf("%d",&n)==1){
 if(n<10)
 printf("    %d -> ",n);
 if(n>9&&n<100)
 printf("   %d -> ",n);
 if(n>99&&n<1000)
 printf("  %d -> ",n);
 if(n>999&&n<10000)
 printf(" %d -> ",n);
print(n);
}
return 0;
}
