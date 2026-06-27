#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> freq;

        // считаем частоты первого массива
        for (int x : nums1) {
            freq[x]++;
        }

        vector<int> res;

        // проходим второй массив
        for (int x : nums2) {
            if (freq[x] > 0) {
                res.push_back(x);
                freq[x]--;
            }
        }

        return res;
    }
};
