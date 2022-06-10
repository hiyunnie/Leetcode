/*
704. Binary Search
Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.

You must write an algorithm with O(log n) runtime complexity.
*/
/*
有排序的數組中搜尋->二分搜尋法
*/

class Solution {
public:
    int search(vector<int>& nums, int target) {

        int high = nums.size()-1;
        int low = 0;
        int mid;
        while(low<=high)
        {
            mid = low + (high-low)/2;
            if(nums[mid] == target) return mid;
            else if(nums[mid] > target) high = mid-1;
            else if(nums[mid] < target) low = mid+1;
        }
        return -1;
    }
};