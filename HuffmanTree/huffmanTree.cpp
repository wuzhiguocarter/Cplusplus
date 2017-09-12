#include <cstdlib>
#include <map>
#include <assert.h>

using namespace std;

struct TNode{
	int weight;
	TNode *left;
	TNode *right;
};

map<int, int> index2weight;
map<int,char> word2weight;

TNode* buildHuffmanTree(int sorted_weights[], int len){
	assert(weights != NULL && len > 0);
	TNode *F = (TNode *)malloc(sizeof(TNode)*len);
	
	for (int i = 0; i < len; ++i)
	{
		F[i].weight = sorted_weights[i];
		F[i].left = F[i].right = NULL;
	}
	// while(len > 1){



	// }




	return F;
}