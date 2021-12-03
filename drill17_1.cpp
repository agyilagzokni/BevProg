#include "../std_lib_facilities.h"


ostream& print_array10(ostream& os, int* a){
	for(int i = 0;i<10;++i) os << a[i] << "\n";
	return os;
}

ostream& print_array(ostream& os, int* a, int n){
	for(int i = 0;i<n;++i){
		os << a[i] << "\n";
	}
	return os;
}
ostream& print_vector(ostream& os, vector<int> a){
	for (int i = 0;i<a.size();++i){
		os << a[i] << "\n";
	}
	return os;
}

int main()
{
	//array
	int* ints = new int[10];
	for(int i = 0;i<10;++i) cout << ints[i] << "\n";
	delete[] ints;
	int* a = new int[10];
	for (int i = 0;i<10;++i){
		a[i] = 100+i;
	}
	print_array10(std::cout, a);
	int* b = new int[11];
	for (int i = 0;i<11;++i){
		b[i] = 100+i;
		cout << b[i] << "\n";
	}
	print_array(std::cout, b, 11);
	int* c = new int[20];
	for (int i = 0;i<20;++i){
		c[i] = 100+i;
		cout << c[i] << "\n";
	}
	print_array(std::cout, c, 20);
	return 0;
	//vector
	vector<int> av(10);
	for(int i = 0;i<av.size();++i){
		av[i] = 100+i
	}
	print_vector(std::cout, av);
	vector<int> bv(11);
	for(int i = 0;i<bv.size();++i){
		bv[i] = 100+i
	}
	print_vector(std::cout, bv);
	vector<int> cv(20);
	for(int i = 0;i<cv.size();++i){
		cv[i] = 100+i
	}
	print_vector(std::cout, cv);
}