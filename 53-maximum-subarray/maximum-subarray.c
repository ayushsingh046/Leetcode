int maxSubArray(int* nums, int numsSize) {
    if (numsSize <= 0) return 0;
    int bestEnding = nums[0];
    int ans = nums[0];
    
    for(int i=1; i<numsSize; i++){
        int v1 = bestEnding + nums[i];
        int v2 = nums[i];
        bestEnding = (v1 > v2) ? v1 : v2;
        ans = (ans > bestEnding) ? ans : bestEnding;
    }
    return ans;
}