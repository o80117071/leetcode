//時間複雜度 O(n)
//空間複雜度 O(n)

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans(nums.size());
        int l = 0;
        int r = nums.size()-1;
        int pos = nums.size()-1;;
        
        while(l<=r)
        {
            if(nums[l]*nums[l] > nums[r]*nums[r])
            {
                ans[pos] =nums[l]*nums[l];
                l++;
            }
            else
            {
                ans[pos] =nums[r]*nums[r];
                r--;
            }           
            pos--;
        }
        
        return ans;
    }
};
