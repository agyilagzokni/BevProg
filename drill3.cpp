#include "std_lib_facilities.h"

int main(){
	string first_name;
	cout << "Enter your name: \n";
	cin >> first_name;
	cout << "Hello, " << first_name << "\n";
	cout << "Enter the name of the person you want to write to: \n";
	cin >> first_name;
	cout << "Dear " << first_name << ",\nHow are you? I miss you.\n";
	cout << "Enter you friend's name: \n";
	string friend_name;
	cin >> friend_name;
	cout << "Have you seen " << friend_name << " lately?\n";
	char friend_sex = 0;
	cout << "Enter your friend's sex (m or f): \n";
	cin >> friend_sex;
	if(friend_sex == 'm'){
		cout << "If you see " << friend_name << " please ask him to call me.\n";
	}else if(friend_sex == 'f'){
		cout << "If you see " << friend_name << " please ask her to call me.\n";
	}
	int age;
	cout << "Enter your age: \n";
	cin >> age;
	if(0 <= age && age <= 110){
		cout << "I hear you just had a birthday and you are "<< age << " years old.\n";
	}else{
		simple_error("you're kidding!\n");
	}
	if (age < 12)
	{
		cout << "Next year you will be " << age + 1 << "\n";
	}else if (age == 17)
	{
		cout << "Next year you will be able to vote.\n";
	}else if (age > 70)
	{
		cout << "I hope you are enjoying retirement.\n";
	}
	cout << "Yours sincerely,\n\n\nDominik\n";
	return 0;
}
