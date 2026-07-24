#!/bin/bash

# 基準となるルートディレクトリを固定
ROOT_DIR="$HOME/competitive"
cd "$ROOT_DIR" || exit 1

# 引数からコンパイル対象のファイルを決定する
if [ "$#" -eq 2 ]; then
    # パターン1: `bd ABC453 A.cpp` (ディレクトリとファイルを分けて指定)
    SOURCE_FILE="$1/$2"
elif [ "$#" -eq 1 ]; then
    # パターン2: `bd ABC453/A.cpp` (相対パスで指定)
    SOURCE_FILE="$1"
else
    # 引数なし: デフォルト
    SOURCE_FILE="main.cpp"
fi

# 【重要】ファイルの存在チェック
# ファイルが存在しない場合はエラーを出して即座に終了する
if [ ! -f "$SOURCE_FILE" ]; then
    echo "エラー: '$SOURCE_FILE' が見つかりません！"
    echo "使い方: bd [ディレクトリ] [ファイル] (例: bd ABC453 A.cpp)"
    exit 1
fi

echo "コンパイル中: $SOURCE_FILE"

# "atcoder"の出現回数をカウント
ATCODER_COUNT=$(grep -o "atcoder" "$SOURCE_FILE" | wc -l)

# コンパイルオプションの決定
CXX_FLAGS="-std=gnu++20 -O2 -Wall -Wextra"
if [ "$ATCODER_COUNT" -ge 2 ]; then
    # どこからコンパイルしても読み込めるように、ac-libraryのパスを絶対パス化
    CXX_FLAGS+=" -I$ROOT_DIR/ac-library"
fi

# コンパイル実行 (出力先は常に ~/competitive/a.out)
g++ $CXX_FLAGS "$SOURCE_FILE" -o "$ROOT_DIR/a.out"

# コンパイルの成否を判定してメッセージを表示
if [ $? -eq 0 ]; then
    echo "コンパイル成功！ (実行可能です)"
else
    echo "コンパイル失敗..."
    exit 1
fi