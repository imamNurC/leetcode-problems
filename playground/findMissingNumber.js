function findMissingNumber(nums) {
    // write code here

    const n = nums.length;

    const expectedSum = (n * (n + 1)) / 2;
    const actualSum = nums.reduce((a, b) => a + b, 0);

    // console.log();

    res = expectedSum - actualSum;
    return res;
}

findMissingNumber([3, 0, 1]);
findMissingNumber([0, 1]);
findMissingNumber([9, 6, 4, 2, 3, 5, 7, 0, 1]);