#include <iostream>
using namespace std;


class Solution {
    public:
        int fibBaoli(int n);
};

int Solution::fibBaoli(int n) {
    if (n <= 1) return n;
    return fibBaoli(n - 1) + fibBaoli(n - 2);
}

int main(int argc, char const *argv[])
{
    /* code */
    int res;
    Solution sol;
    res = sol.fibBaoli(6);
    cout << "result: " << res << endl;
    return 0;
}
