#include<stdio.h>
#include<string.h>
//#include<conio.h>

int st1,st2,h1,m1,h,m,i,j,k,l,n,t,cas,a[101],b[101],c[101],d[101],big,f1,mm;
char bb[501][300],ch,temp[300];

int main()
{
 t=1;
 while(scanf("%d",&n)==1)
 {
     if(n==0){
     printf("Day #%d: the longest nap starts at 10:00 and will last for 8 hours and 0 minutes.",t);
     t++;
     continue; }

   getchar();
    for(i=0;i<n;i++)
       gets(bb[i]);




    for(i=0;i<n;i++)
     for(j=0;j<n-1;j++)
      if(strcmp(bb[j],bb[j+1])>0)
      { strcpy(temp,bb[j]);
        strcpy(bb[j],bb[j+1]);
        strcpy(bb[j+1],temp);

      }


    for(j=0;j<n;j++)
    {


      a[j]=(bb[j][0]-48)*10+(bb[j][1]-48);
      b[j]=(bb[j][3]-48)*10+(bb[j][4]-48);
      c[j]=(bb[j][6]-48)*10+(bb[j][7]-48);
      d[j]=(bb[j][9]-48)*10+(bb[j][10]-48);


    }




    big=0;
    for(i=0;i<n-1;i++)
    {
      if(c[i]==a[i+1]&&d[i]==b[i+1])
       continue;


      if(c[i]==a[i+1])
       {
         h1=0;
         m1=b[i+1]-d[i];

         if(m1>big){
          f1=1;
          big=m1;
          h=h1;
          m=m1;
          st1=c[i];
          st2=d[i];
          }
       }
      else
      {

        if(b[i+1]<d[i])
        {

          h1=a[i+1]-c[i]-1;
          m1=b[i+1]+60-d[i];
          mm=h1*60+m1;
          if(mm>big){
           f1=2;
           h=h1;
           m=m1;
           big=mm;
           st1=c[i];
           st2=d[i];
            }
        }
        else
        {
           // printf("***\n"); getch();
          //printf("%d %d\n%d %d\n",a[i+1],b[i+1],c[i],d[i]); getch();
          h1=a[i+1]-c[i];
          m1=b[i+1]-d[i];

          mm=h1*60+m1;

        //  printf("%d\n",mm); getch();
          if(mm>big){
           f1=3;
           h=h1;
           m=m1;
           big=mm;
           st1=c[i];
           st2=d[i];
           }
        }
      }
    }
      //printf("%d  ",c[n-1] );
      if(d[n-1]==0){
       h1=18-c[n-1];
       m1=0; }
      else{
       h1=18-c[n-1]-1;
       m1=60-d[n-1];}


      mm=h1*60+m1;

     // printf("\n%d\n",mm); getch();
         if(mm>big){
           big=mm;
           h=h1;
           m=m1;
           st1=c[n-1];
           st2=d[n-1];
           }


      h1=a[0]-10;
      m1=b[0];
      mm=h1*60+m1;

       if(mm>=big){
           big=mm;
           h=h1;
           m=m1;
           st1=10;
           st2=0;
           }


     printf("Day #%d: the longest nap starts at %d:",t,st1);
     if(st2%10==st2)
      printf("0");
      printf("%d and will last for",st2);
      if(h!=0)
       printf(" %d hours",h);
      printf(" %d minutes.\n",m);
 t++;
       //%d minutes.\n",st2,m1);
    //}
 }

return 0;
}
