class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
    vector<int> result;
    for (int i = 0; i < arr.size(); i++) {
        int index = abs(arr[i]) - 1;  // map value to index
        if (arr[index] < 0) {
            result.push_back(abs(arr[i])); // duplicate found
        } else {
            arr[index] = -arr[index]; // mark visited
        }
    }
    return result;
}
};