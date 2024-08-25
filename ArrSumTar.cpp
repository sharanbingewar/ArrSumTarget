#include <iostream>

int main() 
{
    int size;
    std::cout << "Enter the number of elements: ";
    std::cin >> size;

    int* nums = new int[size];
    std::cout << "Enter the elements: ";
    for (int i = 0; i < size; ++i)
    {
        std::cin >> nums[i];
    }

    int target;
    std::cout << "Enter the target value: ";
    std::cin >> target;

    for (int i = 0; i < size; ++i)
    {
        for (int j = i + 1; j < size; ++j)
        {
            if (nums[i] + nums[j] == target)
            {
                std::cout << "Indices: [" << i << ", " << j << "]" << std::endl;
                delete[] nums;
                return 0;
            }
        }
    }

    std::cout << "No valid indices found." << std::endl;
    delete[] nums;
    return 0;
}
