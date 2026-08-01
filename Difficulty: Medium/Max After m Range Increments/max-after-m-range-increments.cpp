class Solution {
	public:
	int findMax(int n, vector<int>& a, vector<int>& b, vector<int>& k) {
		// code here
		vector<int>ans(n + 1, 0);
		int N = a.size();
		for (int i = 0; i<N; i++) {
			ans[a[i]] += k[i];
			if (b[i]+1<n)ans[b[i]+1] -= k[i];
		}
		long long currsum = 0, rval = 0;
		for (int i = 0; i<n; i++) {
			currsum += ans[i];
			if (currsum>rval)rval = currsum;
		}
		return rval;
	}
};
