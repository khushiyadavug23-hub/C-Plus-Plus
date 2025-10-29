class Solution {
public:
    int maxArea(vector<int>& nums) {
        int ans = INT_MIN;
        int i=0 ; 
        int n=nums.size();
        int j=n-1;
        while(i<=j){
            int ht = min(nums[i] , nums[j]);
            int wd = j-i;
            ans = max(ans , ht*wd);
            if(nums[i]<=nums[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return ans;
    }
};
