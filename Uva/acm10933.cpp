#include<stdio.h>
#include<iostream>
#include<string.h>
#include<map>
using namespace std;

struct data{
 
  char name[50];
  int win,st,point;
}s[1001],temp;

int i,j,k,m,n,l,p,t,team,r,w1,w2,sum,sum1;
char str[1000],nam[100],*pch,a[3][30];
int main(){
    
    while(scanf("%d",&team)==1){
        if(team==0) break;
        getchar();
        map<string,int>mp;
        
        for(i=0;i<team;i++)
        s[i].win=s[i].point=s[i].st=0;
        
        
        for(i=0;i<team;i++){
         gets(s[i].name);
         mp[s[i].name]=i; }
         
                     
      scanf("%d",&n);
      getchar();
      for(l=0;l<n;l++){
                       
       gets(str);      
      m=strlen(str);
      
      for(i=0;i<m;i++)
       if(str[i]==':'){
        j=i;
        break;}
       memset(nam,0,100); 
       for(i=0;i<j;i++)
        nam[i]=str[i];
     r=0;     
     pch = strtok (nam,"-");
     while (pch != NULL)
     {    
       strcpy(a[r],pch);
       r++;
       
       pch = strtok (NULL, "-");
  }    
    memset(nam,0,100);
    
    for(i=j+1;i<m;i++)
      nam[i-j-1]=str[i];

   pch = strtok (nam," -");
     r=1;
     w1=0; w2=0;
     
     while (pch != NULL)
     {    
       //printf("%s\n",pch); getch();
       t=strlen(pch);
       sum=0;
       j=1;
       for(i=t-1;i>=0;i--){
        sum=sum+(pch[i]-48)*j;
        j=j*10; }
      // printf("%d %d\n",sum,r); getch();
       if(r==1){
        s[mp[a[0]]].point+=sum;
        sum1=sum;
        r=2; }
       else if(r==2){
        s[mp[a[1]]].point+=sum;
        //printf("%d %d\n",sum1,sum);  getch();
        if(sum1>sum){
         if(sum1-sum>=2&&sum1>=25){            
         //printf("*");
         s[mp[a[0]]].st++;
         s[mp[a[1]]].st--;
         w1++; }}
        else{
          if(sum-sum1>=2&&sum>=25){   
         //printf("++");
         s[mp[a[1]]].st++;
         s[mp[a[0]]].st--;        
         w2++; }}
        
        r=1; 
        } 
   
       pch = strtok (NULL, " -");
  } 
  
       if(w1>w2)             
        s[mp[a[0]]].win++; 
       else if(w2>w1)      
        s[mp[a[1]]].win++;  
 
}
/*
for(i=0;i<team;i++)
 for(j=0;j<team-1;j++){
   if(s[j].win==s[j+1].win){
    if(s[j].st==s[j+1].st){
      if(s[j].point<s[j+1].point){
        temp=s[j];
        s[j]=s[j+1];
        s[j+1]=temp; }
      else if(s[j].point==s[j+1].point){
         if(strcmp(s[j].name,s[j+1].name)>0){
            temp=s[j];
            s[j]=s[j+1];
            s[j+1]=temp; }  }
      }     
                                                        
    else if(s[j].st<s[j+1].st){
     temp=s[j];
     s[j]=s[j+1];
     s[j+1]=temp; } 
    }                    
   else if(s[j].win<s[j+1].win){
     temp=s[j];
     s[j]=s[j+1];
     s[j+1]=temp; }  
} */

for(i=0;i<team-1;i++)
 for(j=i;j<team;j++){
   if(s[i].win==s[j].win){
    if(s[i].st==s[j].st){
      if(s[i].point<s[j].point){
        temp=s[i];
        s[i]=s[j];
        s[j]=temp; }
      else if(s[i].point==s[j].point){
         if(strcmp(s[i].name,s[j].name)>0){
            temp=s[i];
            s[i]=s[j];
            s[j]=temp; }  }
      }     
                                                        
    else if(s[i].st<s[j].st){
     temp=s[i];
     s[i]=s[j];
     s[j]=temp; } 
    }                    
   else if(s[i].win<s[j].win){
     temp=s[i];
     s[i]=s[j];
     s[j]=temp; }  
} 


for(i=0;i<team;i++)
 printf("%-20s%5d%5d%10d\n",s[i].name,s[i].win,s[i].st,s[i].point);
printf("\n");
}
return 0;
}                      
