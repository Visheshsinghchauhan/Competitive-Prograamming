class Solution {
	public:
	vector<vector<int>> levelSort(vector<int>& arr) {
		// code here
		vector<vector<int>> ans;
		int n = arr.size();
		int level = 1, i = 0;
		while (i<n) {
			vector<int>temp;
			for (int j = 0; j<level && i<n; j++) {
				temp.push_back(arr[i]);
				i++;
			}
			sort(temp.begin(), temp.end());
			ans.push_back(temp);
			level *= 2;
		}
		return ans;
	}
};
