#include <stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char *s = "codeleet";
    int indices[] = {4,5,6,7,0,2,1,3};
    char * res =(char *)calloc(strlen(s)+1,1);
    int len=sizeof(s)/sizeof(s[0]);
    
    for(int i=0;i<len;i++)
    {
        res[indices[i]]=s[i];
    }
    printf("%s",res);
}
