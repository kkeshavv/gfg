class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        // code here
        int start=0;
        int end=arr.size()-1;
        while(start<end){
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
    }
};