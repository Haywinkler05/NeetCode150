class Solution {
public:
    int trap(vector<int>& height) {
        int left = 0; int right = height.size()-1; //Declare left and right pointers
        int leftMax = 0; int rightMax = 0;
        int total = 0;
        while(left <= right){ //Checks all the bars
            if(height[left] > leftMax){ //A max bar can't hold water
                leftMax = height[left];
                left++;
                continue;
            }
            if(height[right] > rightMax){ 
                rightMax = height[right];
                right--;
                continue;
            }
           if(leftMax < rightMax){ //If the left bar is constraining the water then we want to only check that one
            total += leftMax - height[left];
            left++;
           }else{
            total += rightMax - height[right];
            right--;
           }
        }
        return total;
        //Complexity O(N)
    }
};
