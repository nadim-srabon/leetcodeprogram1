#include <stdio.h>
#include <stdlib.h>

int* twoSum(int *nums, int numsSize, int target, int* returnSize) {
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                int* result = (int*)malloc(2 * sizeof(int));
                result[0] = i;
                result[1] = j;
                *returnSize = 2; // Setting the size of the result array
                return result;
            }
        }
    }
    *returnSize = 0; // No pair found
    return NULL;
}

int main() {
    int nums[] = {2, 7, 11, 15};
    int target = 18;
    int size = sizeof(nums) / sizeof(nums[0]);
    int returnSize;

    int* result = twoSum(nums, size, target, &returnSize);

    if (returnSize == 2) {
        printf("Output: [%d,%d]\n", result[0], result[1]);
        free(result);
    } else {
        printf("No pair found that adds up to the target.\n");
    }

    return 0;
}
