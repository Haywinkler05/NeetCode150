class Solution {
public:
    bool isAnagram(string s, string t) {
        //Need to be able tell if string s and string t are both an anagram
        //One way to solve this is with a hashmap
        unordered_map<char, int> ana; //Declare a hashmap of chars and ints
        if (s.size() != t.size()) return false; //Added this just to help with runtime
        for(size_t i = 0; i < s.size(); i++){ //Build out our hashmap with first letter
            if(!ana.insert({s[i], 1}).second){
                ana[s[i]]++;
            }
        }
        for(size_t i = 0; i < t.size(); i++){ //Checking our hashmap, if we add any letters return false otherwise subtract from letters
            if(!ana.insert({t[i], 1}).second){
                ana[t[i]]--;
            }else{
                return false;
            }
        }

        for(auto i : ana){
            if(i.second != 0) return false; //If all our letters our 0 we have an anagram otherwise its false
            else continue;
        }

        return true;
    }
    //Complexity: O(S+T)
};
