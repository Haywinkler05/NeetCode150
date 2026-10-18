class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans; //Our answer vector
        unordered_map<string, vector<string>> occr; //Build out our hashmap
        for(size_t i = 0; i < strs.size(); i++){ //Loop through vector
            string sorted = strs[i]; //Stores the string we want to sort
            sort(sorted.begin(), sorted.end()); //Sort
            occr[sorted].push_back(strs[i]); //Add to our vector
            
        }
        
        for (const auto& [key, vec] : occr) {
            ans.push_back(vec); //Append each vector key ot our answer vector
        }
        return ans;
    }
};
//Complexity O(N * L log L). N is the length of our strings vector and L is the length of our string.
