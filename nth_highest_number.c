#include <stdio.h>

int main()
{
    int a[10], b[10],count=1,highest_no,n=10,fresh_index;
    

    printf("enter all %d numbers: ",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("Enter which highest number: ");
    scanf("%d",&highest_no);
    
    int max_index=0;
    for (int i=0;i<n-1;i++)
    {
        fresh_index=max_index;
        max_index=0;
        
        for(int j=0;j<n;j++)
        {
            if (count==1)
            {
                if(a[max_index]<a[j])
                {
                    max_index=j;
                }
            }
            
            else
            {
                if (a[fresh_index]>a[j] && a[j]>a[max_index])
                {
                   max_index=j;
                }
            }
        }
        
        b[max_index]=count;
        count++;
    }
    
    for(int k=0;k<n;k++)
    {
        if (highest_no==b[k])
        {
            printf("%d",a[k]);
            break;
        }
    }
}
