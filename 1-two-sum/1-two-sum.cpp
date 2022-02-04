class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t) {
    



	unordered_map<int, int> h;
	vector<int> ans;
	
	for(int i =0;i<nums.size();i++)
	{
			int nf = t -nums[i];
			if(h.find(nf) !=h.end())
			{
				ans.push_back(h[nf]);
				ans.push_back(i);
				return ans;
			}
			h[nums[i]]= i;
	}
  return ans;
}

};