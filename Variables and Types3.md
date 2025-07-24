```cpp
#include <iostream>
using namespace std;

int main() {
    int dollars, cents;

    cout << "Please enter your amount in the format of dollars and cents separated by a space:" << endl;
    cin >> dollars >> cents;

    int totalCents = dollars * 100 + cents;

    int quarters = totalCents / 25;
    totalCents %= 25;

    int dimes = totalCents / 10;
    totalCents %= 10;

    int nickels = totalCents / 5;
    totalCents %= 5;

    int pennies = totalCents;

    cout << dollars << " dollars and " << cents << " cents are:" << endl;
    cout << quarters << " quarters, " << dimes << " dimes, " << nickels << " nickels and " << pennies << " pennies" << endl;

    return 0;
}
```
【感想】
折角、別解などを調べて色んな角度などから、コードを書く練習をしているので、
明日は、拡張性/保守性/国際対応・再利用などの角度から書いてみる。

step1:(4min) 米通貨の単位も把握していたので、すぐに計算方法を思いついた。定数時間・変数の固定
step2:(min) いくつか他の人のコードも確認
step3:(16min) 3回

Time Complexity: 0(1)
pace Complexity: 0(1)
