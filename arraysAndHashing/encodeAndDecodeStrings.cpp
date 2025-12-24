class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded; 
        for(int i = 0; i < strs.size(); i++){ 
            for(const char& c : strs[i]){
                char shifted = c + strs[i].length(); //Use a Caesar cypher to shift the characters by the strings len 
                encoded += shifted;
            }
            encoded += ' '; //Uses a character space as the delimeter to seperate a string
        }


        return encoded;
    }

    vector<string> decode(string s) {
        vector <string> strings;
        int len = 0;//This will store the str's length since all of our encoded strings are in one string
        string currentStr; //Keep track of our current string were looking for
        string decoded; //Stores our decoded string
        for(int i = 0; i < s.size(); i++){
            if(s[i] == ' '){
                for(const char& c : currentStr){
                    char deshifted = c - len; //Reverse Caesar cypher
                    decoded += deshifted;
                }
                strings.push_back(decoded);
                currentStr = ""; //Reset all vars
                len = 0;
                decoded = "";
            }else{
                len++; //Store the len of the string 
                currentStr += s[i];
               
            }
        }



        return strings;
    }
};
