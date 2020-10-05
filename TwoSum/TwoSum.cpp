#include <iostream>
#include <vector>
#include <unordered_map>
#include <map>
#include <algorithm>

std::vector<int> testVector = { 1,2,3 };
int testInt = 5;

std::vector<int> twoSum(std::vector<int> &nums, int target)
{
    std::unordered_map<int, int> m1;
    std::vector<int> p1;

    for (int i = 0; i < nums.size(); i++)
        m1[nums[i]] = i;

    for (int i = 0; i < nums.size(); i++)
    {
        if (target != nums[i] * 2 && m1.find(target - nums[i]) != m1.end())
        {
            p1.push_back(m1[target - nums[i]]);
            p1.push_back(i);
            break;
        }

        else if (target == nums[i] * 2 && m1[nums[i]] != i)
        {
            p1.push_back(m1[target - nums[i]]);
            p1.push_back(i);
            break;
        }
    }

    return p1;
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
