#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	vector<int> vec = {1,2,2,3,3,3,4,4,4,4};
	auto res = find(vec.begin(),vec.end(),3);
	cout << (res != vec.end() ? "present" : "not present") << endl;
	return 0;
}
