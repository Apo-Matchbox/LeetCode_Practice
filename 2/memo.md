# [2. Add Two Numbers](https://leetcode.com/problems/add-two-numbers/description/)

##Step1

###問題意図の考察
- Linked Listの管理ができるか
- 数字の繰り上げ
- 逆 -> 順　に戻して出力

###解法を考える
- これまでのLinked List カテゴリ 4題
 * std::set
 * std::ordered_set
 * ListNode*
 * dummy

- 今回の問題へのアプローチ
 * 受け取る -> 計算する -> 順に返す

- 回答が思いつかなかったので、答えを見る　nktr さん (https://github.com/nktr-cp/leetcode/pull/6/commits/3c097811793a76dff4cab6d12245ea54c02857d2)

```cpp
class Solution {
  ListNode* addTwoNumber(ListNode* l1, ListNode* l2) {
    ListNode dummy_head = ListNode();
    ListNode* result_tail = &dummy_head;
    int carryover = 0;
    while (l1 || l2 || carryover) {
      int value = carryover;
      if (l1) {
        value += l1->val;
        l1 = l1->next;
      }
      if (l2) {
        value += l2->val;
        l2 = l2->next;
      }

      carryover = value / 10;
      value %= 10;

      result_tail->next = new ListNode(value);
      result_tail = result_tail->next;
    }
    return dummy_head.next;
  }
};

```

##Step2 8/1 10:50

