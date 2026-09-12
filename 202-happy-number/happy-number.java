class Solution {
    public boolean isHappy(int n) {
        int sum=0;
        int reminder;
        while(n!=1 && n!=4)
        {
            sum=0;
            int temp=n;
            while(temp>0)
            {
                reminder=temp%10;
                sum=sum+reminder*reminder;
                temp=temp/10;
            }
            n=sum;
        }
        return n==1;
        
    }
}