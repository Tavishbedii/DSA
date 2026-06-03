double findMaxAverage(int* nums, int numsSize, int k) {
    int sum = 0;
    for(int i =0;i<k;i++){
        sum += nums[i];
    }
    int maxsum = sum;
    
    for(int i=k;i<numsSize;i++){
        sum = sum-nums[i-k];
        sum = sum+nums[i];
        if(sum>maxsum){  
        maxsum = sum;
        }
    }
    return (double)maxsum / k;

}