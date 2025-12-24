class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> ans;
        for(int i = 0; i < nums.size(); i++){ 
            //Declare 2 for loops to check each number against itself
            for(int j = i+1; j < nums.size(); j++){
                if(nums[i] + nums[j] == target){
                    ans.push_back(i);
                    ans.push_back(j);
                    break; // Breaks the loop to save time if the solution is found
                }else{
                    continue;
                }
            }
        }
        return ans;
    }
};
