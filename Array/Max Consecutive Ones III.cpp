// 時間複雜度: O(n)
// 空間複雜度: O(1)
int longestOnes(vector<int>& nums, int k) 
{        
        int l =0;
        int ans =0;
        int cur = 0;
        for(int r=0;r<nums.size();r++)
        {
            if(nums[r] == 0)
                cur++;
            
            while(cur>k)
            {
                if(nums[l] == 0)
                    cur--;              
                l++;
            }         
            ans = max(ans, r-l+1 );
        }
        
        return ans;     
  }
