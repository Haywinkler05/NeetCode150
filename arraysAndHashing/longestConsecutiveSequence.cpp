class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set <int> seq; //Declare a set
        for(size_t  i = 0; i < nums.size(); i++) seq.insert(nums[i]); //Build
        int longCons = 1;
        int consq = 1;
        if(!seq.empty()){
            for(auto it = seq.begin(); it != prev(seq.end()); ++it){ //Loop through set
                if(*it + 1 == *next(it)) consq++; //See if it is consqeutive 
                else consq = 1;

                if(consq >= longCons) longCons = consq; //If we have a longer consq number set our longest one
                
            }
            return longCons; //Return the longest num
        
        }
        
        return 0;

        //Time complexity: O(N log N)
    }
};
