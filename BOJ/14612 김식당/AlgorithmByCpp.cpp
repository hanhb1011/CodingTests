#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
int n, m, i,idx,t;
vector<pair<int, int> > vec;
string cmd;

bool cmp(pair<int,int> &a, pair<int,int> &b) {
	
	return true;
}

int main()
{
	cin >> n >> m;

	while (n-- > 0) {
		cin >> cmd;
		if (cmd[0] == 'o') {
			cin >> i >> t;
			vec.push_back(make_pair(t, i));
		}
		else if (cmd[0] == 'c') {
			cin >> idx;
			for (i = 0; i < vec.size(); i++) {
				if (vec[i].second == idx) {
					vec.erase(vec.begin()+i);
					break;
				}
			}
		}
		else {
			sort(vec.begin(), vec.end());
		}

		for (i = 0; i < vec.size(); i++)
			cout << vec[i].second << ((i < vec.size()-1) ? " " : "");
		if (vec.size() == 0)
			cout << "sleep";
		cout << endl;
	}

	
}
