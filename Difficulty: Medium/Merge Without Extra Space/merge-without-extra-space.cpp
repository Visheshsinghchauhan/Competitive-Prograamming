class Solution {
	public:
	void mergeArrays(vector<int>& a, vector<int>& b) {
		// code here
		int n = a.size();
		int m = b.size();
		int ptr1 = n - 1, ptr2 = 0;
		while (ptr1 >= 0 && ptr2<m) {
			if (a[ptr1]>b[ptr2]) {
				swap(a[ptr1], b[ptr2]);
				ptr1--;
				ptr2++;
			}
			else {
				break;
			}
		}
		sort(a.begin(), a.end());
		sort(b.begin(), b.end());
	}
};
