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
	int a = 7;
	int* p1 = &a;
	cout << p1 << "\n" << *p1 << "\n";
	int* b = new int(7);
	for (int i = 0;i<7;++i){
		b[i] = pow(2, i);
	}
	int** p2 = &b;
	cout << p2 << "\n";
	print_array(std::cout, b, 7);

	int* p3(*p2);
	p1 = *p2;
	p3 = *p2;
	cout << p1 << " " << *p1 << "\n";
	cout << p2 << " " << *p2 << "\n"; 
	delete[] p1;
	delete[] b;
	delete[] p2;
	delete[] p3;
	return 0;
}