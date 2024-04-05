#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d) {
    
    // first method
    /*i
    f(a>b && a>c && a>d) {
        return a;
    }else if(b>a && b>c && b>d) {
        return b;
    }else if(c>a && c>b && c>d) {
        return c;
    }else {
        return d;
    }*/
    // simplier method and optimized
    return max(max(a, b), max(c,d));
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}