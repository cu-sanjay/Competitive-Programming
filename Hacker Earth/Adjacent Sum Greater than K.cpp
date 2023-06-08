#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;

	while(t--){
		int n, k;
		cin>>n>>k;
		set<int> st;
		for(int i=2; i<=n; ++i) st.insert(i);

		vector<int> res = {1};
		int idx = 0;

		bool valid = true;
		while(!st.empty()){
			int x = res[idx];
			auto lb = st.lower_bound(k-x);
			if(lb==st.end()){
				valid = false;
				break;
			}
			res.push_back(*lb);
			st.erase(lb);
			++idx;
		}

		if(!valid) cout<<-1<<endl;
		else{
			for(auto &e : res) cout<<e<<" ";
			cout<<endl;
		}
	}

	return 0;
}