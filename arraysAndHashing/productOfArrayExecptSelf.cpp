class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector <int> ans;
        int leftProd = 1;
        int rightProd = 1;
        for(size_t i = 0; i < nums.size(); i++){
           if(i >= 1){
             leftProd *= nums[i-1]; //Calculate left side first
           }
           ans.push_back(leftProd); //Append
        }

        for(int i = nums.size()-1; i >= 0; i--){ //Go backwards to find the right product
            ans[i] *= rightProd; //Fold it in. I.E. last index won't have a right product so we mutiply it by the default 1
            rightProd *= nums[i]; //Update right Product
            
        }

       return ans; 
    }
    //Complexity O(N)
};
