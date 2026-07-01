#include <iostream>
#include <vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        unordered_map<int, int> mp;
        for(int i=0; i<nums.size(); i++)
        {
            int complement =target -nums[i];
            if(mp.find(complement)!= mp.end())
            {
                return{mp[complement], i};
            }
            mp[nums[i]]= i;
        }
        return {};
    }
};

int main()
{
    // Input
    vector<int> nums = {3, 6, 4, 5};
    int target = 11;

    // Create object
    Solution obj;

    // Call function
    vector<int> result = obj.twoSum(nums, target);

    // Print result
    cout << "Indices: ";

    for(int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }

    cout << endl;

    return 0;
}