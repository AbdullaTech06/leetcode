class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int actsum=0;
        int n=nums.size();

        for(int val : nums){
            actsum+=val;
        }
        int sum=n*(n+1)/2;

        return sum-actsum;
    }
};