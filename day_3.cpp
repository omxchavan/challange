// found the same problem on leet code hence solved it there and same is the solution

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
            for (int j=0;j<nums.size();j++)
            {
                if (j==nums[j]){
                    return j;
                }
        }
        
        return 0;

    }
};