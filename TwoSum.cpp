class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>num;
        for (int i = 0; i < nums.size(); i++){
            num[nums[i]]++;
        }      
 
        for (auto x : num){
            if(x.second>1){
                return true ;
            }
        }   
        return false;
    }
};
