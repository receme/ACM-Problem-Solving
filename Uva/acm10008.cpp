
#include<stdio.h>
#include<string.h>

int count=0,i,j,n,m;
char a[2000000];
struct data{
   int count;
   char ch; };

struct data b[26],t;
int main(){

    scanf("%d",&n);

   for(i=0;i<=n;i++){
    gets(a);
    m=strlen(a);

   for(j=0;j<m;j++){

      if(a[j]=='A'||a[j]=='a')
         {b[0].count++;
          b[0].ch='A';continue; }
      if(a[j]=='B'||a[j]=='b')
         {b[1].count++;
          b[1].ch='B';continue; }
      if(a[j]=='C'||a[j]=='c')
         {b[2].count++;
          b[2].ch='C';continue; }
      if(a[j]=='D'||a[j]=='d')
         {b[3].count++;
          b[3].ch='D';continue; }
      if(a[j]=='E'||a[j]=='e')
         {b[4].count++;
          b[4].ch='E';continue; }
      if(a[j]=='F'||a[j]=='f')
         {b[5].count++;
          b[5].ch='F';continue; }
       if(a[j]=='G'||a[j]=='g')
         {b[6].count++;
          b[6].ch='G';continue; }
      if(a[j]=='H'||a[j]=='h')
         {b[7].count++;
          b[7].ch='H';continue; }
      if(a[j]=='I'||a[j]=='i')
         {b[8].count++;
          b[8].ch='I';continue; }
      if(a[j]=='J'||a[j]=='j')
         {b[9].count++;
          b[9].ch='J';continue; }
      if(a[j]=='K'||a[j]=='k')
         {b[10].count++;
          b[10].ch='K';continue; }
      if(a[j]=='L'||a[j]=='l')
         {b[11].count++;
          b[11].ch='L';continue; }
       if(a[j]=='M'||a[j]=='m')
         {b[12].count++;
          b[12].ch='M';continue; }
      if(a[j]=='N'||a[j]=='n')
         {b[13].count++;
          b[13].ch='N';continue; }
      if(a[j]=='O'||a[j]=='o')
         {b[14].count++;
          b[14].ch='O';continue; }
      if(a[j]=='P'||a[j]=='p')
         {b[15].count++;
          b[15].ch='P';continue; }
      if(a[j]=='Q'||a[j]=='q')
         {b[16].count++;
          b[16].ch='Q';continue; }
      if(a[j]=='R'||a[j]=='r')
         {b[17].count++;
          b[17].ch='R';continue; }
       if(a[j]=='S'||a[j]=='s')
         {b[18].count++;
          b[18].ch='S';continue; }
      if(a[j]=='T'||a[j]=='t')
         {b[19].count++;
          b[19].ch='T';continue; }
      if(a[j]=='U'||a[j]=='u')
         {b[20].count++;
          b[20].ch='U';continue; }
      if(a[j]=='V'||a[j]=='v')
         {b[21].count++;
          b[21].ch='V';continue; }
      if(a[j]=='W'||a[j]=='w')
         {b[22].count++;
          b[22].ch='W';continue; }
      if(a[j]=='X'||a[j]=='x')
         {b[23].count++;
          b[23].ch='X';continue; }
      if(a[j]=='Y'||a[j]=='y')
         {b[24].count++;
          b[24].ch='Y';continue; }
      if(a[j]=='Z'||a[j]=='z')
         {b[25].count++;
          b[25].ch='Z';continue; }


   }}

   for(i=0;i<26;i++)
    for(j=0;j<25;j++)
     if(b[j].count<b[j+1].count){
       t=b[j];
       b[j]=b[j+1];
       b[j+1]=t; }

   for(i=0;i<26;i++){
    if(b[i].count==0)break;
    printf("%c %d\n",b[i].ch,b[i].count);
   }
 return 0;
}
