#include <string>
#include <stack>

class Solution {
public:
  bool isValid(const std::string& s) {
    std::stack<char> st;
    st = {};

    for (char c : s) {
      switch (c) {
        case '(': st.push(')'); break;
        case '{': st.push('}'); break;
        case '[': st.push(']'); break;
        case ')': case '}': case ']':
          if (st.empty() || st.top() != c) return false;
          st.pop();
          break;
        default:
          return false;
      }
    }
    return st.empty();
  }
};
