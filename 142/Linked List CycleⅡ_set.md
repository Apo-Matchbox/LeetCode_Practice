```cpp
#include <iostream>
#include <set>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        set<ListNode*> reached;
        ListNode* node = head;
        while (node) {
            if (reached.contains(node)) {
                return node;
            }
            reached.insert(node);
            node = node->next;
        }
        return nullptr;
    }
};
```

1段階目(6min)：141の問題とあんまり変わらず、返し方だけ変えればいいと思い、書いた所アクセプトとなった。
2段階目：https://google.github.io/styleguide/cppguide.html#Horizontal_Whitespace でスタイルチェック
3段目：復習として一度解けた問題について、翌日に挑戦、OKなら3日後に挑戦。としてたので問題なかった。

感想
setでの解き方をしたので、141, 142共に他の解法とunordered_setで書いた場合で再度解く。
めも：他の解法を考えた後、レビュー依頼をする。
