class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> needsWarmer; //Declare our stack
        vector<int> ans(temperatures.size()); //Declare our answer index
        for(size_t i = 0; i < temperatures.size(); i++){
            int currTemp = temperatures[i]; // Get our current daily index
            while(!needsWarmer.empty() && currTemp > temperatures[needsWarmer.top()]){ //Loop through the stack if the temp is warmer
                ans[needsWarmer.top()] = i - needsWarmer.top(); //Find the distance
                needsWarmer.pop(); //Remove it from the stack
            }
            needsWarmer.push(i); //Otherwise push it
        }
        
        return ans;
        //Complexity O(N)
    }
};
