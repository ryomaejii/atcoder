# AtCoder 用リポジトリ

## 始め方

1. やりたい問題を見つけ、ルートディレクトリにて新しいコンテストディレクトリを作成する

```
acc new <contest-id>
```

2. 各ディレクトリにて作業を行う
3. ローカルでテストを行う（ctrl + e）
4. テストが通れば、コードを提出する（ctrl + s）

## オンボーディング

環境構築が終わったら、以下の URL のおすすめ問題を 1 日 1 つずつ解き始める。
https://qiita.com/drken/items/fd4e5e3630d0f5859067#%E7%AC%AC-1-%E5%95%8F--abc-086-a---product-100-%E7%82%B9

## 参考

- c++の基本的な型や関数: https://somachob.com/basic-cpp/

## 登場単語

### 全探索

その名の通り、for 文などで全て探索すること。

### バケット法

B 問題ではバケット法といって、配列 num を用意しておいて、
num[i] := 値 i が何個あるかを判定する方法。
一度 0 埋めした配列を用意し、そこに出現回数を入れていく方法。

### Greedy 法 = 貪欲法

貪欲法は局所探索法と並んで近似アルゴリズムの最も基本的な考え方の一つである。

このアルゴリズムは問題の要素を複数の部分問題に分割し、それぞれを独立に評価を行い、評価値の高い順に取り込んでいくことで解を得るという方法である。動的計画法と異なり保持する状態は常に一つであり、一度選択した要素を再考する事は無い。このため得られる解は最適解であるという保証は無いが部分問題の解法と単純なソートのみでプログラムを実装することが可能であり、多くの問題に対して多項式時間での近似アルゴリズムとなる。

問題を複数に分割する方法は特に組合せ最適化問題と相性が良い。問題によっては厳密解（最適解）を得られたりするものや最低限の精度保証（近似度）が算出可能なものもある。このため、現在でもしばしば同問題の研究に用いられている。

### 動的計画法
