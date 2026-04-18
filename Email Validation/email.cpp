#include<iostream>
#include<string>
#include<regex>

using namespace std;

//----Creating function for checking email is valid or not ....

bool isValidEmail(const string& email)
{
	const regex valid(R"(^[a-zA-Z0-9_.+-]+@[a-zA-Z0-9-]+\.[a-zA-Z0-9-.]+$)");
	return regex_match(email, valid);
}

int main()
{
	string email;
	cout<<" Enter email ID : ";
	getline(cin,email);
	
	if(isValidEmail(email))
	{
		cout<<"Email is valid : "<<email<<endl;
	}
	else
	{
		cout<<"Email is invalid : "<<email<<endl;
	}
	
	return 0;
}
