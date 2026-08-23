int maxProduct(int* nums, int numsSize) {
    if (numsSize <= 0) return 0;
    int minEnd = nums[0];
    int maxEnd = nums[0];
    int ans = nums[0];

    for(int i = 1; i<numsSize; i++){
        int v1 = nums[i];
        int v2 = minEnd * nums[i];
        int v3 = maxEnd * nums[i];

        maxEnd = (v1 > v2) ? ((v1 > v3) ? v1 : v3) : ((v2 > v3) ? v2 : v3);
        minEnd = (v1 < v2) ? ((v1 < v3) ? v1 : v3) : ((v2 < v3) ? v2 : v3);
        ans = (ans > maxEnd) ? ((ans > minEnd) ? ans : minEnd) : ((maxEnd > minEnd) ? maxEnd : minEnd);
    }
    return ans;

}