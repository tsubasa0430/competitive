#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < b; i++)

const int MOD = 998244353;
const int MAX = 3000005;

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    int sz = A + B + C;
    //要素がBの時は、次にの文字が3通りあるが、AとCの時は、次の文字がB以外の2通り
    //文字を使い切った時も考えなきゃいけない
    //Aの次にAいける
    //おそらくDP
    //4次元配列になってしまいおそらくMLE
    //順列の考え方
    //最初にBを並べておいて、AとCを並べるといけるのかも
    //BとBの間にA,Cを入れるとき、どちらも入れることはできない
    //Bを仕切りとして考える
    //ならA,Cを並べておいて後で必要なところでBを挿入して組み合わせの計算を行うほうがいい
    //ACの並び順は、(A+C)!/A!/C!で求められる

    vector<long long> fact(MAX), inv_fact(MAX), inv(MAX);
    fact[0] = fact[1] = 1;
    inv[1]= 1;
    inv_fact[0] = inv_fact[1] = 1;

    for(int i = 2;i < MAX; i++){
        fact[i] = fact[i-1] * i % MOD;
        inv[i] = MOD - inv[MOD % i] * (MOD / i) % MOD;
        inv_fact[i] = inv_fact[i-1] * inv[i] % MOD;
    }

    auto nCr = [&](int n, int r) -> long long{
        if(n < 0 || r < 0 || r > n) return 0;
        return fact[n] * inv_fact[r] % MOD * inv_fact[n-r] % MOD;
    };

    long long ans = 0;
    for(int i = 1;i < A + C; i++){
        if(B < i)continue;
        long long cnt = 0;
        if(i % 2 == 1){
            int a = (i + 1) / 2;
            long long tmp = nCr(A - 1, a - 1) * nCr(C - 1, a - 1) % MOD;
            cnt = tmp * 2 % MOD;
        }
        else{
            int a = i / 2;
            long long tmp1= nCr(A - 1, a) * nCr(C - 1, a - 1) % MOD;
            long long tmp2 = nCr(A - 1, a - 1) * nCr(C - 1, a) % MOD;
            cnt = (tmp1 + tmp2) % MOD;
        }
        long long amari = nCr(A+B+C-i, A+C);
        ans = (ans + cnt * amari % MOD) % MOD;
    }
    cout << ans << endl;


}
