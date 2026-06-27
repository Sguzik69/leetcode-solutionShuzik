#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> freq;

        // считаем частоты
        for (int x : nums) {
            freq[x]++;
        }

        // сортируем по правилам задачи
        sort(nums.begin(), nums.end(), [&](int a, int b) {
            if (freq[a] == freq[b]) {
                return a > b;   // по убыванию числа
            }
            return freq[a] < freq[b]; // по возрастанию частоты
        });

        return nums;
    }
};
