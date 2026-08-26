void sortColors(int* nums, int numsSize) {
    int C0 = 0;
    int C1 = 0; 
    int C2 = 0;
    for(int i = 0; i<numsSize; i++){
        if(nums[i] == 0){
            C0++;
        }else if(nums[i] == 1){
            C1++;
        }else{
            C2++;
        }
    }
    for(int i = 0; i<numsSize; i++){
        if(i < C0){
            nums[i] = 0;
        }else if(i < C1 +C0){
            nums[i] = 1;
        }else{
            nums[i] = 2;
        }
    }

}