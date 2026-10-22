class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0; int right = height.size() -1; //Declares our 2 pointers
        int max = 0;

        while(left < right){ //Loop
            int len = right - left; //Finds the length of the rectangle
            int tmp;

            if(height[right] > height[left]) tmp = len * height[left]; //Chooses the min value
            else tmp = len * height[right];

            if(tmp > max) max = tmp; //updates max
            if(height[right] < height[left]){
                right--;
            }else left++; //Moves pointer left or right

        }
        return max;
    }
    //Complexity O(N)
};
