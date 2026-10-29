SOURCE_FILE="${1:-main.cpp}" # 引数がない場合はmain.cppを使用

mkdir -p "$SOURCE_FILE" # ディレクトリが存在しない場合は作成、存在する場合は何もしない

for FILE_LETTER in A B C D E F G; do
    FILE_PATH="$SOURCE_FILE/$FILE_LETTER.cpp"
    # ファイルに書き込む内容をヒアドキュメントで記述
    cat << EOF > "$FILE_PATH"
#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < b; i++)
typedef long long ll;

int main() {

}
EOF
done