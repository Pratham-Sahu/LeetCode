/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
    int l = -1; int r = -1;
    for (int i = 0; i < numsSize; i++) {
        if (l == -1 && nums[i] == target) {
            l = i;
            if (r != -1) {
                break;
            }
        }
        int ri = numsSize - 1 - i;
        if (r == -1 && nums[ri] == target) {
            r = ri;
            if (l != -1) {
                break;
            }
        }
    }
    int* result = (int*)malloc(2 * sizeof(int));
    result[0] = l;
    result[1] = r;
    *returnSize = 2;
    return result;
}
