class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size(),max=0,l=0,r=n-1,w=r-l,h;
        for(int i=0;i<n;i++)
        {
           if(height[l]>height[r])
           {
            h=height[r];
           }
           else
           {
            h=height[l];
           }
           if(max<w*h)
           {
            max=w*h;
           }
            if(height[l]>height[r])
            {
                r--;
            }
            else{
                l++;
            }
            w=r-l;
            
        }
        return max;
    }
};