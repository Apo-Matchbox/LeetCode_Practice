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
public:
  ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode dummy_head = ListNode();
    ListNode* result_tail = &dummy_head;
    int carryover = 0;
    while (l1 || l2 || carryover) {
      int digitSum = carryover;
      if (l1) {
        digitSum += l1->val;
        l1 = l1->next;
      }
      if (l2) {
        digitSum += l2->val;
        l2 = l2->next;
      }

      carryover = digitSum / 10;
      digitSum %= 10;

      result_tail->next = new ListNode(digitSum);
      result_tail = result_tail->next;
    }
    return dummy_head.next;
  }
};

```

##Step2

 * Jikuharaさん https://github.com/Jikuhara/LeetCode/pull/11/commits/846d5c426f15565ccb1106430681b1f388b24538
 -> skypenguins on Jun 14 さんのコメント 処理の始めから value に次々に l1 , l2 の値を足していく処理のようですが、変数の生存期間が長くてなんとなく頭の一時記憶を占める感覚があります。　

 * new で確保したメモリは、LeetCodeでは解放の必要はないが、実務ではNG.
   LeetCode テスト環境では、実行終了後プロセスごと破棄。OSが確保していたヒープを一括で回収する仕様になっている。
   https://google.github.io/styleguide/cppguide.html#Ownership_and_Smart_Pointers

 * コード領域、データ領域、スタック領域、ヒープ領域に関して
  https://discord.com/channels/1084280443945353267/1237649827240742942/1251960606077091981

##Step3

step3は、それほど時間は掛からなかった。
丁度LeetCodeを初めて1週間ほど。やはり基礎的な知識が欠落してるので、理解に時間がかかりすぎている。
あと8-9カテゴリで https://www.learn-cpp.org/en/Welcome を一通り終える。
LeetCodeの一歩手前みたいな、書く練習と読む練習ができるものを探すか、このままLeetCodeを続けるか考えたい。



