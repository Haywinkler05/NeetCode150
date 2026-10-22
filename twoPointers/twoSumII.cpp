class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        int left = 0; int right = numbers.size() - 1; //Declare our left and right pointers

        while(left < right){
            int sum = numbers[left] + numbers[right]; //Calcuate sum

            if(sum == target){ //If we find the sum, push to the vector and break
                ans.push_back(left+1);
                ans.push_back(right+1);
                break;
            }
            else if(sum < target){ //Since its sorted we can easily move pointers to find the answer
                left++;
            }
            else{
                right--;
            }
        }

        return ans;

        //Time complexity O(N)
    }
};
