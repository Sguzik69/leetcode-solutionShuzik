#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int, int> freq;

        // считаем частоты элементов arr1
        for (int x : arr1) {
            freq[x]++;
        }

        vector<int> result;

        // сначала элементы в порядке arr2
        for (int x : arr2) {
            while (freq[x] > 0) {
                result.push_back(x);
                freq[x]--;
            }
        }

        // остальные элементы (которых нет в arr2)
        vector<int> rest;
        for (auto &p : freq) {
            while (p.second > 0) {
                rest.push_back(p.first);
                p.second--;
            }
        }

        sort(rest.begin(), rest.end());
        result.insert(result.end(), rest.begin(), rest.end());

        return result;
    }
};