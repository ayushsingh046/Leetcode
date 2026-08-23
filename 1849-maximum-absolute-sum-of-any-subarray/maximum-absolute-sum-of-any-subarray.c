#include <stdlib.h>
#include <math.h>

int maxAbsoluteSum(int* nums, int numsSize) {
    if (numsSize <= 0) return 0;
    
    int current_max = 0;
    int max_sum = 0;
    int current_min = 0;
    int min_sum = 0;
    
    for (int i = 0; i < numsSize; i++) {
        current_max += nums[i];
        if (current_max < 0) current_max = 0;
        if (current_max > max_sum) max_sum = current_max;
        
        current_min += nums[i];
        if (current_min > 0) current_min = 0;
        if (current_min < min_sum) min_sum = current_min;
    }
    
    return (max_sum > -min_sum) ? max_sum : -min_sum;
}
