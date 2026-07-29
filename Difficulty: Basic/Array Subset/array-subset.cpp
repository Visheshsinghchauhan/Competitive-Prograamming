class Solution {
	public:
	// Function to check if b is a subset of a
	bool isSubset(vector<int> &a, vector<int> &b) {
		// Your code here
		unordered_map<int, int>mpp;
		for (int num : a) {
			mpp[num]++;
		}
		for (int num : b) {
			if (mpp[num]>0) {
				mpp[num]--;
			}
			else {
				return false;
			}
		}
		return true;
	}
};
