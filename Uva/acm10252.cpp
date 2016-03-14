
#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
char a[200000000],b[200000000];
int count1[130],count2[130],i,j,n,m;

int main(){
   
 while(1){
	  for(i=0;i<130;i++){
     count1[i]=0;
     count2[i]=0; }
     if(gets(a)==NULL) break;
	 gets(b);
        n=strlen(a);
        m=strlen(b);
       sort(a,a+n);
       sort(b,b+m); 
        
    for(i=0;i<130;i++)
      for(j=0;j<n;j++)
       if(a[j]==i)
         count1[i]++; 
     for(i=0;i<130;i++)
      for(j=0;j<m;j++)
       if(b[j]==i)
         count2[i]++; 
    for(i=0;i<130;i++){
      if(count1[i]==0||count2[i]==0)continue; 
      if(count1[i]<count2[i])
       for(j=0;j<count1[i];j++)
        printf("%c",i);
      else
      for(j=0;j<count2[i];j++)
        printf("%c",i);
        }
           
printf("\n");

}
    return 0;
}


