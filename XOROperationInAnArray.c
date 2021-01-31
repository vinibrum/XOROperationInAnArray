// Source : https://leetcode.com/problems/xor-operation-in-an-array/
// Author : Vinícius Brum
// Date   : 31-01-2021


#include <stdio.h>

//Given an integer n and an integer start
//Define an array nums where nums[i] = start + 2*i (0-indexed) and n == nums.length
//Return the bitwise XOR of all elements of nums.

int xorOperation(int n, int start){
    int i;
    int output = 0;

    for(i = 0; i < n; i++)
        output ^= start + 2*i;

    return output;
}

int main(){
    int n, start;
    n = 5;
    start = 0;

    printf("Bitwise XOR of All Elements: %d", xorOperation(5, 0));

    return 0;
}
