void purchase(char user[])
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
 showCycle(user);
 main_menu(user);
// goto mainmenu;
 break;
 case 2:
 showBuckets();
 main_menu(user);
 break;
 case 3:
 showMatress();
 main_menu(user);
 break;
 case 4:
 showElectronics();main_menu(user);
 break;
 case 5:
 showLaptops();
 main_menu(user);
 break;
 case 6:
    main_menu(user);
 //goto mainmenu;
 }
 }
