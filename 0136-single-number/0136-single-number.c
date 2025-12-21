int singleNumber(int* nums, int numsSize) {

/* nvmd
    for (int i = 0; i < numsSize; i++) {
        int count = 0;

        for (int j = 0; j < numsSize; j++) {
            if (nums[i] == nums[j]) {
                count++;
            }
        }

        if (count == 1) {
            return nums[i];  // found the single number
        }
    }

    return -1;  // should never happen if input is valid
} the OG code before reading the hint bout XOR operator 
*/

     int result = 0;

    for (int i = 0; i < numsSize; i++) {
        result ^= nums[i];   //  cancels duplicates btw if it's actually 1 and it duplicate existe (which means it's a 1 too , then 1 xor 1 = 0)
    }

    return result;


}