class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty())
        return 0 ;
        int i ;

        int count = 0 ;
        for( i=0 ; i<nums.size() ; i++){
            if(nums[i]!=nums[count]){
                count++;
                nums[count]=nums[i];

            }
        }
        return count+1 ;
    }
};