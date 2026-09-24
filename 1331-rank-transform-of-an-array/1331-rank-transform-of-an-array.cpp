class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> sorted_arr = arr;
        sort(sorted_arr.begin(), sorted_arr.end());
        
        unordered_map<int, int> ranks;
        int current_rank = 1;
        
        // 2. Assign ranks to unique elements
        for (int i = 0; i < sorted_arr.size(); i++) {
            // If the number is not yet in the map, assign it a rank
            if (ranks.count(sorted_arr[i]) == 0) {
                ranks[sorted_arr[i]] = current_rank;
                current_rank++;
            }
        }
        
        // 3. Overwrite the original array with the mapped ranks
        for (int i = 0; i < arr.size(); i++) {
            arr[i] = ranks[arr[i]];
        }
        
        return arr;
    }
};