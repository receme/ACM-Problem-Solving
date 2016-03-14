
#include<stdio.h>
#include<string.h>

int main(){
    
    char a[200][200];
    int i,j,k,m,n,l,p;
    j=0;
    while(scanf("%d\n",&m)==1){
         if(m==0)break;                    
    
    j++;
     for(l=0;l<m;l++)
        gets(a[l]);
      printf("Case %d:\n",j);   
     printf("#include<string.h>\n#include<stdio.h>\nint main()\n{\n");
     for(l=0;l<m;l++){
                       
     printf("printf(\"");
     n=strlen(a[l]);
     for(i=0;i<n;i++){
      if(a[l][i]==34||a[l][i]==92)
       printf("%c",92);
      printf("%c",a[l][i]);}
     
      printf("%cn\");\n",92);}
      printf("printf(\"%cn\");\n",92);  
     
     printf("return 0;\n}\n",92);  
      
     
     
     }
     
     return 0;
     }
                                                           
                      
    
