class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> result;
        for(int i = 0; i < nums.size(); i++)
        {
            while(nums[i] != i+1)
            {
                int destIndex = nums[i] -1;
                if(destIndex < nums.size() && nums[i] != nums[destIndex])
                    swap(nums[i], nums[destIndex]);
                else
                    break;
            }
        }
        
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] != i+1)
            {
                result.push_back(nums[i]);
                result.push_back(i+1);
            }
            
        }
        return result;
    }
};