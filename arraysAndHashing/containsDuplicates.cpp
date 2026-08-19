class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        // My idea here is that we will add each number of the vector to the map when we see it. If a value goes above 1, then return true. This will give me a runtime of O(n)

        unordered_map<int, int> freq; //Hashmap is the key here. Our numbers are stored as the key and their appearance is the val
        for(int i = 0; i < nums.size(); i++){
            if(freq.contains(nums[i])){ //Does not affect speed since hashmap lookups are O(1)
                return true; //If it exsists then we have a dup
            }else{
                freq[nums[i]]; //Otherwise add the number to the hashmap
            }
        }

        return false; // Returns false if the loop fails to find a dup



  
    }
};
