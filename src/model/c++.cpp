// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>
// #include <time.h>
// #include <algorithm>
// #include <iostream>
// #include <queue>
// #include <stack>
// #include <vector>
// #include <string>
#include <bits/stdc++.h>
using namespace std;

template <class T>
inline bool scan_d(T  &ret){
    char c;
    int sgn;
    if(c = getchar,c == EOF) return 0; // EOF

    while(c != '-' && (c < '0' || c > '9')) c = getchar;
    sgn = (c == '-') ? -1 : 1;
    ret = (c == '-') ? 0 : ( c - '0');
    while(c = getchar,c >= '0' && c <= '9') ret = ret * 10 + ( c - '0');
    ret *= sgn;
    return 1;
}

inline void out(int x){
    if(x > 9) out(x / 10);
    putchar(x % 10 + '0');
}
typedef long long ll;
 int main() {
     int n;
     ll sum = 0;
     scan_d(n);
     for(int i = 1;i <= n;i++){
         sum += i;
     }
     out(sum);
     return 0;
 }