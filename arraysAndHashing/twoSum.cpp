class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans; //Declare our answer variable
        unordered_map<int, int> track; //Hashmap to keep track of positions and numbers
        for(size_t i = 0; i < nums.size(); i++){
           int awayFromTarget = target - nums[i]; //Check to see how far away our target num is from current index
           if(track.contains(awayFromTarget)){ //If we have a key that contains the target, we add its index to our ans vector
                ans.push_back(track[awayFromTarget]);
                ans.push_back(i);
                return ans;   
           }else{
            track.insert({nums[i], i}); //If it does not contain what we are looking for, we just add the val to our hashmap
           }
        }
        return ans; 
    }
}; 
//Complexity: O(N). Hashmaps have O(1) lookup time so our time is dominated by the length of nums
