/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;
    int *res = malloc(numsSize * sizeof(int));
    int l =0,r=numsSize-1,k=numsSize-1;

    while(l<=r){
        if(nums[l]*nums[l]>nums[r]*nums[r]){
            res[k--] = nums[l]*nums[l];
            l++;
        }
        else{
            res[k--] = nums[r]*nums[r];
            r--;
        }
    }
    return res;
    
}