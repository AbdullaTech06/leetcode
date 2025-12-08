class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> s;
        vector<int> ans;
        int actsum=0;
        int a=0;
        for(int i=0;i<n;i++){
            if(s.find(nums[i])!=s.end()){
                ans.push_back(nums[i]);
                 a = nums[i];
            }
            actsum+=nums[i];
          s.insert(nums[i]);
        }
        int sum = n*(n+1)/2;
        //sum+a-b=actsum--.b=sum-actsum+a
        int b = sum-actsum+a;
        ans.push_back(b);
        
        return ans;

    }
};