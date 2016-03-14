#include<stdio.h>
#include<string.h>
#include<ctype.h>

struct data{
       
char name[30],temp[30];
int time_spent;
}s[101],t;

int i,j,k,n,m,se,ms,len;
char ch,b[10];

int main(){
    
    while(scanf("%d",&n)==1){
     
       for(i=0;i<n;i++){
       scanf("%s %c %d %s %d %s %d %s",s[i].name,&ch,&m,b,&se,b,&ms,b);
                 s[i].time_spent=(m*60*1000+se*1000+ms);
                 }
                 
        for(i=0;i<n;i++)
         for(j=0;j<n-1;j++){
          if(s[j].time_spent>s[j+1].time_spent){
             t=s[j];
             s[j]=s[j+1];
             s[j+1]=t;
             }
          else if(s[j].time_spent==s[j+1].time_spent){
              strcpy(s[j].temp,s[j].name);
              len=strlen(s[j].temp);
             
              for(k=0;k<len;k++)
               s[j].temp[k]=tolower(s[j].temp[k]);
              strcpy(s[j+1].temp,s[j+1].name); 
              len=strlen(s[j+1].temp);
              for(k=0;k<len;k++)
               s[j+1].temp[k]=tolower(s[j+1].temp[k]); 
              
              if(strcmp(s[j].temp,s[j+1].temp)>0){
                t=s[j];
                s[j]=s[j+1];
                s[j+1]=t;
               }
               } 
         }
         
        
         j=1;
         for(i=0;i<n;i++){
           if(i%2==0){
            printf("Row %d\n",j);
            j++; }
           printf("%s\n",s[i].name);
           
         }
    printf("\n");        
}

return 0;
                    
}                           
