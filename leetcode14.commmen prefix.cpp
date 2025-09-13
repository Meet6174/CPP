class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        int n=strs.size(),i=0;
        string a=strs[0],b=strs[n-1],ans;
        while(i<a.size())
        {
            if(a[i]==b[i])
            {
                ans+=a[i];
            }
            else
            {
                break;
            }
            i++;
        }
      return ans;
    }
};