#!/bin/bash

# 基準となるディレクトリを固定
ROOT_DIR="$HOME/competitive"

# 1. 実行ファイル (a.out) の存在チェック
if [ ! -f "$ROOT_DIR/a.out" ]; then
    echo "エラー: 実行ファイル 'a.out' が見つかりません！"
    echo "先に bd コマンドでプログラムをコンパイルしてください。"
    exit 1
fi

# 2. in.txt の存在チェック (誤って削除してしまった場合の対策)
if [ ! -f "$ROOT_DIR/in.txt" ]; then
    echo "警告: '$ROOT_DIR/in.txt' が見つかりません。空のファイルを作成して実行します。"
    touch "$ROOT_DIR/in.txt"
fi

echo "実行開始..."

# 3. 実行と出力の分岐
if [ $# -eq 0 ]; then
    # 引数なし: out.txt に出力
    "$ROOT_DIR/a.out" < "$ROOT_DIR/in.txt" > "$ROOT_DIR/out.txt"
    EXIT_CODE=$?
    OUT_DEST="out.txt"
elif [ "$1" == "term" ]; then
    # term: ターミナルに直接出力
    "$ROOT_DIR/a.out" < "$ROOT_DIR/in.txt"
    EXIT_CODE=$?
    OUT_DEST="ターミナル"
    echo "" # 出力後の見栄えのための改行
else
    # 任意のファイル名に出力
    "$ROOT_DIR/a.out" < "$ROOT_DIR/in.txt" > "$ROOT_DIR/$1.txt"
    EXIT_CODE=$?
    OUT_DEST="$1.txt"
fi

# 4. 実行結果の判定 (RE: 実行時エラーの検知)
if [ $EXIT_CODE -eq 0 ]; then
    echo "正常終了 (出力先: $OUT_DEST)"
else
    echo "実行時エラー (RE) が発生しました！ (終了コード: $EXIT_CODE)"
    # ※エラーの詳細はターミナルに標準エラー出力として表示されます
fi