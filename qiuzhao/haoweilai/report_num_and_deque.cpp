struct Node_t{
	int Id;
	int ReportNum;
}
vector<int> report_num_and_deque(int n){
	assert(n > 0);
	clist<Node_t> group;
	for (int i = 0; i < n; ++i)
	{
		Node_t node = {i, i};
		group.push(node);
	}
	while(group.size() != 0){
		int size = group.size();
		
	}
}