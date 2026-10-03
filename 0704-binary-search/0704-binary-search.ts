function bs(nums: number[], target: number, s: number, e: number): number {

    if (s <= e) {
        let mid: number = Math.floor(s + (e - s) / 2);
        if (nums[mid] == target) {
            return mid;
        }
        else if (nums[mid] > target) {
            return bs(nums, target, s, mid - 1);
        } else {
            return bs(nums, target, mid + 1, e);
        }
    }
    else {
        return -1;
    }
}

function search(nums: number[], target: number): number {
    let s: number = 0, e: number = nums.length - 1;
    return bs(nums, target, s, e);
};