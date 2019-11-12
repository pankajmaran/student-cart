#include<iostream>
#include<istream>
#include<fstream>
#include<string.h>
#include<windows.h>
using namespace std;
void login();
void createAccount();
void forgot();
int main()
{
	int ch;
	cout<<"**************************login*****************************************\n";
	cout<<"1.login\n";
	cout<<"2.Create Account \n";
	cout<<"3.forgot password\n";
	cout<<"4.exit\n";
	cout<<"enter your choice\n";
	cin>>ch;
	switch(ch)
	{
		case 1:
			login();
			break;
		case 2:
			createAccount();
			break;	
		case 3:
			forgot();
			break;
		case 4:
			exit(1);
			break;
			default:
				cout<<"enter valid choice\n";
				main();
				break;
	}
}
void createAccount()
{
	string name,pass,card;
	float  bal;
	system("cls");
	cout<<"enter user name:";
	cin>>name;
	cout<<"\nenter password:";
	cin>>pass;
	cout<<"\nenter 10 digit card no.:";
	cin>>card;
	cout<<"\nenter card balance:";
	cin>>bal;
	ofstream reg("database.txt",ios::app);
	reg<<name<<' '<<pass<<' '<<card<<' '<<bal<<endl;
	system("cls");
	cout<<"registration is complete";
	main();
}
void login()
{
	int exist=0;
	string name,pass,fu,fp,fc;
	float fbal;
	cout<<"enter user name:";
	cin>>name;
	cout<<"\nenter password";
	cin>>pass;
	ifstream input("database.txt");
	while(input>>fu>>fp>>fc>>fbal)
	{
		if(fu==name && fp==pass)
		{
			exist=1;
			break;
		}
	}
	input.close();
	system("cls");
	if(exist==1)
	{
		cout<<"welocme to cart\n";
		cin.get();
		main();
	}
	else
	{
		cout<<"user name or password is incorrect\n";
		cin.get();
		main();
	}
}
void forgot()
{
	float fb;
	system("cls");
	int ch;
	cout<<"1.enter user name\n";
	cout<<"2.back to main menu\n";
	cout<<"enter your choice\n";
	cin>>ch;
	int exist=0;
	switch(ch)
	{
		case 1:
			{
			
				string un,p,card,username;
				cout<<"enter user name\n";
				cin>>username;
				ifstream user("database.txt");
				while(user>>un>>p>>card>>fb)
			{
				if(un==username)
				{
					cout<<"your password is :"<<p<<endl;
					cin.get();
					exist=1;
					main();
					break;
				}
			}
			user.close();
			if(exist!=1)
			{
				cout<<"your account does not found\n";
				cin.get();
				main();	
			}
			break;
		}
			case 2:
			{
				main();
				break;
			}
				 default:
				 	cout<<"enter valid input\n";
				 	forgot();
	}
}
