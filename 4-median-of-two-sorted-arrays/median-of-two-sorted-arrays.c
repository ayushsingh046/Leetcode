double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int i = 0;
    int j = 0;
    int k = 0;
    int totalSize = nums1Size + nums2Size;
    int arr[totalSize];
    
    while (i < nums1Size && j < nums2Size){
        if(nums1[i] <= nums2[j]){
            arr[k] = nums1[i];
            i++;
        }else{
            arr[k] = nums2[j];
            j++;
        }
        k++;
    }
    while (i < nums1Size){
        arr[k] = nums1[i];
        i++;
        k++;
    }
    while (j < nums2Size){
        arr[k] = nums2[j];
        j++;
        k++;
    }
    if (totalSize % 2 == 1) {
        return (double)arr[totalSize / 2];
    } else {
        return (double)(arr[totalSize / 2 - 1] + arr[totalSize / 2]) / 2.0;
    }
    

}