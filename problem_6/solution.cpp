#include<stdio.h>
#include<string.h>

char a[1500000],ch;
long i,m,n,cas,c=1,l,flag;

int main(){
    
    while(scanf("%s",a)!=EOF){
    n=strlen(a);
     printf("Case %ld:\n",c);
     c++;          
    scanf("%ld",&cas);
    
    for(l=0;l<cas;l++){
     scanf("%ld %ld",&m,&n);
    
    
     if(m>n){
      i=m;
      m=n;
      n=i;}
     
     ch=a[m];
     flag=0;
     for(i=m+1;i<=n;i++)
      if(a[i]!=ch){
       flag=1;
       break;}
       
     if(flag==0)
      printf("Yes\n");
     else
      printf("No\n");
}
}     
return 0;
}