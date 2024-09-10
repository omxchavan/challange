// found the same problem on leet code hence solved it there and same is the solution

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int a=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            if (nums[i]!=i){
                a=i;
            }
            
        }
       return a;
    }
     
};
