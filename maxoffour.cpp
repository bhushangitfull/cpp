
#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;


int max_of_four(int a, int b, int c, int d){
    
    int max_value = std::max({a, b, c, d});
    
    return max_value;
    
}


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
