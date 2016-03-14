#include<string.h>
#include<iostream>
#include<map>
using namespace std;
char str[10000];
int sum,i,j,n,flag,a,b,c,d;
void dec_to_rom(int e){
a = (e/1000)*1000;
b = ((e/100)%10)*100;
c = ((e/10)%10)*10;
d = ((e/1)%10)*1;

if (a ==1000)
		 printf("M");
else if (a ==2000)
		 printf("MM");
else if (a ==3000)
		 printf("MMM");
else if (a==4000)
         printf("MMMM");		 

if (b == 100)
		 printf("C");
else if (b == 200)
		 printf("CC");
else if (b == 300)
		 printf("CCC");
else if (b == 400)
		 printf("CD");
else if (b ==500)
		 printf("D");
else if (b == 600)
		 printf("DC");
else if (b == 700)
		 printf("DCC");
else if (b ==800)
		 printf("DCCC");
else if (b == 900)
		 printf("CM");


if (c == 10)
		 printf("X");
else if (c == 20)
		 printf("XX");
else if (c == 30)
		 printf("XXX");
else if (c == 40)
		 printf("XL");
else if (c ==50)
		 printf("L");
else if (c == 60)
		 printf("LX");
else if (c == 70)
		 printf("LXX");
else if (c ==80)
		 printf("LXXX");
else if (c == 90)
		 printf("XC");

if (d == 1)
		 printf("I");
else if (d == 2)
		 printf("II");
else if (d == 3)
		 printf("III");
else if (d == 4)
		 printf("IV");
else if (d ==5)
		 printf("V");
else if (d == 6)
		 printf("VI");
else if (d == 7)
		 printf("VII");
else if (d ==8)
		 printf("VIII");
else if (d == 9)
		 printf("IX");
}
 
 


int main()
{
while(scanf("%s",str)==1){
     n=strlen(str);
if(str[0]>=48&&str[0]<=57){
sum=0; j=1;

for(i=n-1;i>=0;i--){
 sum=sum+(str[i]-48)*j;
j=j*10; }

dec_to_rom(sum);
printf("\n");
}
else{
 sum=0;

 map<char,int>mp;
 mp['I']=1;
 mp['V']=5;
 mp['X']=10;
 mp['L']=50;
 mp['C']=100;
 mp['D']=500;
 mp['M']=1000;


 for(i=0;i<n;i++){
   flag=0;
   if(mp[str[i]]<mp[str[i+1]])
     flag=1;
     
    if(flag==0){
    if(str[i]=='I')
     sum=sum+1;
    else if(str[i]=='V')
     sum=sum+5;
    else if(str[i]=='X')
     sum=sum+10;
    else if(str[i]=='L')
     sum=sum+50;
    else if(str[i]=='C')
     sum=sum+100;
    else if(str[i]=='D')
     sum=sum+500;
    else if(str[i]=='M')
     sum=sum+1000;
    }
    else{
     if(str[i]=='I')
     sum=sum-1;
    else if(str[i]=='V')
     sum=sum-5;
    else if(str[i]=='X')
     sum=sum-10;
    else if(str[i]=='L')
     sum=sum-50;
    else if(str[i]=='C')
     sum=sum-100;
    else if(str[i]=='D')
     sum=sum-500;
    else if(str[i]=='M')
     sum=sum-1000;
    flag=0;
    }

}
printf("%d\n",sum);
}
}
return 0;
}
