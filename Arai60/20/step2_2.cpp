#include <string>
#include <array>

class Solution {
public:
  bool isValid(const std::string& s) {
    if (s.size() % 2) return false;

    std::array<char, 128> close_to_open{};
    close_to_open[')'] = '(';
    close_to_open['}'] = '{';
    close_to_open[']'] = '[';

    std::string st;
    st.reserve(s.size());

    for (char c : s) {
      if (c == '(' || c == '{' || c == '[') {
        st.push_back(c);
      } 
      else {
        if (st.empty() || st.back() != close_to_open[c]) return false;
        st.pop_back();
      }
    }
    return st.empty();
  }
};
