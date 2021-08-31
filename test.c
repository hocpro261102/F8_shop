/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int a[100];
   int n,i,S;
   printf("nhap so phan tu cua mang :");
   scanf("%d",&n);
   S=0;
   for (i=0;i<n;i++)
   {
       printf("nhap phan tu thu %d : ",i+1);
       scanf("%d",&a[i]);
       S=S+a[i];
   }

   for (i=0;i<n;i++)
    {
        printf("%d \t",a[i]);
    }

    int min=a[0];
    for(i=1;i<n;i++)
        if(min>a[i])
            min=a[i];

    int max=a[0];
    for(i=1;i<n;i++)
        if(max<a[i])
            max=a[i];
    
    printf("\n gia tri lon nhat la: %d \n",max);
    printf("gia tri nho nhat la: %d \n ",min);
    printf("tong la:%d",S);

    

    return 0;
}
   


 
