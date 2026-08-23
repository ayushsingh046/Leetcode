int maximumSum(int* arr, int arrSize) {
    if (arrSize <= 0) return 0;
    int noDelete = arr[0];
    int res = arr[0];
    int oneDelete = INT_MIN;

    for(int i = 1; i<arrSize; i++){
        int prevNoDelete = noDelete;
        int prevOneDelete = oneDelete;
        noDelete = ((noDelete + arr[i]) > arr[i]) ? (noDelete + arr[i]) : arr[i];

        int v1;
        if(prevOneDelete == INT_MIN){
            v1 = arr[i];
        }else{
            v1 = prevOneDelete + arr[i];
        }
        oneDelete = (v1 > prevNoDelete) ? v1 : prevNoDelete;
        res = (res > oneDelete) ? ((res > noDelete) ? res : noDelete) : ((oneDelete > noDelete) ? oneDelete : noDelete);
    }
    return res;
}