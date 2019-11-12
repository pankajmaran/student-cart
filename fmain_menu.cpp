int main_menu()
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
  if(res==2)
  return 0;
 printf("press 2 to sell something\n");
  changePos(45,13);
 fflush(stdin);
 printf("enter 3 to exit\n");
 changePos(45,14);
 scanf("%d",&res);
  system("CLS");
  if(res==3)
  return -1;
  else if(res==2)
  {
  	sell();
  }
  else
  purchase();
  changePos(0,0);
 }
