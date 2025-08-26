class Solution {
  public:
    vector<vector<int>> countFreq(vector<int>& arr) {
        // code here
        vector<vector<int>>res;
        unordered_map<int,int>freq;
        for(int i=0;i<arr.size();i++){
            freq[arr[i]]++;
        }
        for(auto &p :freq){
            res.push_back({p.first,p.second});
        }
        return res;
    }
};