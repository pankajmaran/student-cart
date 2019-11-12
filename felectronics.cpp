void Electronics()
{
	FILE *fp;
    char name[20],pry[20],ch='\0',phn[12],cat[20];
    int pamt,samt;

cout<<"enter category like mobile,headphons,kettle etc:\n";
cin>>cat;
 printf("enter company  name:");
cin>>name;
//fgets(name, 20, stdin);
// gets(name);
 printf("\npurchase date in dd/mm/yy:");
 fflush(stdin);
 scanf("%s",pry);
 printf("\nPrice when you purchase \n");
 scanf("%d",&pamt);
 printf("enter price at which you want to sell\n");
 scanf("%d",&samt);
 cout<<"enter mobile no.\n";
 cin>>phn;
 fp=fopen("Electronics.txt","a");
 if(fp==NULL)
 {
  printf("something went wrong\n");
  return ;
 }
 fprintf(fp,"%-15s %-15s %-15s %-15d %-15d %-15s    %c",cat,name,pry,pamt,samt,phn,ch);
 fputs("\n",fp);
 fclose(fp);
 return ;
}
