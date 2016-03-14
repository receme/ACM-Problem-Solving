#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
char str[10];
struct data{

 char a[10],b[10];
}s[101],temp;

int i,j,k,m,n,p;

int main(){
    k=0;
    while(scanf("%s",s[k].a)==1){
     if(strcmp(s[k].a,"XXXXXX")==0)
      break;
     n=strlen(s[k].a);
     strcpy(s[k].b,s[k].a);
     sort(s[k].b,s[k].b+n);
     k++;
     }
     
     for(i=0;i<k;i++)
      for(j=0;j<k-1;j++)
       if(strcmp(s[j].a,s[j+1].a)>0){
         temp=s[j];
         s[j]=s[j+1];
         s[j+1]=temp; }
      
    
     
     while(scanf("%s",str)==1){
       if(strcmp(str,"XXXXXX")==0)
        break;
      m=strlen(str);
      sort(str,str+m);
      p=0;
      for(i=0;i<k;i++)
                      
        if(strcmp(s[i].b,str)==0){
         printf("%s\n",s[i].a);
         p=1; 
          }
       if(p==0)
        printf("NOT A VALID WORD\n");   
         
      printf("******\n");
}

return 0;
}
