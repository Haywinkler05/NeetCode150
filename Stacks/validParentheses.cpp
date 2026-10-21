class Solution {
public:
    bool isValid(string s) {
        //Need to store these in a stack
        //We can insert each char into an array
        unordered_map<char, char> openClose= { {'(', ')'}, {'{', '}' }, {'[', ']'}}; //Lookup table
        stack<char> paren; //Declare our stack
        for(size_t i = 0; i < s.size(); i++){ //Loop through string
            char currChar = s[i];
            if(paren.empty()) paren.push(currChar); //if the stack is empty just push
            else{
                if(openClose.contains(currChar)) paren.push(currChar); //If our curr char is a key we can push safely
                else{
                    if(openClose[paren.top()] != currChar) return false; //Lookup and make sure our currChar matches the key of top
                    else paren.pop(); //Otherwise remove the top
                }
                }
            }
            if(!paren.empty()) return false; //Needs to close so we return false if the stack is not empty
        
        return true; //If it passes all that then return true
    }
    //Complexity O(N)
};
