int balancedStringSplit(char * s){
    int r_count = 0, l_count = 0, count = 0;
    
    for(int i=0;i<strlen(s);i++)
    {
        if (s[i]=='R')
        {
            r_count++;
        }
        else if (s[i]=='L')
        {
            l_count++;
        }
        if (r_count==l_count)
        {
            count++;
        }
    }
    return count;
}
