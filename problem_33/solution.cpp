#include<stdio.h>
#include<string.h>

int main(){

int i,j,k,n,r,x;
char m[30];

while(scanf("%d %s",&n,m)){
  if(n==0&&m[0]=='0')
  break;



r=strlen(m);


/////////////////
 for(x=0;x<r;x++){
   if(m[x]=='1'||m[x]=='4'){
     for(i=0;i<n+2;i++)
      printf(" "); }

   if(m[x]=='2'||m[x]=='3'||m[x]=='5'||m[x]=='6'||m[x]=='7'||m[x]=='8'||m[x]=='9'||m[x]=='0'){
     printf(" ");
     for(i=0;i<n;i++)
      printf("-");
      printf(" ");
      }
   if(x!=r-1)
   printf(" ");
   }

printf("\n");
/////////////////////
for(j=0;j<n;j++){
  for(x=0;x<r;x++){
    if(m[x]=='1'||m[x]=='2'||m[x]=='3'||m[x]=='7'){
      for(i=0;i<=n;i++)
       printf(" ");
       printf("|");}

    if(m[x]=='5'||m[x]=='6'){
        printf("|");
        for(i=0;i<=n;i++)
         printf(" "); }

    if(m[x]=='4'||m[x]=='8'||m[x]=='9'||m[x]=='0'){
        printf("|");
        for(i=0;i<n;i++)
         printf(" ");
        printf("|"); }
if(x!=r-1)
     printf(" ");
  }
printf("\n"); }

////////////////////////////////////////
for(x=0;x<r;x++){
   if(m[x]=='0'||m[x]=='7'||m[x]=='1'){
      for(i=0;i<n+2;i++)
       printf(" "); }


   if(m[x]=='2'||m[x]=='3'||m[x]=='5'||m[x]=='6'||m[x]=='8'||m[x]=='9'||m[x]=='4'){
     printf(" ");
     for(i=0;i<n;i++)
      printf("-");
      printf(" ");}
   if(x!=r-1)
   printf(" ");
}

printf("\n");

///////////////

for(j=0;j<n;j++){
  for(x=0;x<r;x++){
    if(m[x]=='2'){
        printf("|");
       for(i=0;i<=n;i++)
        printf(" ");
         }

    if(m[x]=='1'||m[x]=='3'){
      for(i=0;i<=n;i++)
       printf(" ");
       printf("|");
        }

    if(m[x]=='5'||m[x]=='4'){
        for(i=0;i<=n;i++)
         printf(" ");
         printf("|");
          }


    if(m[x]=='8'||m[x]=='0'||m[x]=='6'){
        printf("|");
        for(i=0;i<n;i++)
         printf(" ");
        printf("|");
        }

    if(m[x]=='9'||m[x]=='7'){
     for(i=0;i<=n;i++)
      printf(" ");
      printf("|");}
     if(x!=r-1)
     printf(" ");
  }
printf("\n"); }

/////////////////////

for(x=0;x<r;x++){


   if(m[x]=='1'||m[x]=='4'||m[x]=='7'){
     for(i=0;i<n+2;i++)
      printf(" ");
       }

   if(m[x]=='2'||m[x]=='3'||m[x]=='5'||m[x]=='6'||m[x]=='8'||m[x]=='9'||m[x]=='0'){
     printf(" ");
     for(i=0;i<n;i++)
      printf("-");
      printf(" ");}
      if(x!=r-1)
      printf(" ");

   }

printf("\n\n");
}
return 0;

}
