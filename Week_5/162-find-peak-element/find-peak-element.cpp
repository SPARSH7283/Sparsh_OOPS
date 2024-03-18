class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int low = 0; 
        int high = nums.size() - 1;
        int ans = -1;
        while(low<high){
            int mid = (low + high) >> 1;
            if(nums[mid] < nums[mid+1]){
                low = mid+1;
            }
            else if(nums[mid] > nums[mid+1]){
                high = mid;
                ans = high;
            }
        }
        if(low==high) return low;
        else return ans;
    }
};