class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> s;

        for(int val : nums){
            if(s.find(val)!=0){
                return true;
            }
            s.insert(val);
        }
        return false;
    }
};