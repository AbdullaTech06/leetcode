class Solution {
public:
    int maximumSum(vector<int>& nums) {
        vector<int> v0;
        vector<int> v1;
        vector<int> v2;

        for(int i=0;i<nums.size();i++){
            if(nums[i]%3==0){
                v0.push_back(nums[i]);
            }else if(nums[i]%3==1){
                v1.push_back(nums[i]);
            }else{
                v2.push_back(nums[i]);
            }
        }
        sort(v0.begin(),v0.end());
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());

        int ans = 0;

        //000
        if(v0.size()>=3){
            int n = v0.size();
            ans=max(ans,v0[n-1]+v0[n-2]+v0[n-3]);
        }

        //111
        if(v1.size()>=3){
            int n = v1.size();
        ans=max(ans,v1[n-1]+v1[n-2]+v1[n-3]);
        }

        //222
        if(v2.size()>=3){
            int n = v2.size();
        ans=max(ans,v2[n-1]+v2[n-2]+v2[n-3]);
        }

        //012
        if(!v0.empty()&&!v1.empty()&&!v2.empty()){
        ans = max(ans, v0[v0.size()-1] + v1[v1.size()-1] + v2[v2.size()-1]);

        }
        return ans;
    }
};