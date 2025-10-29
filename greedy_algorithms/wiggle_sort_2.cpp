class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        
        int n=nums.size();
        vector<int>temp(nums.begin() , nums.end());
        sort(temp.begin(),temp.end());
        int j=0;
        for(int i=n-1;i>=0;i--){
            if(i%2==0){
                nums[i]=temp[j];
                j++;
            }
        }
        for(int i=n-1;i>=0;--i){
            if(i%2==1){
                nums[i]=temp[j];
                j++;
            }
        }
    }
};
