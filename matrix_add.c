#include<stdio.h>
    int main()
 {
        int a[10][10],b[10][10],c[10][10],i,j,n,m;
            printf("Enter no of rows and columns: ");
                 scanf("%d%d",&m,&n);
           printf("Enter first matix: ");
              for(i=0;i<m;i++) 
                {
                    for(j=0;j<n;j++)
                       {
                            scanf("%d",&a[i][j]);
                       }
                }
           printf("Enter second matix: ");
              for(i=0;i<m;i++) 
                {
                    for(j=0;j<n;j++)
                       {
                            scanf("%d",&b[i][j]);
                       }
                }       
              for(i=0;i<m;i++) 
                {
                    for(j=0;j<n;j++)
                       {
                            c[i][j]=a[i][j]+b[i][j];
                       }
                }   
             printf("\nAddition of matrix= ");      
             for(i=0;i<m;i++) 
                {
                    for(j=0;j<n;j++)
                       {
                           printf("%d\t",c[i][j]);
                       }
                        printf("\n");
                }                                            
 }   
