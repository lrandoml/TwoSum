#include <iostream>
#include <vector>
#include <unordered_map>
#include <map>

std::vector<int> testVector = { 1,2,3 };
int testInt = 5;

std::vector<int> twoSum(std::vector<int> &nums, int target)
{
    std::unordered_map<int, int> umap;
    for (int i = 0; i < nums.size(); i++)
    {
        if (umap.find(target - nums[i]) != umap.end())
        {
            return std::vector<int>{i, umap.find(target - nums[i])->second};
        }

        umap[nums[i]] = i;
    }

    return std::vector<int>{-1};
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
