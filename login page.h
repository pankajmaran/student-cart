
/*int main()
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
} */
void createAccount()
{
	char name[20],pass[20],card[12];
	float  bal;
	int flag,i;
	system("cls");
	 flag=0;
	while(1){
		flag=0;
	cout<<"enter user name:";
	cin>>name;
	char n[20],p[20];
	ifstream input("database.txt");
	while(input>>n>>p)
	{
		if(strcmp(n,name)==0)
		{
			cout<<"user name already exist\n";
			flag=1;
		}
	}
	if(flag)
	continue ;
	input.close();
	break;
}
	cout<<"\nenter password:";
	int n=0,alfa=0,sa=0,ca=0;
	while(1)
 {
 	cin>>pass;
 	n=0,alfa=0,sa=0,ca=0;
 	if(strlen(pass)>=8)
{ 
	i=0;flag=0;
	while(i<strlen(pass))
	{
		if(pass[i]>='0' && pass[i]<='9' )
		{
		//	cout<<"n";
			n++;
		}
		else if(pass[i]>='a' && pass[i]<='z' )
		{
			sa++;
		}
		else if(pass[i]>='A' && pass[i]<='Z' )
		{
			ca++;
		}
		else
		{
			alfa++;
		}
		i++;		
	}
}
else{
cout<<"enter password again\n";	
cout<<"password shoud be of 8 character\n";
cout<<"it must contain 1 upper case,1 lower case,1 numeric,1 alpha numeric \n";
}
if(alfa && sa && ca && n )
break;
if(!(alfa && sa && ca && n) && strlen(pass)>=8)
{
//	n=0;alfa=0;sa=0;ca=0;
//cout<<n<<" "<<ca<<" "<<sa<<" "<<alfa<<endl;
	cout<<"enter password again\n";	
cout<<"password shoud be of 8 character\n";
cout<<"it must contain 1 upper case,1 lower case,1 numeric,1 alpha numeric \n";
}

}
	cout<<"\nenter 10 digit card no.:";
	 while(1)
 {
 	cin>>card;
 	if(strlen(card)==10)
{ 
	i=0;flag=0;
	while(i<10)
	{
		if(card[i]<'0' || card[i]>'9' )
		{
			cout<<"enter  valid card no.\n";
		  flag=1;
			break;
		}
		i++;		
	}
		if(flag==0)
		break;	
}
else
cout<<"enter valid card no.:";
} 
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
	string pass,fu,fp,fc;
	char name[20];
	float fbal;
	cout<<"enter user name:";
	cin>>name;
	cout<<"\nenter password:";
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
	//	cout<<"welocme to cart\n";
		cin.get();
		main_menu(name);
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
