#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        for(int i = 0; i < nums.size(); i++)
        {
            for(int j = i + 1; j < nums.size(); j++)
            {
                if(nums[i] + nums[j] == target)
                {
                    return {i, j};
                }
            }
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