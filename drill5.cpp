#include "std_lib_facilities.h"

int main()
{
	try{
		cout << "Success!\n";//1
		cout << "Success!\n";//2
		cout << "Success" << "!\n";//3
		cout << "success" << "\n";//4
		int res = 7; vector<int> v(10); v[5] = res;cout << "Success!\n";//5
		vector<int> v(10); v[5] = 7;if(v[5] == 7) cout << "Success!\n";//6
		if(true) cout << "Success!\n"; else cout << "Fail!\n";//7
		bool c = true;if(c) cout << "Success!\n";else cout << "Fail!\n";//8
		string s = "ape";string c = "fool";if(true) cout << "Success!\n";//9
		string s = "fool";if(s == "fool") cout << "Success!\n";//10
		string s = "fool";if(s == "fool") cout << "Success!\n";//11
		string s = "fool";if(s == "fool") cout << "Success!\n";//12
		vector<char> v(5);for(int i = 0; 0 < v.size();++i)cout << "Success!\n";//13
		vector<char> v(5);for(int i = 0; i <= v.size();++i)cout << "Success!\n";//14
		string s = "Success!\n";for(int i=0; i<6; ++i) cout << s;//15
		if(true) cout << "Sucess!\n"; else cout << "Fail!\n";//16
		int x = 2000; char c = x;if(x==2000)cout << "Success!\n";//17
		string s = "Success!\n";for (int i=0; i<10; ++i) cout << s[i];//18
		vector<int> v(5);for (int i=0; i<v.size(); ++i) ; cout << "Success!\n";//19
		int i=0;int j = 9; while (i<10) ++i;if (j<i) cout << "Success!\n";//20
		int x = 3; double d = 5/(x-2); if (d==5) cout << "Success!\n";//21
		string s = "Success!\n";for (int i=0; i<=10;i++) cout << s[i];//22
		int j=0, i=0; while (i<10) ++i;if (j<i) cout << "Success!\n";//23
		int x = 4;double d = 5/(x-2);if (d=2*x+0.5) cout << "Success!\n";//24
		cout << "Success!\n"; //25
		keep_window_open();
		return 0;
	}catch(exception& e){
		cerr << "error: " << e.what() << "\n";
		keep_window_open();
		return 1;
	}catch(...){
		cerr << "Oops: unknown exception!\n";
		keep_window_open();
		return 2;
	}
	return 0;
}