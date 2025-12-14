class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> ans;
        int n = nums.size();

        int i = 0;
        int dig = 1;

        while (dig <= n) {
            if (i < n && nums[i] == dig){
                while (i < n && nums[i] == dig) {
                    i++;
                }
            } else {
                ans.push_back(dig);
            }
            dig++;
        }
        return ans;
    }
};
