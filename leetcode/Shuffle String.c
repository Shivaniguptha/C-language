char * restoreString(char * s, int* indices, int indicesSize){
    char * res =(char *)calloc(strlen(s)+1,1);
    //int len=sizeof(s)/sizeof(s[0]);
    
    for(int i=0;i<indicesSize;i++)
    {
        res[indices[i]]=s[i];
    }
    return res;
}
