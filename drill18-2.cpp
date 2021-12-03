//vector
#include "../std_lib_facilities.h"

vector<int> gv = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};

void f(vector<int> v){
	vector<int> lv(v.size());
	for(int i = 0;i<v.size();++i){
		lv[i] = v[i];
		cout << lv[i] << " ";
	}
	cout << "\n";
	vector<int> lv2 = v;
	for(int i : v) cout << i << " ";
	cout << "\n";
}

int main()
{
	f(gv);
	vector<int> vv(10);
	vv[0] = 1;
	for(int i = 1;i<10;++i){
		vv[i] = (i+1)*vv[i-1];
	}
	f(vv);
	return 0;
}