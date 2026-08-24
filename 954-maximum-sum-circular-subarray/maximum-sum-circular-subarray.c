#include <limits.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))

int maxSubarraySumCircular(int* nums, int numsSize) {
    int totalSum = 0;
    int currMaxSum = 0;
    int currMinSum = 0;
    int maxSum = INT_MIN;
    int minSum = INT_MAX;

    for (int i = 0; i < numsSize; i++) {
        totalSum += nums[i];

        currMaxSum = MAX(currMaxSum + nums[i], nums[i]);
        maxSum = MAX(maxSum, currMaxSum);

        currMinSum = MIN(currMinSum + nums[i], nums[i]);
        minSum = MIN(minSum, currMinSum);
    }

    if (maxSum < 0) {
        return maxSum;
    }

    return MAX(maxSum, totalSum - minSum);
}
