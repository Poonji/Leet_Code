class Solution {
public:
    std::vector<int> findPeaks(std::vector<int>& mountain) {
        int n = mountain.size();
        std::vector<int> peaks;

        for (int i = 1; i < n - 1; i++) {
            if (mountain[i] > mountain[i - 1] && mountain[i] > mountain[i + 1]) {
                peaks.push_back(i);
            }
        }

        return peaks;
    }
};
