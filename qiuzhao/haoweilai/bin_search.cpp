#include <iostream>
#include <assert.h>

using namespace std;

int bin_search(int array[], int len, int v){
	assert(array != NULL || len < 0);
	if (len == 1)
		return *array == v ?  -1 : 0;
	int pos = -1, ileft = 0, iright = len;
	while(ileft < iright){
		int mid = (ileft + iright) / 2;
		cout << "mid = " << mid << endl;
		if (array[mid] == v){
			int tempIndex = mid;
			while(array[--tempIndex] == v);
			return (tempIndex+1);
		}
		else{
			if ( v > array[mid])
			{
				ileft = mid + 1;
			}
			else{
				iright = mid - 1;
			}
		}
	}
	return -1;
}

int main(int argc, char const *argv[])
{
	int array[] = {1,2,3,4,4,5,5,6,6,8,9};
	cout << "sizeof(array) = " << sizeof(array) << endl;
	int v = 6;
	int ret = bin_search(array,sizeof(array)/sizeof(int),6);
	cout << ret << endl;
	return 0;
}