class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        vector<int> sub_arr;
        int s =0;
        int msf = nums[0];
        int meh= 0;
        for(int i=0;i<nums.size();i++)
        {
            meh+=nums[i];
            if(meh > msf)
            {
                sub_arr.clear();
                msf= meh;
               sub_arr.push_back(s);
                sub_arr.push_back(i);
                
            }
            
            if(meh<0)
            {
                meh=0;
                s=i+1;
            }
        }
        return msf;
    }
};