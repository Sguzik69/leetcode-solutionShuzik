#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        unordered_map<int, int> cnt;

        for (int x : target) cnt[x]++;
        for (int x : arr) cnt[x]--;

        for (auto &p : cnt) {
            if (p.second != 0) return false;
        }

        return true;
    }
};