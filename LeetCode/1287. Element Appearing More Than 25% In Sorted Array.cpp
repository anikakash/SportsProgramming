    int findSpecialInteger(vector<int>& arr) {
        unordered_map<int, int> counts;
        for (int num : arr) {
            counts[num]++;
        }
        
        int target = arr.size() / 4;
        for (auto& [key, value] : counts) {
            if (value > target) {
                return key;
            }
        }
        
        return -1;
    }