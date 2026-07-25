class Solution {
	public:
	int maxWater(vector<int> &arr) {
		// code here
		// Naive Approach
		int n = arr.size();
		vector<int>suffix(n,0);
		int maxi = arr[n - 1];
		for (int i = n - 1; i >= 0; i--) {
			if (maxi<arr[i])maxi = arr[i];
			suffix[i] = max(maxi, arr[i]);
		}
		int leftmax = arr[0];
		int ans = 0;
		for (int i = 0; i<n; i++) {
		    if(arr[i]>leftmax)leftmax=arr[i];
			ans+=min(leftmax,suffix[i])-arr[i];
		}
		return ans;
		
	}
};//    4  4  4   4   4  2   2
  //    leftmax=3
  //    ans= 0+
rr