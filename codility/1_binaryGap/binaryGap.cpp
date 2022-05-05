#include <iostream>

int solution(int N) {
    // write your code in C++14 (g++ 6.2.0)
    while (N && !(N & 1))
        N >>= 1;
    int r = 0;
    for (;;) {
        while (N & 1)
            N >>= 1;
        if (!N)
            return r;
        int m = 0;
        while (!(N & 1)) {
            ++m;
            N >>= 1;
        }
        if (r < m)
            r = m;
    }
}

int main() {
    
    return 0;
}