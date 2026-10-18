class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> ans;
        for(size_t i=0; i < nums.size(); i++){ 
            if(!ans.insert(nums[i]).second){
                return true;
            }
        }
        return false;

        //Time complexity O(N)
        //Explaination: Sets only allow non dups. Therefore, if we check the 2nd val a set returns (a bool) and its false
        // Then we have a dup
    }
};
