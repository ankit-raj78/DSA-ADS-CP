class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t) {
    
	unordered_map<int, int> h;
	vector<int> r;
	for (int i = 0; i < nums.size(); i++) {
		int nf = t - nums[i];
		if (h.find(nf) != h.end()) {
			r.push_back(h[nf]);
			r.push_back(i);			
			return r;
		}
		h[nums[i]] = i;
	}
	return r;
    }
};