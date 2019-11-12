void purchase()
 {
 	int res;
 printf("What you  want to purchase\n");
 printf("press 1 for cycle\n");
 printf("press 2 for Buckets\n");
 printf("press 3 for Matress\n");
 printf("press 4 for electronics gagets\n");
 printf("press 5 for Laptops\n");
 printf("press 6 to go main menu\n");
 printf("enter your response\n");
 scanf("%d",&res);
 switch(res)
 {
 	system("CLS");
 	changePos(0,0);
 case 1:
 showCycle();
// goto mainmenu;
 break;
 case 2:
 showBuckets();
 break;
 case 3:
 showMatress();
 break;
 case 4:
 showElectronics();
 break;
 case 5:
 showLaptops();
 break;
 case 6:
 	return ;
 //	res=main_menu();
 	if(res==-1)
 	exit(1);
 	return ;
 //goto mainmenu;
 }
 }
