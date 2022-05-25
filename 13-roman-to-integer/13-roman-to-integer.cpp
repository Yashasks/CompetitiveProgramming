class Solution {
public:
  int romanToInt(string s) {
    unordered_map<char, int> ans = {{'I', 1},   {'V', 5},   {'X', 10},
                                    {'L', 50},  {'C', 100}, {'D', 500},
                                    {'M', 1000}};
    int total = ans[s.back()];
    for (int i = s.size() - 2; i >= 0; --i) {
      if (ans[s[i]] < ans[s[i + 1]]) {
        total -= ans[s[i]];
      } else {
        total += ans[s[i]];
      }
    }
    return total;
  }
};