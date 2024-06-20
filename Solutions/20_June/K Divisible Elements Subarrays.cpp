class Solution {
public:
    int countDistinct(vector<int>& nums, int k, int p) {
        int n = nums.size();
        int res = 0;
        set<vector<int>> subarray;
        for(int i = 0; i < n; i++){
            vector<int> arr;
            int cnt = 0;
            for(int j = i; j < n; j++){
                arr.push_back(nums[j]);
                if(nums[j] % p == 0){
                    cnt++;
                }
                if(cnt <= k) subarray.insert(arr);
                else break;
            }
        }
        return subarray.size();
    }
};
