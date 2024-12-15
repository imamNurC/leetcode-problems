function canReach(nums) {
    // write code here
    // console.log(nums, nums.length);

    let maxJump = 0;

    for (let i = 0; i < nums.length; i++) {
        if (i > maxJump) {
            // console.log(false);
            return false;
        }
        // console.log(i, nums[i]);

        maxJump = Math.max(maxJump, i + nums[i]);
    }
    // console.log(true);
    return true;
}

canReach([2, 3, 1, 1, 4]);
canReach([4, 3, 2, 1, 0, 4]);
canReach([0, 1]);
