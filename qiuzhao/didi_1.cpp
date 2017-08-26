#include <iostream>
#include <vector>
#include <cstdlib>
#include <climits>

using namespace std;
int main() {
    vector<int> in;
    int buf;
    // 以任意字母结束
    while(cin >> buf)//注意while处理多个case
    {
        in.push_back(buf);
    }
    int res = INT_MIN;
    int mid_res = 0;
    for (int i = 0; i < in.size(); ++i)
    {
    	mid_res = max(mid_res+in[i], in[i]);
    	res = max(res, mid_res);
    }
    cout << res << endl;
    return 0;
}