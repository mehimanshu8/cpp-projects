#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

void mainMenu();

class Management
{
	public:
	Management()
	{
		mainMenu();
	}
};

class Details
{
	public:
		
		static string name, gender;
		int phoneNo;
		int age;
		string add;
		static int cId;
		char arr[100];
		
		void information()
		{
			cout<<"\n enter the customer id:";
			cin>>cId;
			cout<<"\n enter the name:";
			cin>>name;
			cout<<"\n enter the age:";
			cin>>age;
			cout<<"\n address :";
			cin>>add;
			cout<<"\n gender:";
			cin>>gender;
			cout<<"your details are saved \n"<<endl;
		}
};

int Details::cId;
string Details::name;
string Details::gender;

class registration
{
	public:
		static int choice;
		int choice1;
		int back;
		static float charges;
		
		void flights()
		{
			string flight[]={"dubai","canada","usa","uk","australia"};
			
			for(int a=0;a<5;a++)
			{
				cout<<(a+1)<<".flight to"<<flight[a]<<endl;
			}
			cout<<"\n welcome to the airlines"<<endl;
			cout<<"press the no of the country of whicn you want to book the flight";
			cin>>choice;
			
			switch(choice)
			{
				case 1:
					{
						cout<<"      welcome to dubai        \n"<<endl;
						cout<<"your comfort is our priority enjoy your journey"<<endl;
						cout<<"following are the flight \n"<<endl;
						
						cout<<"1. DUB-498"<<endl;
						cout<<"\t08-12-2023 8:00an 10hrs rs.14000"<<endl;
						cout<<"2. DUB-458"<<endl;
						cout<<"\t08-12-2023 5:00an 12hrs rs.18000"<<endl;
						cout<<"3. DUB-598"<<endl;
						cout<<"\t08-12-2023 3:00an 7hrs rs.21000"<<endl;
						
						cout<<"\n select the flight you want to book: ";
						cin>>choice1;
						
						if(choice1==1)
						{
							charges=140000;
							cout<<"\n sucessfully booked flight Dub-498"<<endl;
							cout<<"you can go to menu and take the ticket"<<endl;
						}
						
						else if(choice1==2)
						{
							charges=18000;
							cout<<"\n sucessfully booked flight Dub-458"<<endl;
							cout<<"you can go to menu and take the ticket"<<endl;
						}
							else if(choice1==3)
						{
							charges=21000;
							cout<<"\n sucessfully booked flight Dub-598"<<endl;
							cout<<"you can go to menu and take the ticket"<<endl;
						}
						else
						{
							cout<<"invalid input, shifting to the previous menu"<<endl;
							flights();
						}
						
						cout<<"press any key to go back main menu"<<endl;
						cin>>back;
						
						if(back==1)
						{
							mainMenu();
						}
						else
						{
							mainMenu();
						}
						
					}
					case 2:
					{
						cout<<"      welcome to canada       \n"<<endl;
						cout<<"your comfort is our priority enjoy your journey"<<endl;
						cout<<"following are the flight \n"<<endl;
						
						cout<<"1. CAD-498"<<endl;
						cout<<"\t08-12-2023 8:00an 10hrs rs.14000"<<endl;
						cout<<"2. CAD-458"<<endl;
						cout<<"\t08-12-2023 5:00an 12hrs rs.18000"<<endl;
						cout<<"3. CAD-598"<<endl;
						cout<<"\t08-12-2023 3:00an 7hrs rs.21000"<<endl;
						
						cout<<"\n select the flight you want to book: ";
						cin>>choice1;
						
						if(choice1==1)
						{
							charges=140000;
							cout<<"\n sucessfully booked flight CAD-498"<<endl;
							cout<<"you can go to menu and take the ticket"<<endl;
						}
						
						else if(choice1==2)
						{
								charges=18000;
							cout<<"\n sucessfully booked flight CAD-458"<<endl;
							cout<<"you can go to menu and take the ticket"<<endl;
						}
							else if(choice1==3)
						{
								charges=21000;
							cout<<"\n sucessfully booked flight CAD-598"<<endl;
							cout<<"you can go to menu and take the ticket"<<endl;
						}
						else
						{
							cout<<"invalid input, shifting to the previous menu"<<endl;
							flights();
						}
						
						cout<<"press any key to go back main menu"<<endl;
						cin>>back;
						
						if(back==1)
						{
							mainMenu();
						}
						else
						{
							mainMenu();
						}
					}
					case 3:
					{
						cout<<"      welcome to USA        \n"<<endl;
						cout<<"your comfort is our priority enjoy your journey"<<endl;
						cout<<"following are the flight \n"<<endl;
						
						cout<<"1. USA-498"<<endl;
						cout<<"\t08-12-2023 8:00an 10hrs rs.14000"<<endl;
						cout<<"2. USA-458"<<endl;
						cout<<"\t08-12-2023 5:00an 12hrs rs.18000"<<endl;
						cout<<"3. USA-598"<<endl;
						cout<<"\t08-12-2023 3:00an 7hrs rs.21000"<<endl;
						
						cout<<"\n select the flight you want to book: ";
						cin>>choice1;
						
						if(choice1==1)
						{
							charges=140000;
							cout<<"\n sucessfully booked flight USA-498"<<endl;
							cout<<"you can go to menu and take the ticket"<<endl;
						}
						
						else if(choice1==2)
						{
								charges=18000;
							cout<<"\n sucessfully booked flight USA-458"<<endl;
							cout<<"you can go to menu and take the ticket"<<endl;
						}
							else if(choice1==3)
						{
								charges=21000;
							cout<<"\n sucessfully booked flight USA-598"<<endl;
							cout<<"you can go to menu and take the ticket"<<endl;
						}
						else
						{
							cout<<"invalid input, shifting to the previous menu"<<endl;
							flights();
						}
						
						cout<<"press any key to go back main menu"<<endl;
						cin>>back;
						
						if(back==1)
						{
							mainMenu();
						}
						else
						{
							mainMenu();
						}
						
					}
					case 4:
					{
						cout<<"      welcome to UK        \n"<<endl;
						cout<<"your comfort is our priority enjoy your journey"<<endl;
						cout<<"following are the flight \n"<<endl;
						
						cout<<"1. UK-498"<<endl;
						cout<<"\t08-12-2023 8:00an 10hrs rs.14000"<<endl;
						cout<<"2. UK-458"<<endl;
						cout<<"\t08-12-2023 5:00an 12hrs rs.18000"<<endl;
						cout<<"3. UK-598"<<endl;
						cout<<"\t08-12-2023 3:00an 7hrs rs.21000"<<endl;
						
						cout<<"\n select the flight you want to book: ";
						cin>>choice1;
						
						if(choice1==1)
						{
							charges=140000;
							cout<<"\n sucessfully booked flight UK-498"<<endl;
							cout<<"you can go to menu and take the ticket"<<endl;
						}
						
						else if(choice1==2)
						{
								charges=18000;
							cout<<"\n sucessfully booked flight UK-458"<<endl;
							cout<<"you can go to menu and take the ticket"<<endl;
						}
							else if(choice1==3)
						{
								charges=21000;
							cout<<"\n sucessfully booked flight UK-598"<<endl;
							cout<<"you can go to menu and take the ticket"<<endl;
						}
						else
						{
							cout<<"invalid input, shifting to the previous menu"<<endl;
							flights();
						}
						
						cout<<"press any key to go back main menu"<<endl;
						cin>>back;
						
						if(back==1)
						{
							mainMenu();
						}
						else
						{
							mainMenu();
						}
					}
					case 5:
					{
						cout<<"      welcome to AUSTRILA        \n"<<endl;
						cout<<"your comfort is our priority enjoy your journey"<<endl;
						cout<<"following are the flight \n"<<endl;
						
						cout<<"1. AUS-498"<<endl;
						cout<<"\t08-12-2023 8:00an 10hrs rs.14000"<<endl;
						cout<<"2. AUS-458"<<endl;
						cout<<"\t08-12-2023 5:00an 12hrs rs.18000"<<endl;
						cout<<"3. AUS-598"<<endl;
						cout<<"\t08-12-2023 3:00an 7hrs rs.21000"<<endl;
						
						cout<<"\n select the flight you want to book: ";
						cin>>choice1;
						
						if(choice1==1)
						{
							charges=140000;
							cout<<"\n sucessfully booked flight AUS-498"<<endl;
							cout<<"you can go to menu and take the ticket"<<endl;
						}
						
						else if(choice1==2)
						{
								charges=18000;
							cout<<"\n sucessfully booked flight AUS-458"<<endl;
							cout<<"you can go to menu and take the ticket"<<endl;
						}
							else if(choice1==3)
						{
								charges=21000;
							cout<<"\n sucessfully booked flight AUS-598"<<endl;
							cout<<"you can go to menu and take the ticket"<<endl;
						}
						else
						{
							cout<<"invalid input, shifting to the previous menu"<<endl;
							flights();
						}
						
						cout<<"press any key to go back main menu"<<endl;
						cin>>back;
						
						if(back==1)
						{
							mainMenu();
						}
						else{
							mainMenu();
						}
					}
					default:
						{
							cout<<"invalid input, shifting to the main menu"<<endl;
							mainMenu();
							break;
						}
			}
			
		}
};

