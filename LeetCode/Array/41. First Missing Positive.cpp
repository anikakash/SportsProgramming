class Solution {
public:
    int firstMissingPositive(vector<int>& A) {
      int sz = A.size();
        std::vector<bool> present(sz, false); // Use a separate vector for marking presence

        // mark the given positive numbers
        for (int x : A) {
            if (x > 0 && x <= sz)
                present[x - 1] = true; // Mark presence
        }

        // find the first missing positive integer
        for (int i = 0; i < sz; ++i) {
            if (!present[i]) // If not present, return the missing positive integer
                return i + 1;
        }

        // If all integers from 1 to sz are present, return sz + 1
        return sz + 1;
    }
};