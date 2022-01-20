class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
            int ret=0;
        int n =nums.size();
        for(int i=0;i<n-1;i++)
        {
                if(nums[i]==nums[i+1])
                {
                    ret =nums[i];

                }
        }
          return ret;
}
    
};