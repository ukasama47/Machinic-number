# 小町数の探索プログラム

## 概要
- 小町数は1から9までの自然数を1回ずつ使った9桁の数字であり、その自乗が小町数となるような自然数を求めます。
- 仮引数として与えられた自然数が小町数か判定する関数 `komachi` が実装されています。

## 仕様
1. 関数 `komachi` は9桁の自然数を受け取り、その数が小町数であれば true を、小町数でなければ false を返します。
2. main関数では、関数 `komachi` を使用して結果を出力します。

## 処理の流れ
1. 小町数を求めるための数値を1から999999999まで順番に試します。
2. 各数値について、自乗した結果が小町数であるかを関数 `komachi` を使って判定します。
3. 小町数である場合は、その数とその自乗を出力します。

