//CALENDER

#include <stdio.h>
#include <string.h>

int start;

int print_cal(int date)
{
    int count=1;
    for (int i=0;i<start;i++)
    {
        printf("     ");
    }
    
    while(count<=date)
    {
        printf(" %02d  ",count);
        count++;
        start++;
        if (start==7)
        {
            printf("\n");
            start=0;
        }
    }
    printf("\n\n");
}

int main()
{   
    int year;
    printf("Enter the year of calender: ");
    scanf("%d",&year);
    printf("Enter the 1st day of calender(0-6): ");
    scanf("%d",&start);
    
    printf("\n          CALENDER %d\n\n",year);
    
    int date;
    char months[12][10] = {"JANUARY","FEBRUARY","MARCH","APRIL","MAY","JUNE","JULY","AUGUST","SEPTEMBER","OCTOBER","NOVEMBER","DECEMBER"};
    char days[35] = "Mon  Tue  Wed  Thu  Fri  Sat  Sun";
    int dates[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    
    for (int i=0;i<=11;i++)
    {
        printf("             %s\n",months[i]);
        printf("%s",days);
        printf("\n");
        
        date=dates[i];
        if (i==1)
        {
            if ((year%400==0) || ((year%4==0) && (year%100!=0)))
            {
                date=29;
            }
        }
        print_cal(date);
    }
}
