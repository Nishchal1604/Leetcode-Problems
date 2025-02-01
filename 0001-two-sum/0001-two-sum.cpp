class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>> indexedNums; // Store values with original indices
        for (int i = 0; i < nums.size(); i++) {
            indexedNums.push_back({nums[i], i});
        }

        // Step 1: Sort the array based on values
        sort(indexedNums.begin(), indexedNums.end());

        int n = nums.size();
        for (int i = 0; i < n - 1; i++) {
            int complement = target - indexedNums[i].first;
            int idx = binarySearch(indexedNums, i + 1, n - 1, complement);
            
            if (idx != -1) {
                return {indexedNums[i].second, indexedNums[idx].second};
            }
        }
        return {}; // Return empty vector if no solution found
    }

private:
    // Binary search function to find target in sorted list
    int binarySearch(vector<pair<int, int>>& arr, int left, int right, int target) {
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (arr[mid].first == target)
                return mid;
            else if (arr[mid].first < target)
                left = mid + 1;
            else
                right = mid - 1;
        }
        return -1; // Not found
    }
};
