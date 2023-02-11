#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int max=0;
    char *sentences[] = {"alice and bob love leetcode", "i think so too", "this is great thanks very much"};
    int l=sizeof(sentences)/sizeof(sentences[0]);
    for(int i=0;i<l;i++)
    {
        int j=0, count=1;
        while(sentences[i][j]!='\0')
        {
            if (sentences[i][j]==' ')
            {
                count++;
            }
        }
        
        if (count>max)
        {
            max=count;
        }
    }
    printf("%d",max);
}
