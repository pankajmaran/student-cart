#include<conio.h>
#include<iostream>
#include<istream>
#include<fstream>
#include<string.h>
#include<windows.h>
using namespace std;
#include "declaration.h"
void Del();
int main()
{ int i,j,k,res=0;
textSize(15,20);
system("color 80");
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
textSize(10,30);
 return 0;
 }
#include "text_changepos.h"
#include "login page.h"
#include "fmain_menu.h"
#include "fbuckets.h"
#include "fcycle.h"
#include "flaptops.h"
#include "felectronics.h"
#include "fmatress.h"
#include "fpurchase.h"
#include "fsell.h"
#include"fdel.h"
