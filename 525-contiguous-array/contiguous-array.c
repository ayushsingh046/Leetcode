int findMaxLength(int* nums, int numsSize) {
    int offset = numsSize;
    int* map = (int*)malloc((2 * numsSize + 1) * sizeof(int));
    
    memset(map, 0xFF, (2 * numsSize + 1) * sizeof(int)); 
    for (int i = 0; i < 2 * numsSize + 1; i++) {
        map[i] = -2;
    }
    
    map[offset + 0] = -1;
    
    int max_len = 0;
    int prefix_sum = 0;
    
    for (int i = 0; i < numsSize; i++) {
        prefix_sum += (nums[i] == 0) ? -1 : 1;
        
        int target_idx = offset + prefix_sum;
        if (map[target_idx] != -2) {
            int len = i - map[target_idx];
            if (len > max_len) {
                max_len = len;
            }
        } else {
            map[target_idx] = i;
        }
    }
    
    free(map);
    return max_len;
}