class Solution {
	public:
	int countPairs(vector<int>& arr, int k) {
		// code here
		int n = arr.size();
		if (n <= 1)return 0;
		sort(arr.begin(), arr.end());
		int cnt = 0, i = 0;
		for (int j = 0; j<n; j++) {
			while (arr[j]-arr[i] >= k) {
				i++;
			}
			cnt += (j - i);
		}
		return cnt;
	}
};
