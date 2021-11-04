#include<iostream>
#include<ctime>
#include<fstream>
using namespace std;
int main()
{
	// date and time
	   // current date/time based on current system
   time_t now = time(0);
   
   // convert now to string form
   char* dt = ctime(&now);
   	
	//All variables
	fstream BillData , BillData2 , BillData3;
	int Quantity, IGST , CGST;
	char CategoryType , AftBill;
	int A=0;
	float Totalbill,Retailprice , TotalCost;
	// A simple Database application for Storing Sales Tax Data based on Indian Economy 2021
	while(A!=1)
    {
	cout<<"Enter the category of Goods - Food(F) , Electronics (E) or Raw Materials (R) , Type these and Enter: "<<std::endl;
    cin>>CategoryType;
    cout<< "The local date and time is:"<< dt << std::endl;
   if(CategoryType=='F') //Simple Calculation of the Bill  Food
   {
   	/* Phase 1 Calc */
   	IGST=CGST=2.5;
   	cout<<"Enter the quantity"<<std::endl;
   	cin>>Quantity;
   	cout<<"Enter Retail Price"<<std::endl;
   	cin>>Retailprice;
   	TotalCost=Quantity*Retailprice;
   	Totalbill=TotalCost*IGST/100+TotalCost*CGST/100+TotalCost;
   	cout<<TotalCost*IGST/100<<" -IGST"<<std::endl;
   	cout<<TotalCost*CGST/100<<" -CGST"<<std::endl;
   	cout<<Totalbill<<" "<<"Totalbill inclusive of all the costs"<<std::endl;
   	cout<<"store the bill in the computer by typing y for yes otherwise n for no"<<std::endl;
   	cin>>AftBill;
   	if(AftBill=='y' or AftBill=='Y') //  Method to print the bill on a file and stores it in the computer.
   	{
   		/* Phase 2 File Sys */
   	BillData.open("BillData.txt", ios::out);//Creating a file named BillData to Store bills.	
   	if(!BillData)
   	{
   	cout<<"File not Created"<<std::endl;	
	   }
	   else
	   {
	   BillData<<TotalCost*IGST/100<<",IGST"<<std::endl;
   	       BillData<<TotalCost*CGST/100<<",CGST"<<std::endl;
	   		BillData<<Totalbill<<","<<"Totalbill inclusive of all the costs"<<std::endl;
	   		cout<<""<<std::endl;
	  BillData.close();
	}
}
}
	else if(CategoryType=='E') //Simple Calculation of the Bill 
   {
   	/* Phase 1 Calc*/
   	IGST=CGST=9;
   	cout<<"Enter the quantity"<<endl;
   	cin>>Quantity;
   	cout<<"Enter Retail Price"<<endl;
   	cin>>Retailprice;
   	TotalCost=Quantity*Retailprice;
   	Totalbill=TotalCost*IGST/100+TotalCost*CGST/100+TotalCost;
   	cout<<TotalCost*IGST/100<<" -IGST"<<endl;
   	cout<<TotalCost*CGST/100<<" -CGST"<<endl;
   	cout<<Totalbill<<" "<<"Totalbill inclusive of all the costs"<<endl;
   	cout<<"store the bill in the computer by typing y for yes otherwise n for no"<<endl;
   	cin>>AftBill;
   	if(AftBill=='y' or AftBill=='Y') //  Method to print the bill on a file and stores it in the computer.
   	{
   		/* Phase 2 File Sys */
   		BillData2.open("BillData2.txt", ios::out);//Creating a file named BillData to Store bills.	
   	if(!BillData2)
   	{
   	cout<<"File not Created"<<std::endl;	
	   }
	   else
	   {
	   	BillData2<<TotalCost*IGST/100<<",IGST"<<std::endl;
   	       BillData2<<TotalCost*CGST/100<<",CGST"<<std::endl;
	   		BillData2<<Totalbill<<","<<"Totalbill inclusive of all the costs"<<std::endl;
	  cout<<""<<std::endl;
	  BillData2.close();
	   }
	}
	else
	{
		;
	}}
	else if(CategoryType=='R') //Simple Calculation of the Bill 
   {
   	/* Phase 1 Calc */
   	IGST=CGST=6;
   	cout<<"Enter the quantity"<<endl;
   	cin>>Quantity;
   	cout<<"Enter Retail Price"<<endl;
   	cin>>Retailprice;
   	TotalCost=Quantity*Retailprice;
   	Totalbill=TotalCost*IGST/100+TotalCost*CGST/100+TotalCost;
   	cout<<TotalCost*IGST/100<<" -IGST"<<endl;
   	cout<<TotalCost*CGST/100<<" -CGST"<<endl;
   	cout<<Totalbill<<" "<<"Totalbill inclusive of all the costs"<<endl;
   	cout<<"store the bill in the computer by typing y for yes otherwise n for no"<<endl;
   	cin>>AftBill;
   	if(AftBill=='y' or AftBill=='Y') //  Method to print the bill on a file and stores it in the computer.
   	{
   		/* Phase 2 File Sys */
   		BillData3.open("BillData3.txt", ios::out);//Creating a file named BillData to Store bills.	
   	if(!BillData3)
   	{
   	cout<<"File not Created"<<std::endl;	
	   }
	   else
	   {
	   	BillData3<<TotalCost*IGST/100<<",IGST"<<std::endl;
   	       BillData3<<TotalCost*CGST/100<<",CGST"<<std::endl;
	   		BillData3<<Totalbill<<","<<"Totalbill inclusive of all the costs"<<std::endl;
	  cout<<""<<std::endl;
	  BillData3.close();
	   }
	}
	else
	{
			;
	}}else
   {
   std::cerr<<"Incorrect Category , please retry the program"<<std::endl;
   return -1;
  	A=1;
   }
}
return 0;
}
