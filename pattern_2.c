#include <stdio.h>

int main() {
      
       int i,j,k=1,n;
       
       scanf("%d",&n);
      
        for(i=0;i<5;i++)
        {
            for(j=0;j<=i;j++)
            {
               
                     printf("%d ",k);
               k++;
                if(k==n+1)
               {
                   break ;
            }
               
              }
            printf("\n");
            
             if(k==n+1)
               {
                   break ;
            }
            
}
return 0;
}
