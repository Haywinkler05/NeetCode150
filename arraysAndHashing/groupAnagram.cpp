class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> groupAna; //Create our vectors for the group anagrams
        unordered_map <string, vector<string>> stringsSorted; // Create a map of the vectors and a unique key
        for(int i = 0; i < strs.size(); i++){ 
            //Since anagrams will have the same word if its sorted, then will use the sorted word as a key and match each string as a val
            string sorted = strs[i];
            sort(sorted.begin(), sorted.end());
            stringsSorted[sorted].push_back(strs[i]);
        }
        for(const auto& pair : stringsSorted){ //Loop through the hashmap and append each val to the answer vector
            groupAna.push_back(pair.second);
        }


        return groupAna;
    }
       
    
};
