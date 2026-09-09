class Solution {
    public long countCommas(long n) {
    if (n>=1000 && n<=999999)
        {
            return ((n-1000)+1);
        }
    else if(n>=1000000 && n<=999999999)
    {
       return (n - 1000000+1) * 2 + 999000;

    }
    else if(n>=1000000000L && n<=999999999999L)
    {
        return (n-1000000000L+1)*3 +999000+1998000000L;
    }
    else if(n>=1000000000000L && n<1000000000000000L)
    {
        return (n-1000000000000L+1)*4 +999000+1998000000L+2997000000000L;
    }
    else if(n==1000000000000000L)
    {
        return 3998998998999005L;
    }
    
    return 0;
        
    }
}