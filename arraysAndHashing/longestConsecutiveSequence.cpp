class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0){return 0;}//Saves time if the num is empt
        set<int> seq; //This sorts with a time complexity of O(Log n)
        int totalLongest = 0;
        int currLongest = 1;
        for(int i = 0; i < nums.size(); i++){
            seq.insert(nums[i]);
        }
       
        for(auto it = seq.begin(); it != seq.end(); ++it){ //Uses it to loop through the set giving us O(N)
            auto nextIt = next(it);
            if(nextIt != seq.end()){
                if((*it + 1) == *nextIt){
                currLongest++;
            }else{
                if(currLongest > totalLongest) totalLongest = currLongest;
                currLongest = 1;
            }
        
            }
        //Total time being O(n log n)
    }
    if(totalLongest > currLongest) return totalLongest;
    return currLongest;

    }
};
