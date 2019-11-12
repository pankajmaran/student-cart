void main_menu(char user[])
{
 	changePos(0,0);
 	int res=0;
 	 system("CLS");
  changePos(45,9);
 printf("What You Want To\n");
 changePos(45,10);
 printf("press 1 to enter in cart\n");
 changePos(45,11);
 cout<<"press 2 to exit\n";
  changePos(45,12);
  cin>>res;
  system("cls");
  if(res==2)
  exit(1);
  
else
 printf("press 1 to sell something\n");
 cout<<"press 2 to purchase\n";
//changePos(45,13);
 fflush(stdin);
 printf("enter 3 to exit\n");
 changePos(45,14);
 scanf("%d",&res);
  system("CLS");
  if(res==3)
  exit(1);
  else if(res==1)
  {
  	sell(user);
  	main_menu(user);
  }
  else 
  purchase(user);
  main_menu(user);
  changePos(0,0);
 }
