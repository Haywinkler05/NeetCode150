class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> dups;//Creates a hashtable to check for duplicates
        int numOfHashes = 0;
        for(int i =0; i < nums.size(); i++){  //Loops through the nums
          if(dups.contains(nums[i])){ //If the hash contains a num, return true
            return true;
          }else{
            dups[nums[i]] = numOfHashes;
            numOfHashes++;
          }
        }//Otherwise its false
        return false;

        
    }
};
