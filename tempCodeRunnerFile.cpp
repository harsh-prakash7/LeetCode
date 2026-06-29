
            }
        }
        return {};
    }
};
int main()
{
    vector<int> nums={1,2,3,4,5};
    int target= 7;

    Solution obj;

    vector<int> result= obj.twoSum(nums, target);

    cout<<"Indices: ";
    for(int i=0; i<nums.size();i++)
    {
        cout<<result[i]<<" ";
    }
    cout<<endl;
    return 0;
}