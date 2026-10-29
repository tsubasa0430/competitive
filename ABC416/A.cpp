#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int n = 1e5;
    const double pi=4*atan(1.0);
    double d=2*pi/n, ans = 0.0, y;

    for(int i = 0; i < n; i++){
        if(i == 0){
            y = 1.0; 
        }
        else{
            y = sin(d*i)/(d*i);
        }
        double Y = sin(d*(i+1))/(d*(i+1));
        ans += (y+Y)*d/2;
    }
    cout << fixed << setprecision(6);
    cout << ans << endl;
    return 0;
}
