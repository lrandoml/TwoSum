#include <iostream>
#include <vector>
#include <unordered_map>

std::vector<int> testVector = {1,2,3};
int testInt = 5;

std::vector<int> twoSum(std::vector<int> &nums, int target)
{
    std::unordered_map<int, int> umap;
    for (int i = 0; i < nums.size(); i++)
    {
        int complement = target - nums[i];
        std::unordered_map<int, int>::iterator it = umap.find(complement);

        if (it != umap.end())
            return std::vector<int>{i, it->second};

        umap[nums[i]] = i;
    }
}

int main()
{
    // Debug code.
    for (int i : twoSum(testVector, testInt))
    {
        std::cout << i << "\n";
    }

    return 0;
}