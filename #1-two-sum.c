#include <stdio.h>
#include <stdlib.h>



/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{   
    int *returnAr = malloc(sizeof(int ) * 2);
    for (size_t i = 0; i < numsSize; i++)
    {
        for (size_t j = i+1; i < numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                returnAr[0] = nums[i];
                returnAr[1] = nums[j];
                return returnAr;
            }
        }
        
    }
    
    return NULL;


}

