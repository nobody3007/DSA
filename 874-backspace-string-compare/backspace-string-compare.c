bool backspaceCompare(char* s, char* t)
{
    int len = strlen(s);

    for(int i = 0; i < len; i++)
    {
        if(s[i] == '#')
        {
            if(i > 0)
            {
                for(int j = i-1; j < len-1; j++)
                {
                    s[j] = s[j+2];
                }

                len = len - 2;
                i = i - 2;
            }
            else
            {
                for(int j = i; j < len; j++)
                {
                    s[j] = s[j+1];
                }

                len = len - 1;
                i--;
            }
        }
    }

    len = strlen(t);

    for(int i = 0; i < len; i++)
    {
        if(t[i] == '#')
        {
            if(i > 0)
            {
                for(int j = i-1; j < len-1; j++)
                {
                    t[j] = t[j+2];
                }

                len = len - 2;
                i = i - 2;
            }
            else
            {
                for(int j = i; j < len; j++)
                {
                    t[j] = t[j+1];
                }

                len = len - 1;
                i--;
            }
        }
    }

    return strcmp(s, t) == 0;
}