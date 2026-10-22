class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0; //Declare left pointer
        int right = s.size() -1; //Declare right pointer
        while(left < right){ 
            while(left < right && !isalnum((unsigned char)s[left])) left++; //If our char is not alphanumeric, skip to find the next one
            while(left < right && !isalnum((unsigned char)s[right])) right--;
            if(tolower(s[left]) != tolower(s[right])){ //Lowercase the chars and check
                return false;
            }
            
            left++; //Otherwise update ptrs
            right--;
        }
        return true; 
    }
    //Complexity O(N)
};
