var merge = function (nums1, m, nums2, n) {
    // Start pointers at the end of the initialized parts of nums1 and nums2
    let i = m - 1; // 2
    let j = n - 1; //2
    let k = m + n - 1; // 5 => maksimum in these array

    // console.log(i, j, k);

    // Merge the arrays starting from the end
    while (i >= 0 && j >= 0) {
        if (nums1[i] > nums2[j]) {
            nums1[k] = nums1[i];
            i--;
        } else {
            nums1[k] = nums2[j];
            j--;
        }
        k--;
    }
    // console.log(nums1);

    // If nums2 still has elements, copy them into nums1
    while (j >= 0) {
        nums1[k] = nums2[j];
        j--;
        k--;
    }
    console.log(nums1);

    // No need to handle the case for nums1 because it's already sorted in place
};

merge([1, 2, 3, 0, 0, 0], 3, [2, 5, 6], 3);
