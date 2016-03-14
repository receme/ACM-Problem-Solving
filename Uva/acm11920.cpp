#include<stdio.h>
#include<string.h>

char a[1005],c[1005],ch,ch1;

int i,j,k,n,l,co,cas,big,let,rit;

int main(){
    
    scanf("%d",&cas);
  for(l=0;l<cas;l++){
   
  scanf("%s",a);
  
  n=strlen(a);
 
 co=0;
       for(i=0;i<n;i++)
        if(a[i]!='?'){
         co=1;
         break; }

       if(co==0){
        printf("Case %d: 1\n",l+1);
        continue; }
 
 
 
   
  if(a[0]=='?'||a[n-1]=='?'){
    
    for(i=0;i<n-1;i++)
     if(a[i]!='?')
      break;
      
    for(j=i-1;j>=0;j--){
      
      if(a[j+1]=='1')
       a[j]='0';
      else
       a[j]='1'; 
       } 
  
    for(i=n-1;i>0;i--)
     if(a[i]!='?')
      break;
  
    for(j=i+1;j<n;j++)
      if(a[j-1]=='1')
       a[j]='0';
      else
       a[j]='1';  
}
   
  k=0;
  for(i=0;i<n;i++){
    
   if(a[i]!='?'&&k==1){
     ch=a[i-2];
     let=1;
     for(j=i-3;j>=0;j--){
       if(a[j]!=ch||a[j]=='?')
        break;
      ch=a[j];
      let++;
      }
      
    ch1=a[i];

     rit=1;
     for(j=i+1;j<n;j++){
          if(a[j]=='?'||a[j]!=ch1)
           break;
          ch1=a[j];
          rit++; } 
          
     if(ch==ch1){
      if(ch=='0')
       a[i-1]='1';
      else
       a[i-1]='0'; }
    
     if(let>rit&&ch!=ch1)
      a[i-1]=ch1;
     else if(let<=rit&&ch!=ch1)
      a[i-1]=ch;         
      
      k=0;
      continue;
   }
   
   else if(a[i]!='?'&&k>1){
            
     if(i-k-1>=0&&i<n){ 
     
     if(a[i-k-1]=='0'&&a[i]=='0'){
       a[i-k]='1'; 
       a[i-1]='1'; 
       }
     else if(a[i-k-1]=='0'&&a[i]=='1'){
       a[i-k]='1'; 
       a[i-1]='0'; 
       } 
     else if(a[i-k-1]=='1'&&a[i]=='0'){
       a[i-k]='0'; 
       a[i-1]='1'; 
       }  
     else if(a[i-k-1]=='1'&&a[i]=='1'){
       a[i-k]='0'; 
       a[i-1]='0'; 
       }
       
     for(j=i-k+1;j<i-1;j++)
       if(a[j-1]=='1')
        a[j]='0';
       else
        a[j]='1';
   
     }
     
     k=0; 
     continue;
     
     }
  
   
  
   if(a[i]=='?')
     k++;
     
   }         
         big=0;
         ch=a[0];
          co=1;

         for(i=1;i<n;i++){
         
          if(a[i]==ch){
            co++;
            
            continue; }

          else if(co>big){
           big=co;
           }
           co=1;
           ch=a[i];
           }
           if(co>big)
           big=co;

  printf("Case %d: %d\n",l+1,big);  
               

}



return 0;
}
                   
    
    
