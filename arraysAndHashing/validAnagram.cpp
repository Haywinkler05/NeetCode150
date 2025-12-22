class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){ //Anagrams MUST be the same size, return false if the strings aren't
            return false;
        }
        unordered_map<char, int> ana; //Make a hashmap for our anagrams

        for(int i = 0; i < s.size(); i++){ //Store our characters and their frequencies into the hashmap of string s
            if(ana.contains(s[i])){
                ana[s[i]] += 1;
            }else{
                ana[s[i]]++;
            }
        }

        for(int i = 0; i < t.size(); i++){ //Loop through our t string and check hashmap
            if(ana.contains(t[i])){
                //If they are an anagram, then the frequency should go down to 0. Since it has the same # of chars for each string
                ana[t[i]]--;
                if(ana[t[i]] < 0){ //If it falls below 0, its not an anagram
                    return false;
                }
            }else{
                return false; //If it has a new char, then it is not an anagram
            }
        }

    return true; //Returns true if it passes all above checks
    }
};