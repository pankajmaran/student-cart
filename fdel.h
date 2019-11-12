void del(char user[])         //Delete Staff Profile
{                   
    ifstream input("Cycles.txt");
    char u[20],name[20],pry[20],phn[12],ch='\0',cat[20],n[20],d[20];
    char pamt[5],samt[5],a[5],i,flag;
    char c;
    printf("\nenter Cycle name: ");
    cin>>n;
    cout<<"enter offerd price\n";
    cin>>a;
    cout<<"enter purchase date \n";
    cin>>d;
 //FILE *fp // fopen("copy.txt", "w");
 	ofstream w("copy.txt",ios::app);
  while(input>>u>>name>>pry>>pamt>>samt>>phn)
{
 if(!strcmp(n,name) && !strcmp(a,samt) && !strcmp(d,pry) && strcmp(u,user)!=0)
 {
 	cout<<"you are not allowed to delete\n";
 }
	if(strcmp(n,name) && !strcmp(a,samt) && strcmp(d,pry))
	{
//	 fprintf(fp,"%-15s %-15s %-15s %-15d %-15d %-15s    %c",u,name,pry,pamt,samt,phn,ch);
//fputs("\n",fp);
w<<u<<" "<<n<<" "<<pry<<" "<<pamt<<" "<<samt<<" "<<phn<<" ";	
	}
    }
    input.close();
    remove("Cycles.txt");
    rename("copy.txt", "Cycles.txt");
    //fclose(input);
    //input.close();
    return ;
}
