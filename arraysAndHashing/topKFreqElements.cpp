class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int>freq; //Declare our hashmap
        vector<int> ans; //answer vector
        for(size_t i = 0; i < nums.size(); i++){
           freq[nums[i]]++;
        } //Building our hashmap O(N)
        
        while(1){ //Looping until we reach the len limit O(K)
            if(ans.size() == k) break;
            else{
                int maxFreq = freq.begin()->second; //Set max frequency to the first val
                int numToAppend = freq.begin()->first; //Set the num we need to append first key
                for(auto i : freq){ //Loop through hashmap O(N)
                    if(i.second > maxFreq) {
                    maxFreq = i.second; numToAppend = i.first; //Update our max freq
                    }
                }
                ans.push_back(numToAppend); //Append to list and remove key
                freq.erase(numToAppend);
            }
        }

        return ans;
        //Complexity O(K * N)
    }
};
