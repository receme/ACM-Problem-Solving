
#include<stdio.h>
#include<string.h>

int main(){

    int i,j,k,n,m,flag,c=1;
    char a[1000][1000],b[1000][1000],d[1000],e[1000],r,s;

    scanf("%d\n",&n);

  for(i=0;i<n;i++){
      gets(a[i]);
      gets(b[i]);

      k=strlen(a[i]);
      m=strlen(b[i]);

    if(k==m){
        flag=0;
      for(j=0;j<k;j++)
       if(a[i][j]!=b[i][j]){
           flag=1;
           break; }

  if(flag==0)
   printf("Case %d: Yes\n",c);
  else
  printf("Case %d: Wrong Answer\n",c);

  }

  else{
      r=0;
      for(j=0;j<k;j++)
       if(a[i][j]!=' '){
       d[r]=a[i][j];
       r++; }


       s=0;
       for(j=0;j<m;j++)
       if(b[i][j]!=' ' ){
        e[s]=b[i][j];
        s++; }



      if(s!=r)
       printf("Case %d: Wrong Answer\n",c);
      else{
          flag=0;
        for(j=0;j<r;j++)
        if(d[j]!=e[j]){
         flag=1;
         break; }

       if(flag==0)
        printf("Case %d: Output Format Error\n",c);
       else
        printf("Case %d: Wrong Answer\n",c);
}
  }

   c++;

}
return 0;
}
