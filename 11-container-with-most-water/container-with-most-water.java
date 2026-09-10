class Solution 
{
    public int maxArea(int[] height)
     {
        int i = 0;
        int j = height.length - 1;
        int ans=0;
        int area=1;
        int multiply=1;

        while (i<j)
        {   if(height[i]>height[j])
            {
              multiply=height[j];
            }
            else
            {
             multiply=height[i];
            }
            area=((j-i)*(multiply));
            if(area>ans)
            {
                ans=area;
            }
            if(height[i]>height[j])
            {
              j--;
            }
            else
            {
             i++;
            }
        }
        return ans;
            
            
        
    }
}