void sell()
{ int  ch;
cout<<"what you want to sell\n";
 printf("S No. ITEMS CATEGORY\n");
 printf(" 1    Cycles\n");
 printf(" 2    Buckets\n");
 printf(" 3    Matress\n");
 printf(" 4    Electronics Gagets\n");
 printf(" 5    Laptops\n");
 printf(" 6    to go main menu\n");
 printf("Enter Your Choice\n");
 scanf("%d",&ch);
 switch(ch)
 {
 	system("CLS");
 	changePos(0,0);
   case 1:
   Cycle();
   break;
   case 2:
   Buckets();
   break;
   case 3:
   	
   Matress();
   break;
   case 4:
   Electronics();
   break;
   case 5:
   Laptops();
   break;
   case 6:
   //	res=main_menu();
   return ;
  // 	if(res==-1)
  // 	exit(1);
   //	mmemu();
   break;
 // goto mainmenu;
 }
}