float registration::charges;
int registration::choice;

class ticket  : public registration, Details
{
	public:
		void Bill()
		{
			string destination="";
			ofstream outf("records.txt");
			{
				outf<<"   airlines "<<endl;
				outf<<"   ticket   "<<endl;
				
				
				outf<<"Customer ID:"<<Details::cId<<endl;
				outf<<"Customer name:"<<Details::name<<endl;
				outf<<"Customer gender:"<<Details::gender<<endl;
				outf<<"\tDescription"<<endl<<endl;
				
				if(registration::choice==1)
				{
					destination="Dubai";
				}
				else if(registration::choice==2)
				{
					destination="canada";
				}
				
				else if(registration::choice==3)
				{
					destination="USA";
				}
				
				else if(registration::choice==4)
				{
					destination="UK";
				}
				
				else if(registration::choice==5)
				{
					destination="AUSTRIALA";
				}
				
				outf<<"Destination\t\t"<<destination<<endl;
				outf<<"Flight cost:\t\t"<<registration::charges<<endl;
			}
			
			outf.close();
		}
		void dispBill()
		{
			ifstream ifs("records.txt");
			{
				if(!ifs)
				{
					cout<<"file error"<<endl;
				}
				while(!ifs.eof())
				{
					ifs.getline(arr, 100);
					cout<<arr<<endl;
				}
			}
			ifs.close();
		}
};




