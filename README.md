# competitive

AtCoder などの競技プログラミングで書いた C++ の解答と、コンパイル・実行を手早く行うための自作スクリプトをまとめたリポジトリです。

## ディレクトリ構成

```
.
├── ABCxxx/          # AtCoder Beginner Contest の解答（問題ごとに A.cpp, B.cpp, ...）
├── sh/
│   ├── build.sh     # コンパイル用スクリプト
│   └── io.sh        # 実行・入出力用スクリプト
└── ac-library/      # AtCoder Library（公式配布物をそのまま同梱）
```

各ファイルはコンテスト中に書いたコードをそのまま置いています。

## 開発環境

- WSL（Ubuntu）
- g++（`-std=gnu++20 -O2 -Wall -Wextra`）
- VS Code

## 自作スクリプト

問題を解くたびに長いコンパイルコマンドを打たなくて済むように、コンパイルと実行を2つのスクリプトに分けています。
`~/.bashrc` にエイリアスを登録して使っています。

```bash
alias bd="~/competitive/sh/build.sh"
alias io="~/competitive/sh/io.sh"
```

> どちらのスクリプトも、このリポジトリが `~/competitive` に置かれている前提で動きます。

### build.sh（コンパイル）

```bash
bd ABC461 A.cpp   # ディレクトリとファイル名を分けて指定
bd ABC461/A.cpp   # パスで指定
bd                # 引数なしなら main.cpp
```

- ファイルが存在しない場合は、使い方を表示して終了します。
- ソースに `atcoder` という文字列が2回以上含まれている場合（`#include <atcoder/all>` と `using namespace atcoder;` など）は、AtCoder Library を使っているとみなして、インクルードパスを自動で追加します。
- 実行ファイルは、どのディレクトリのソースをコンパイルしても `~/competitive/a.out` に出力されます。

### io.sh（実行）

`~/competitive/in.txt` を標準入力として `a.out` を実行します。

```bash
io            # 結果を out.txt に出力
io term       # 結果をターミナルに直接出力
io result     # 結果を result.txt に出力
```

- `a.out` がない場合は、先にコンパイルするよう案内して終了します。
- `in.txt` がない場合は、空のファイルを作ってから実行します。
- 終了コードが 0 以外の場合は、実行時エラー（RE）として知らせます。

## AtCoder Library について

`ac-library/` は [AtCoder Library](https://github.com/atcoder/ac-library) の公式配布物を、手を加えずに同梱したものです（CC0 ライセンス）。
このディレクトリのコードは自作ではありません。
