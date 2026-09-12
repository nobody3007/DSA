struct stack
{
    int top;
    char arr[1000];
}s1,s2;
void push(char c,int n)
{
    if(n==1)
    {
    s1.arr[++s1.top]=c;   
    }
    else
    {
        s2.arr[++s2.top]=c;
    }
  
}
void pull(int n)
{
   
    if(n==1)
    {
        if(s1.top!=-1)
        {
            s1.top--;
        }
    
    }
    else
    {
        if(s2.top!=-1)
        {
            s2.top--;
        }
    }
}
bool backspaceCompare(char* s, char* t)
{
    s1.top=-1;
    s2.top=-1;
    for(int i=0;i<strlen(s);i++)
    {
        if(isalnum(s[i]))
        {
            push(s[i],1);
        }
        else
        {
            if(s1.top!=-1)
            {
                pull(1);
            }
        }
    }
     for(int i=0;i<strlen(t);i++)
    {
        if(isalnum(t[i]))
        {
            push(t[i],0);
        }
        else
        {
            if(s2.top!=-1)
            {
                pull(0);
            }
        }
    }
      if(s1.top != s2.top)
        return false;

    for(int i = 0; i <= s1.top; i++)
    {
        if(s1.arr[i] != s2.arr[i])
        {
            return false;
        }
    }
    return true;
}
