int maxSubArray(int* nums, int numsSize) {
    int currentsum = nums[0];
    int maxSum = nums[0];
    for(int i =1;i<numsSize;i++){
        if(currentsum<0)
        currentsum = nums[i];
        else
        currentsum += nums[i];
    if(currentsum>maxSum)
     maxSum = currentsum;    

    }
    return maxSum;
}