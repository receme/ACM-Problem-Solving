#include<stdio.h>
#include<string.h>

struct data{

 char a[50];
 int att,def;
};
struct data s[20],temp;
int i,j,k,m,n,p,cas,l,flag,c;

int main(){
scanf("%d",&cas);

for(c=0;c<cas;c++){

for(i=0;i<10;i++)
scanf("%s %d %d",&s[i].a,&s[i].att,&s[i].def);

for(i=0;i<10;i++)
 for(j=0;j<9;j++)
  if(strcmp(s[j].a,s[j+1].a)>0){
      temp=s[j];
      s[j]=s[j+1];
      s[j+1]=temp;
  }


for(i=0;i<10;i++)
 for(j=0;j<9;j++)
   if(s[j].att<s[j+1].att){
    temp=s[j];
    s[j]=s[j+1];
    s[j+1]=temp; }


flag=0;
l=-1;m=0;
for(i=0;i<10;){


m=0;
while(s[i].att==l){
  if(flag==0)
   p=i-1;
  flag=1;
  m++;
  i++;
  if(i==10)break;
  }

  if(flag==1){
  for(k=p;k<p+m+1;k++)
   for(j=p;j<p+m;j++)
    if(s[j].def>s[j+1].def){
    temp=s[j];
    s[j]=s[j+1];
    s[j+1]=temp; }
  flag=0;

  }
if(flag==0)i++;
l=s[i-1].att;
}



for(i=0;i<5;i++)
 for(j=0;j<4;j++)
  if(strcmp(s[j].a,s[j+1].a)>0){
      temp=s[j];
      s[j]=s[j+1];
      s[j+1]=temp;
  }

for(i=5;i<10;i++)
 for(j=5;j<9;j++)
  if(strcmp(s[j].a,s[j+1].a)>0){
      temp=s[j];
      s[j]=s[j+1];
      s[j+1]=temp;
  }




printf("Case %d:\n",c+1);
printf("(%s, %s, %s, %s, %s)\n",s[0].a,s[1].a,s[2].a,s[3].a,s[4].a);
printf("(%s, %s, %s, %s, %s)\n",s[5].a,s[6].a,s[7].a,s[8].a,s[9].a);
}

return 0;
}


