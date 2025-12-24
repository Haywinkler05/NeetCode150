class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        //This problem gave me some trouble
        //My original idea
            //Sort everything into a hash map
            //Check the freq of the hash map and return the highest one
            //The problem was the hashmap is unsorted and sorting requires at most O(n log n) which the problem asks for something   better
            //After searching arround and consulting AI, my one solution was bucket sort
        //I used my original hashmap to set my frequency value as the bucket
        //This means the first one will be the lowest freq and the end will be the highest
        //Answer is O(N) compared to bucket sorts normal O(N + K) since we use a hashmap and not some sorting algorithm
        unordered_map <int, int> freq;
        vector<vector<int>> buckets(nums.size() + 1);
        vector <int> ans;
        for(int i = 0; i < nums.size(); i++){
            freq[nums[i]]++;
        }

        for(auto& pair : freq){
            buckets[pair.second].push_back(pair.first);
        }
        for(int i = buckets.size() - 1; i >= 0; i--){
        for(int j = 0; j < buckets[i].size() && ans.size() < k; j++){
            ans.push_back(buckets[i][j]);
            }
        }
        
     return ans ;
    }
       
    
};
