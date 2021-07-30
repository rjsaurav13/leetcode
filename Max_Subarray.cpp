class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max=INT_MIN,temp=0;
        for(int i=0;i<nums.size();i++){
            temp=temp+nums[i];
            if(max<temp){
                max=temp;
            }
            if(temp<0){
                temp=0;
            }
        }
        return max;
        
    }
};
