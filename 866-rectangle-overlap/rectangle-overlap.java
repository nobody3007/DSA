class Solution {
    public boolean isRectangleOverlap(int[] rec1, int[] rec2) {
        int i=0;
         int []max=new int[3];
        int []min=new int[3];
      
        while(i<rec1.length-2)
        {
            if(rec1[i]>=rec2[i])
            {
             max[i]=rec1[i]; 
            }
            else
            {
             max[i]=rec2[i]; 
            }
          i++;
          
        }
         int j=2;
         i=0;
        while(j<rec1.length)
        {
            if(rec1[j]>=rec2[j])
            {
             min[i]=rec2[j]; 
             
            }
            else
            {
             min[i]=rec1[j]; 
            }
            i++;
            j++;
        }
        int width=min[0]-max[0];
        int hight=min[1]-max[1];
        if(width>0 && hight>0)
        {
            return true;
        }
        return false;
        
    }
}