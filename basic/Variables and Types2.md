```cpp

/*
Question1
Write a program that asks the user to enter a number of quarters, dimes, nickels, and pennies and then outputs the monetary value of the coins in the format of dollars and remaining cents.

Your programs should interact with the user exactly as it shows in the following example:
Please enter the number of coins:
# of quarters: 13
# of dimes: 4
# of nickels: 11
# of pennies: 17
The total is 4 dollars and 37 cents
*/

#include <iostream>
using namespace std;

int main() {
    int quarters, dimes, nickels, pennies;
    cout << "Please enter the number of each coins:" << endl;
    cout << "# of quarters: ";
    cin >> quarters;
    cout << "# of dimes: ";
    cin >> dimes;
    cout << "# of nickels: ";
    cin >> nickels;
    cout << "# of pennies: ";
    cin >> pennies;

    int totalCents = quarters * 25 + dimes * 10 + nickels * 5 + pennies;
    int dollars = totalCents / 100;
    int cents = totalCents % 100;

    cout << "The total is " << dollars << "dollars and " << cents << "cents" << endl;

    return 0;
}

```

感想
・慣れたらコードコメント統一性など考えてルールなど決めてみる。処理の概要、計算量、解くのにかかった時間あたり
・解くのにかかった時間を記録する習慣をつける（spreadsheet?）
・計算量の出し方を調べる
