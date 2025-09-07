class Solution {
public:
    int reverse(int x) {
        long long sum=0;
        int r=0;
        
        while(x!=0)
        {
            r=x%10;
            sum = r+sum*10;
            x=x/10;
            if (sum > INT_MAX || sum < INT_MIN) {
                return 0;
            }
        }
        return sum;
    }
};