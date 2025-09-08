class Solution {
public:
    bool isPalindrome(int x) {
    long long y=0,tem;
       tem=x;
        if(tem<0)
        {
            return false;
        }
        while (tem>0)
        {
           y= tem%10+ 10*y;
           tem=tem/10;
        }
        if(y==x)
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
};