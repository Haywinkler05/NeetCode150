class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector <int> ans (nums.size());
        int leftProduct = 1; //We do a left and right pass of the vector
        int rightProduct = 1;
        for(int i = 0; i < nums.size(); i++){
           ans[i] = leftProduct; //Set the answer index to the previous left product
           leftProduct *= nums[i]; //Update the left product accordingly
        }
        for(int i = nums.size()-1; i >= 0; i--){ //Same as above but backwards
            ans[i] *= rightProduct; //Mutiply our new vector with the right product
            rightProduct *= nums[i];
        }
        

        return ans;
    }
};
