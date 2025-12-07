```cpp

#include <iostream>
using namespace std;

int main(){
    cout << "Hello, SWE!" << endl;
    //std::cout << "Hello, SWE!" << std::endl;


    float f = 1.0f / 3.0f;
    double d = 1.0 / 3.0;

    cout << "float: " << f << endl;
    cout << fixed << setprecision(10);
    cout << "double: " << d << endl;

    char newline = '\n';
    char tab = '\t';
    char backspace = '\b';
    char backslash = '\\';
    char nullChar = '\0';

    cout << "Newline character: " << newline << "ending" << endl;
    cout << "Tab character: " << tab << "ending" << endl;
    cout << "Backspace character: " << backspace << "ending" << endl;
    cout << "Backslash character: " << backslash << "ending" << endl;
    cout << "Null character: " << nullChar << "ending" << endl;

    return 0;
}

```

感想・些細なこと
・特に何も意識せず書いた。namespaceを使った書き方しかしてこなかったので、他の書き方も調べてみる。
・この時点で調べたいと思ったこと
  - namespace
  - std:: この書き方とどちらが実際の仕事ではよく使うのか
  - main() なぜ()内は空白？コードを読んでvoidが入っているケース時は何なのか？
・公式ドキュメントを読んでみる: [C++ へようこそ - Modern C++](https://learn.microsoft.com/ja-jp/cpp/cpp/welcome-back-to-cpp-modern-cpp?view=msvc-170)
 (構文規則)
・気になったこと
  - > 低レベルのハードウェア機能にアクセスして、速度を最大化し、メモリ要件を最小限に抑えることができます。
  - 他言語との比較と、具体的にどういう理由で？

おさらい/学んだこと
  - MSVC : Microsooft Visual C++
  - 識別子(identifier) : 変数名、関数名、クラス名
  - 予約名(reserved words/keywrds) 一覧の確認とそれぞれの機能を実装(次回)：https://learn.microsoft.com/ja-jp/cpp/cpp/keywords-cpp?view=msvc-170
  - coutのデフォルト表示精度は、6桁(setprecision(10)などを使用)
  - 1.0f float型として認識/1.0L long double型
  - namespace 小規模な学習用コードでは可、実務では避ける（名前の衝突、予測不能なバグ、ヘッダーファイルでは特にNG）
  - int main() 戻り値(0, 1)で終了。
  - main(): command line arguments

```cpp
/*

#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int main() {
    int result = add(3, 4);
    cout << "Sum is: " << result << endl;
    return 0;
}

*/
```

