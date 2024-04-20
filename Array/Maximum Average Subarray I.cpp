// 時間複雜度:O(n)
// 空間複雜度:O(1)

double findMaxAverage(vector<int>& nums, int k) 
{        
        int cur=0;
        for(int i=0;i<k;i++)
        {
            cur += nums[i];
        }
        int ans = cur;
        
        for(int i=k;i<nums.size();i++)
        {
            cur+= nums[i] - nums[i-k];
            ans = max(ans,cur);
        }
        
        return ans/(double)k;
    }
