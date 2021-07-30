class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<float> num;
        for(int i=0;i<nums1.size();i++){
            num.push_back(nums1[i]);
        }
        
        for(int i=0;i<nums2.size();i++){
            num.push_back(nums2[i]);
        }
        sort(num.begin(),num.end());
        int len=nums1.size()+nums2.size();
        double even=(num[(len-1)/2] + num[len/2])/2;
        double odd= num[len/2];
        if(len%2==0){
            return even;
        }else{
            return odd;
        }
    }
};
