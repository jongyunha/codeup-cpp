#include<stdio.h>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    vector<int> a = {1, 2, 3, 4};
    for (const auto ele: a) {
        printf("%d", ele);
    }
}
