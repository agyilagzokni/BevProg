#include "std_lib_facilities.h"

int main()
{
	constexpr double mtocm = 0.01;
	constexpr double intocm = 2.54;
	constexpr double fttoin = 12;
	double min = 0, max = 0;
	double a;
	vector<double> szamok;
	double sum = 0;
	string unit;
	int i = 0;
	while(cin >> a >> unit){
		if (i == 0){
			min = a;
			max = a;
			i = 1;
			sum += a;
			if(a < min){
				min = a;
				cout << "smallest number so far: " << min << "\n";
			}else if(a > max){
				max = a;
				cout << "largest number so far: " << max << "\n";
			}
			if (unit == "m"){
				szamok.push_back(a);
				sum += a;
				cout << a << " m = " << a * 1/mtocm << " cm\n";
			}else if (unit == "in"){
				szamok.push_back(a * intocm * mtocm);
				sum += a * intocm * mtocm;
				cout << a << " in = " << a * intocm << " cm\n";
			}else if (unit == "ft"){
				szamok.push_back(a * fttoin * intocm * mtocm);
				sum += a * fttoin * intocm * mtocm;
				cout << a << " ft = " << a * fttoin << " in\n";
			}else if (unit == "cm"){
				szamok.push_back(a * mtocm);
				sum += a * mtocm;
				cout << a << " cm = " << a * mtocm << " m\n";
			}else{
				cout << "nem jo\n";
			}
		}else{
			
			if(a < min){
				min = a;
				cout << "smallest number so far: " << min << "\n";
			}else if(a > max){
				max = a;
				cout << "largest number so far: " << max << "\n";
			}
			if (unit == "m"){
				szamok.push_back(a);
				sum += a;
				cout << a << " m = " << a * 1/mtocm << " cm\n";
			}else if (unit == "in"){
				szamok.push_back(a * intocm * mtocm);
				sum += a * intocm * mtocm;
				cout << a << " in = " << a * intocm << " cm\n";
			}else if (unit == "ft"){
				szamok.push_back(a * fttoin * intocm * mtocm);
				sum += a * fttoin * intocm * mtocm;
				cout << a << " ft = " << a * fttoin << " in\n";
			}else if (unit == "cm"){
				szamok.push_back(a * mtocm);
				sum += a * mtocm;
				cout << a << " cm = " << a * mtocm << " m\n";
			}else{
				cout << "nem jo\n";
			}
			
		}
	}
	cout << "leg kiseb: " << min << " leg nagyob: " << max << " enyi szam volt be irva: " << szamok.size() << " öszeguk: " << sum << "\n";
	sort(szamok);
	for (double x : szamok) cout << x << "\n";
	return 0;
}