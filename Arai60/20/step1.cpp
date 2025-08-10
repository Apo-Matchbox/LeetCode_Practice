#include <string>
#include <unordered_map>
#include <stack>
using namespace std;

class Solution {
public:
  bool isValid(const std::string& s) {
    std::unordered_map<char, char> open_to_close = {
      {'(', ')'},
      {'{', '}'},
      {'[', ']'}
    };

    std::stack<char> unmatched_open_brackets;

    for (char c : s) {
      if (open_to_close.contains(c)) {
        unmatched_open_brackets.push(c);
        continue;
      }
      if (unmatched_open_brackets.empty()) {
        return false;
      }
      char expected_close = open_to_close[unmatched_open_brackets.top()];
      if (c != expected_close) {
        return false;
      }
      unmatched_open_brackets.pop();
    }
    return unmatched_open_brackets.empty();
  }
};