void mainMenu()
{
	int lchoice;
	int schoice;
	int back;
	
	cout<<"\t                 Airlines \n"<<endl;
	cout<<"\t                 Main Menu    "<<endl;
	cout<<"\t\t\t\t\t\t"<<endl;
	
	
	cout<<"\t\t Press 1 to add the customer details  \t"<<endl;
	cout<<"\t\t Press 2 for the flight registration  \t"<<endl;
	cout<<"\t\t Press 3 for the ticket and charges   \t"<<endl;
	cout<<"\t\t Press 4 to exit                      \t"<<endl;
	cout<<"\t\t\t\t\t\t"<<endl;
	
	cout<<"enter the choice: ";
	cin>>lchoice;
	
	Details d;
	registration r;
	ticket t;
	
	switch(lchoice)
	{
		case 1:
			{
				cout<<"         customers           \n"<<endl;
				d.information();
				cout<<"press any key to go back to main menu";
				cin>>back;
				
				if(back==1)
				{
					mainMenu();
				}
				else
				{
					mainMenu();
				}
				break;
			}
			case 2:
				{
					cout<<"        Book a flight using this system     \n"<<endl;
					r.flights();
					break;
				}
			case 3:
				{
				cout<<"      Get your ticket \n"<<endl;
				t.Bill();
				
				cout<<" Your ticket is printed, you can collect it \n"<<endl;
				cout<<"press 1 to display your ticket ";
				
				cin>>back;
				
				
				if(back==1)
				{
					t.dispBill();
					cout<<"press any key to go back to main menu:";
					cin>>back;
					if(back==1)
					{
						mainMenu();
					}
					else
					{
						mainMenu();
					}
				}
				else
				{
					mainMenu();
				}
				break;
			}
			case 4:
				{
					cout<<" \n\n\t   Thank you     "<<endl;
					break;
				}
				default:
					{
						cout<<"invalid input,please try again\n"<<endl;
						mainMenu();
						break;
					}
	}
}

int main()
{
	Management Mobj;
	return 0;
}


