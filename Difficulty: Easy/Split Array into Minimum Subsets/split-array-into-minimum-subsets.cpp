class Solution {
  public:
    int minSubsets(vector<int>& arr) {
        // code here
        int n=arr.size();
        if(n<1)return 0;
        sort(arr.begin(),arr.end());
        int cnt=1;
        for(int i=1;i<n;i++){
            if((arr[i-1]+1)!=arr[i])cnt++;
        }
        return cnt;
    }
};
