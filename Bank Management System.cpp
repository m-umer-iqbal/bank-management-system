#include<iostream>
#include<windows.h>
#include<string>
using namespace std;

int choice;

void bms();
void loading();
bool administration_password_checker(string);
void signup_login_menu_page();
void screen_refreshing();
void checking();
void back_button();
void logging_out();

void bms()
{
	system("cls");
	cout<<endl;
	cout<<"\t\t\t\t\t\t\t\t ________________________________________"<<endl;
	cout<<"\t\t\t\t\t\t\t\t|                                        |"<<endl;
	cout<<"\t\t\t\t\t\t\t\t|         Bank Management System         |"<<endl;
	cout<<"\t\t\t\t\t\t\t\t|________________________________________|"<<endl;
	cout<<endl;
}
void loading()
{
	cout<<"\n\t\t\t\t\t\t\t\t\tLoading";
	for(int i=0;i<1;i++)
	{
		Sleep(1000);
		cout<<" . ";
	}
	system("cls");
}
bool administration_password_checker(string s)
{
	if(s=="#BMS72")
		return true;
	else
		return false;
}
void signup_login_menu_page()
{
	cout<<"\t\t\t\t\t\t\t\t      ________________________________"<<endl;
	cout<<"\t\t\t\t\t\t\t\t     |      |                         |"<<endl;
	cout<<"\t\t\t\t\t\t\t\t     |  1.  |  Create an Account.     |"<<endl;
	cout<<"\t\t\t\t\t\t\t\t     |______|_________________________|"<<endl;
	cout<<"\t\t\t\t\t\t\t\t     |      |                         |"<<endl;
	cout<<"\t\t\t\t\t\t\t\t     |  2.  |  Login to an Account.   |"<<endl;
	cout<<"\t\t\t\t\t\t\t\t     |______|_________________________|"<<endl;
	cout<<"\t\t\t\t\t\t\t\t     |                                |"<<endl;
	cout<<"\t\t\t\t\t\t\t\t     |              0. Back           |"<<endl;
	cout<<"\t\t\t\t\t\t\t\t     |________________________________|"<<endl<<endl;	
} 
void screen_refreshing()
{
	cout<<"\n\t\t\t\t\t\t\t\tRefreshing Screen in ";
	for(int i=5;i>0;i--)
	{
		Sleep(1000);
		cout<<" "<<i<<" ";
	}
	Sleep(1000);
	system("cls");
}
void checking()
{
	cout<<"\n\t\t\t\t\t\t\t\t\tChecking";
	for(int i=0;i<3;i++)
	{
		Sleep(1000);
		cout<<" . ";
	}
}
void back_button()
{
	cout<<"\t\t\t\t\t\t\t\t\t ________________"<<endl;
	cout<<"\t\t\t\t\t\t\t\t\t|      |         |"<<endl;
	cout<<"\t\t\t\t\t\t\t\t\t|  0.  |  Back.  |"<<endl;
	cout<<"\t\t\t\t\t\t\t\t\t|______|_________|"<<endl<<endl;
	cout<<"\t\t\t\t\t\t\t\t\tEnter your choice:";
	int choice1;
	cin>>choice1;
	if(choice1==0)
		system("cls");
	else
	{
		cout<<"\n\n\t\t\t\t\t\t\t\t\t\tInvalid Number."<<endl;
		screen_refreshing();
	}
}
void logging_out()
{
	cout<<"\n\t\t\t\t\t\t\t\t\t\tLogging out";
	for(int i=0;i<3;i++)
	{
		Sleep(1000);
		cout<<" . ";
	}
}

class user
{
	private:
		string account_type;
	protected:
		static long int current_user_account_number;
		static long int savings_user_account_number;
		static int current_number_of_user;
		static int savings_number_of_user;
		string fname, mname, dob, address, country, province, city, source_of_income;
		char contact[10],cnic[15];
		
		void user_homepage();
		void user_signup_page();
		void user_login_page();
		void current_account(user u[],int,string);
		void savings_account(user u[],int,string);
		void information_about_accounts();
		
		void user_controls(user u[],int,string);
		void user_details(user u[],int,string);
		void deposit_amount(user u[],int);
		void withdraw_amount(user u[],int);
		void transfer_amount(user u[],int);
		void update_details(user u[],int,string);
	public:
		string name,email,password;
		long int amount;
};
user cu[2500];
user su[2500];
int user::current_number_of_user=0;
int user::savings_number_of_user=0;
long int user::current_user_account_number=223300;
long int user::savings_user_account_number=334400;
void user::user_homepage()
{
	bool check=true;
	while(check)
	{
		bms();
		signup_login_menu_page();
		cout<<"\n\t\t\t\t\t\t\t\t     Enter your choice:  ";
		cin>>choice;
		switch(choice)
		{
			loading();
			case 1:
			{
				user_signup_page();
				break;
			}
			case 2:
			{
				bms();
				user_login_page();
				break;
			}
			case 0:
			{
				check=false;
				break;
			}
			default:
			{
				cout<<"\n\n\t\t\t\t\t\t\t\t\t\tInvalid Number."<<endl;
				screen_refreshing();
				break;
			}
		}
	}
}
void user::user_signup_page()
{
	bool check=true;
	while(check)
	{
		bms();
		cout<<"\t\t\t\t\t\t\t\t  ______________________________________"<<endl;
		cout<<"\t\t\t\t\t\t\t\t |      |                               |"<<endl;
		cout<<"\t\t\t\t\t\t\t\t |  1.  |  Current Account.             |"<<endl;
		cout<<"\t\t\t\t\t\t\t\t |______|_______________________________|"<<endl;
		cout<<"\t\t\t\t\t\t\t\t |      |                               |"<<endl;
		cout<<"\t\t\t\t\t\t\t\t |  2.  |  Savings Account.             |"<<endl;
		cout<<"\t\t\t\t\t\t\t\t |______|_______________________________|"<<endl;
		cout<<"\t\t\t\t\t\t\t\t |      |                               |"<<endl;
		cout<<"\t\t\t\t\t\t\t\t |  3.  |  Information about Accounts.  |"<<endl;
		cout<<"\t\t\t\t\t\t\t\t |______|_______________________________|"<<endl;
		cout<<"\t\t\t\t\t\t\t\t |                                      |"<<endl;
		cout<<"\t\t\t\t\t\t\t\t |                0. Back               |"<<endl;
		cout<<"\t\t\t\t\t\t\t\t |______________________________________|"<<endl<<endl;
		cout<<"\t\t\t\t\t\t\t\t  Enter your choice:";
		cin>>choice;
		switch(choice)
		{
			case 1:
			{
				bms();
				account_type="Current";
				cout<<"\n\t\t\t\t\t\t\t\t\t***Form of Current Account***"<<endl;
				current_user_account_number++;
				if(current_number_of_user>2500)
				{
					cout<<"\t\t\t\t\t\t\t\t\t\tCurrent Account Limit Reached."<<endl;
	               	screen_refreshing();
				}
				else
				{
		            for (int i=current_number_of_user;i<current_number_of_user+1;i++)
		                cu[i].current_account(cu,i,account_type);
		            current_number_of_user++;
				}
				break;
			}
			case 2:
			{
				bms();
				account_type="Savings";
				cout<<"\n\t\t\t\t\t\t\t\t\t***Form of Savings Account***"<<endl;
				savings_user_account_number++;
	            if(savings_number_of_user>2500)
				{
	               	cout<<"\t\t\t\t\t\t\t\t\t\tSaving Account Limit Reached."<<endl;
	               	screen_refreshing();
				}
				else
				{
					for (int i=savings_number_of_user;i<savings_number_of_user+1;i++)
		                su[i].savings_account(su,i,account_type);
		            savings_number_of_user++;
				}
				break;
			}
			case 3:
			{
				information_about_accounts();
				break;
			}
			case 0:
			{
				check=false;
				break;
			}
			default:
			{
				cout<<"\n\n\t\t\t\t\t\t\t\t\t\tInvalid Number."<<endl;
				screen_refreshing();
				break;
			}				
		}
	}
}
void user::current_account(user u[],int i,string s)
{	
	cin.ignore();
    cout << "\n\t\t\t\t\t\t\t\t  Enter your Name: ";
    getline(cin, u[i].name);
    cout << "\t\t\t\t\t\t\t\t  Enter your Father Name: ";
    getline(cin, u[i].fname);
    cout << "\t\t\t\t\t\t\t\t  Enter your Mother Name: ";
    getline(cin, u[i].mname);
    cout << "\t\t\t\t\t\t\t\t  Enter your Date of Birth(DD/MM/YYYY): ";
    getline(cin, u[i].dob);
    cout << "\t\t\t\t\t\t\t\t  Enter your Address: ";
    getline(cin, u[i].address);
    cout << "\t\t\t\t\t\t\t\t  Enter your Country: ";
    getline(cin, u[i].country);
    cout << "\t\t\t\t\t\t\t\t  Enter your Province: ";
    getline(cin, u[i].province);
    cout << "\t\t\t\t\t\t\t\t  Enter your City: ";
    getline(cin, u[i].city);
    cout << "\t\t\t\t\t\t\t\t  Enter your Email: ";
    getline(cin, u[i].email);
	cout << "\t\t\t\t\t\t\t\t  Enter your Contact Number: 092";
  	for(int j=0;j<10;j++)
		cin>>u[i].contact[j];
	cout<<"\t\t\t\t\t\t\t\t  Enter your CNIC(xxxxx-xxxxxxx-x): ";
	for(int j=0;j<15;j++)
		cin>>u[i].cnic[j];
	cin.ignore();
    cout << "\t\t\t\t\t\t\t\t  Enter your Source of Income: ";
    getline(cin, u[i].source_of_income);
	cout << "\t\t\t\t\t\t\t\t  Create your New Password: ";
    getline(cin, u[i].password);
	loading();
	bms();
	cout<<"\t\t\t\t\t\t\t\t\t   ***Congratulations***"<<endl<<endl;
	cout<<"\t\t\t\t\t\t\t\t\tYour Account has been created."<<endl;
	cout<<"\n\t\t\t\t\t\t\t\tAccount Type: "<<s<<endl<<endl;
	cout<<"\t\t\t\t\t\t\t\tAccount Number: "<<u[i].current_user_account_number<<endl<<endl;
	cout<<"\t\t\t\t\t\t\t\tName: "<<u[i].name<<endl<<endl;
	cout<<"\t\t\t\t\t\t\t\tPassword: "<<u[i].password<<endl<<endl;
	bool check=true;
	while(check)
	{
		cout<<"\t\t\t\t\t\t\t\tEnter the amount you want to deposit:";
		u[i].amount=0;
		cin>>u[i].amount;
		if(u[i].amount<0)
			cout<<"\n\t\t\t\t\t\t\t\t\t   Add more amount."<<endl<<endl;
		else
			break;
	}
	screen_refreshing();
}
void user::savings_account(user u[],int i,string s)
{
	cin.ignore();
    cout << "\n\t\t\t\t\t\t\t\t  Enter your Name: ";
    getline(cin, u[i].name);
    cout << "\t\t\t\t\t\t\t\t  Enter your Father Name: ";
    getline(cin, u[i].fname);
    cout << "\t\t\t\t\t\t\t\t  Enter your Mother Name: ";
    getline(cin, u[i].mname);
    cout << "\t\t\t\t\t\t\t\t  Enter your Date of Birth(DD/MM/YYYY): ";
    getline(cin, u[i].dob);
    cout << "\t\t\t\t\t\t\t\t  Enter your Address: ";
    getline(cin, u[i].address);
    cout << "\t\t\t\t\t\t\t\t  Enter your Country: ";
    getline(cin, u[i].country);
    cout << "\t\t\t\t\t\t\t\t  Enter your Province: ";
    getline(cin, u[i].province);
    cout << "\t\t\t\t\t\t\t\t  Enter your City: ";
    getline(cin, u[i].city);
    cout << "\t\t\t\t\t\t\t\t  Enter your Email: ";
    getline(cin, u[i].email);
	cout << "\t\t\t\t\t\t\t\t  Enter your Contact Number: 092";
  	for(int j=0;j<10;j++)
		cin>>u[i].contact[j];
	cout<<"\t\t\t\t\t\t\t\t  Enter your CNIC(xxxxx-xxxxxxx-x): ";
	for(int j=0;j<15;j++)
		cin>>u[i].cnic[j];
	cin.ignore();
    cout << "\t\t\t\t\t\t\t\t  Enter your Source of Income: ";
    getline(cin, u[i].source_of_income);
	cout << "\t\t\t\t\t\t\t\t  Create your New Password: ";
    getline(cin, u[i].password);
	loading();
	bms();
	cout<<"\t\t\t\t\t\t\t\t\t   ***Congratulations***"<<endl<<endl;
	cout<<"\t\t\t\t\t\t\t\t\tYour Account has been created."<<endl;
	cout<<"\n\t\t\t\t\t\t\t\tAccount Type: "<<s<<endl<<endl;
	cout<<"\t\t\t\t\t\t\t\tAccount Number: "<<u[i].savings_user_account_number<<endl<<endl;
	cout<<"\t\t\t\t\t\t\t\tName: "<<u[i].name<<endl<<endl;
	cout<<"\t\t\t\t\t\t\t\tPassword: "<<u[i].password<<endl<<endl;
	bool check=true;
	while(check)
	{
		cout<<"\t\t\t\t\t\t\t\tEnter the amount you want to deposit:";
		u[i].amount=0;
		cin>>u[i].amount;
		if(u[i].amount<0)
			cout<<"\n\t\t\t\t\t\t\t\t\t   Add more amount."<<endl<<endl;
		else
			break;
	}
	if(u[i].amount>500000)
		cout<<"\n\t\t\t\t\t\t\t\t--> Interest Rate will be 10% a Year."<<endl<<endl;
	else
		cout<<"\n\t\t\t\t\t\t\t\t--> Interest Rate will be 5% a Year."<<endl<<endl;
	screen_refreshing();
}
void user::information_about_accounts()
{
	bms();
	cout<<"\t\t\t\t\t\t\t\t\t-->Current Account"<<endl<<endl;	
	cout<<"\t\t\t\t\t\t\t\t\t-Mostly used for bussiness purpose"<<endl;
	cout<<"\t\t\t\t\t\t\t\t\t-This account is non-profitable"<<endl;
	cout<<"\t\t\t\t\t\t\t\t\t-No restrictions on transactions"<<endl;
	cout<<"\t\t\t\t\t\t\t\t\t-ATM card and Check-Books"<<endl<<endl;
	cout<<"\t\t\t\t\t\t\t\t\t-->Savings Account"<<endl<<endl;
	cout<<"\t\t\t\t\t\t\t\t\t-Mostly used for investment"<<endl;
	cout<<"\t\t\t\t\t\t\t\t\t-This account is profitable"<<endl;
	cout<<"\t\t\t\t\t\t\t\t\t-Annual Interest rate is"<<endl;
	cout<<"\t\t\t\t\t\t\t\t\t  5% on (First deposit < 500,000)"<<endl;                               
	cout<<"\t\t\t\t\t\t\t\t\t  10% on (First deposit > 500,000)"<<endl;
	cout<<"\t\t\t\t\t\t\t\t\t-No restrictions on transactions"<<endl;
	cout<<"\t\t\t\t\t\t\t\t\t-ATM card and Check-Books"<<endl<<endl;
	back_button();
}
void user::user_login_page()
{
    int userNo;
    string userName,userPassword,userAccountType;
    cin.ignore();
    cout<<"\n\t\t\t\t\t\t\t\tEnter your Account Type: ";
    getline(cin,userAccountType);
    cout<<"\n\t\t\t\t\t\t\t\tEnter your Account Number: ";
    cin>>userNo;
    cin.ignore();
	cout<<"\n\t\t\t\t\t\t\t\tEnter your Username/Email: ";
    getline(cin,userName);
    cout<<"\n\t\t\t\t\t\t\t\tEnter your Password: ";
    getline(cin,userPassword);
    checking();
    if(userAccountType=="Current"||userAccountType=="current")
    {
		for (int i=0;i<2500;i++)
    	{
	        if(cu[i].current_user_account_number==userNo&&(cu[i].name==userName||cu[i].email==userName)&&cu[i].password==userPassword)
	        {
	        	user_controls(cu,i,"Current");
		    	break;
	        }
		    else
			{
	        	cout<<"\n\n\t\t\t\t\t\t\t\t\tNo Account Exist."<<endl;
	        	screen_refreshing();
	        	break;
			}
		}
	}
    else if(userAccountType=="Savings"||userAccountType=="savings")
    {
    	for(int i=0;i<2500;i++)
    	{
	    	if(su[i].savings_user_account_number==userNo&&(su[i].name==userName||su[i].email==userName)&&su[i].password==userPassword)
		    {
		       	user_controls(su,i,"Savings");
			   	break;
		    }
			else
			{
		      	cout<<"\n\n\t\t\t\t\t\t\t\t\tNo Account Exist."<<endl;
		       	screen_refreshing();
		       	break;
			}
		}
	}
	else
	{
        cout<<"\n\n\t\t\t\t\t\t\t\t\tNo Account Exist."<<endl;
        screen_refreshing();
	}
}
void user::user_controls(user u[],int i,string s)
{
	bool check=true;
	while(check)
	{
		bms();
		cout<<"\t\t\t\t\t\t\t _______________________________________________________"<<endl;
		cout<<"\t\t\t\t\t\t\t|      |                    |      |                    |"<<endl;
		cout<<"\t\t\t\t\t\t\t|  1.  |  User Details.     |  4.  |  Transfer Amount.  |"<<endl;
		cout<<"\t\t\t\t\t\t\t|______|____________________|______|____________________|"<<endl;
		cout<<"\t\t\t\t\t\t\t|      |                    |      |                    |"<<endl;
		cout<<"\t\t\t\t\t\t\t|  2.  |  Deposit Amount.   |  5.  |  Update Details.   |"<<endl;
		cout<<"\t\t\t\t\t\t\t|______|____________________|______|____________________|"<<endl;
		cout<<"\t\t\t\t\t\t\t|      |                    |      |                    |"<<endl;
		cout<<"\t\t\t\t\t\t\t|  3.  |  Withdraw Amount.  |  6.  |  Logout.           |"<<endl;
		cout<<"\t\t\t\t\t\t\t|______|____________________|______|____________________|"<<endl<<endl;
		cout<<"\t\t\t\t\t\t\t\tEnter your choice:";
		cin>>choice;
		switch(choice)
		{
			case 1:
			{
				if(s=="Current")
					cu[i].user_details(cu,i,"Current");
				else
					su[i].user_details(su,i,"Savings");
				break;
			}
			case 2:
			{
				if(s=="Current")
					cu[i].deposit_amount(cu,i);
				else
					su[i].deposit_amount(su,i);
				break;
			}
			case 3:
			{
				if(s=="Current")
					cu[i].withdraw_amount(cu,i);
				else
					su[i].withdraw_amount(su,i);
				break;
			}
			case 4:
			{
				if(s=="Current")
					cu[i].transfer_amount(cu,i);
				else
					su[i].transfer_amount(su,i);
				break;
			}
			case 5:
			{
				if(s=="Current")
					cu[i].update_details(cu,i,"Current");
				else
					su[i].update_details(su,i,"Savings");
				break;
			}
			case 6:
			{
				logging_out();
				check=false;
				break;
			}
			default:
			{
				cout<<"\n\n\t\t\t\t\t\t\t\t\t\tInvalid Number."<<endl;
				screen_refreshing();
				break;
			}
		}
	}
}
void user::user_details(user u[],int i,string s)
{
	bms();
	cout<<"\n\t\t\t\t\t\t\t\t\t***User Account Details***"<<endl<<endl;
	cout<<"\t\t\t\t\t\t\t\t Account Type: "<<s<<endl;
	if(s=="Current")
		cout<<"\t\t\t\t\t\t\t\t Account Number: "<<u[i].current_user_account_number<<endl;
	else
		cout<<"\t\t\t\t\t\t\t\t Account Number: "<<u[i].savings_user_account_number<<endl;
	cout<<"\t\t\t\t\t\t\t\t Name: "<<u[i].name<<endl;
    cout<<"\t\t\t\t\t\t\t\t Father Name: "<<u[i].fname<<endl;
    cout<<"\t\t\t\t\t\t\t\t Mother Name: "<<u[i].mname<<endl;
    cout<<"\t\t\t\t\t\t\t\t Date of Birth: "<<u[i].dob<<endl;
    cout<<"\t\t\t\t\t\t\t\t Address: "<<u[i].address<<endl;
    cout<<"\t\t\t\t\t\t\t\t Country: "<<u[i].country<<endl;
    cout<<"\t\t\t\t\t\t\t\t Province: "<<u[i].province<<endl;
    cout<<"\t\t\t\t\t\t\t\t City: "<<u[i].city<<endl;
    cout<<"\t\t\t\t\t\t\t\t Email: "<<u[i].email<<endl;
	cout<<"\t\t\t\t\t\t\t\t Contact Number: 092";
  	for(int j=0;j<10;j++)
		cout<<u[i].contact[j];
	cout<<endl;
	cout<<"\t\t\t\t\t\t\t\t CNIC: ";
	for(int j=0;j<15;j++)
		cout<<u[i].cnic[j];
	cout<<endl;
    cout<<"\t\t\t\t\t\t\t\t Source of Income: "<<u[i].source_of_income<<endl;
	cout<<"\t\t\t\t\t\t\t\t Password: "<<u[i].password<<endl;
	cout<<"\t\t\t\t\t\t\t\t Total Amount in your Account: "<<u[i].amount<<endl;
	back_button();
}
void user::deposit_amount(user u[],int i)
{
	bms();
	int temporary;
	cout<<"\t\t\t\t\t\t\t\t Amount: "<<u[i].amount<<endl<<endl;
	cout<<"\t\t\t\t\t\t\t\t Enter the amount you want to deposit: ";
	cin>>temporary;
	if(temporary<0)
		cout<<"\n\t\t\t\t\t\t\t\t\t   Add more amount."<<endl<<endl;
	else
	{
		cout<<"\n\t\t\t\t\t\t\t\t\t\tUpdated Amount"<<endl<<endl;
		u[i].amount=u[i].amount+temporary;
		cout<<"\t\t\t\t\t\t\t\t Total Amount: "<<u[i].amount<<endl<<endl;
	}
	back_button();
}
void user::withdraw_amount(user u[],int i)
{
	bms();
	int temporary;
	cout<<"\t\t\t\t\t\t\t\t Amount in your Account: "<<u[i].amount<<endl<<endl;
	cout<<"\t\t\t\t\t\t\t\t Enter the amount you want to withdraw: ";
	cin>>temporary;
	if(temporary<0)
		cout<<"\n\t\t\t\t\t\t\t\t\t   Increase amount."<<endl<<endl;
	else
	{
		cout<<"\n\t\t\t\t\t\t\t\t\t\tUpdated Amount"<<endl<<endl;
		u[i].amount=u[i].amount-temporary;
		cout<<"\t\t\t\t\t\t\t\t Total Amount in your Account: "<<u[i].amount<<endl<<endl;
	}
	back_button();
}
void user::transfer_amount(user u[],int i)
{
	cin.ignore();
	bms();
	string acc_type,name;
	int acc_number,money;
	cout<<"\t\t\t\t\t\t\t\t Amount in your Account: "<<u[i].amount<<endl<<endl;
	cout<<"\t\t\t\t\t\t\t\t Enter the User Account details"<<endl;
	cout<<"\t\t\t\t\t\t\t\t to which you want to Transfer Amount:"<<endl<<endl;	
	cout<<"\t\t\t\t\t\t\t\t User Account Type: ";
	getline(cin,acc_type);
	cout<<"\t\t\t\t\t\t\t\t User Account Number: ";
	cin>>acc_number;
	cin.ignore();
	cout<<"\t\t\t\t\t\t\t\t User Name: ";
	getline(cin,name);
	cout<<"\t\t\t\t\t\t\t\t Enter Amount you want to Transfer: ";
	cin>>money;
	bool check=true;
	while(check)
	{
		if(money<0)
		{
			if(money<u[i].amount)
				cout<<"\n\t\t\t\t\t\t\t\t\t   Increase amount."<<endl<<endl;
			break;
		}
		else
		{
			if(acc_type=="Current"||acc_type=="current")
			{
				for (int j=0;j<2500;j++)
		    	{
			        if(cu[j].current_user_account_number==acc_number&&cu[j].name==name)
			        {
			        	u[i].amount=u[i].amount-money;
			        	cu[j].amount=cu[j].amount+money;
			        	cout<<"\n\t\t\t\t\t\t\t\t\tAmount is Transferred."<<endl<<endl;
						cout<<"\t\t\t\t\t\t\t\t Remaining Amount in your Account: "<<u[i].amount<<endl;
						screen_refreshing();
				    	break;
			        }
				    else
					{
			        	cout<<"\n\n\t\t\t\t\t\t\t\t\tNo Account Exist."<<endl;
			        	screen_refreshing();
			        	break;
					}
				}
			}
			else if(acc_type=="Savings"||acc_type=="savings")
		    {
		    	for(int j=0;j<2500;j++)
		    	{
			    	if(su[i].savings_user_account_number==acc_number&&su[i].name==name)
				    {
				    	u[i].amount=u[i].amount-money;
			        	su[j].amount=su[j].amount+money;
					   	cout<<"\n\t\t\t\t\t\t\t\t\tAmount "<<money<<" is Transferred."<<endl<<endl;
						cout<<"\t\t\t\t\t\t\t\t Remaining Amount in your Account: "<<u[i].amount<<endl;
			        	screen_refreshing();
						break;
				    }
					else
					{
				      	cout<<"\n\n\t\t\t\t\t\t\t\t\tNo Account Exist."<<endl;
				       	screen_refreshing();
				       	break;
					}
				}
			}
			else
			{
				cout<<"\n\n\t\t\t\t\t\t\t\t\tNo Account Exist."<<endl;
        		screen_refreshing();
			}
			break;
		}		
	}
}
void user::update_details(user u[],int i,string s)
{
	bms();
	cout<<"\n\t\t\t\t\t\t\t\t Your Account Type: "<<s<<endl<<endl;
	if(s=="Current")
		cout<<"\t\t\t\t\t\t\t\t Account Number: "<<u[i].current_user_account_number<<endl;
	else
		cout<<"\t\t\t\t\t\t\t\t Account Number: "<<u[i].savings_user_account_number<<endl;
	cin.ignore();
    cout<<"\t\t\t\t\t\t\t\t Enter your Name: ";
    getline(cin, u[i].name);
    cout << "\t\t\t\t\t\t\t\t Enter your Father Name: ";
    getline(cin, u[i].fname);
    cout << "\t\t\t\t\t\t\t\t Enter your Mother Name: ";
    getline(cin, u[i].mname);
    cout << "\t\t\t\t\t\t\t\t Enter your Date of Birth(DD/MM/YYYY): ";
    getline(cin, u[i].dob);
    cout << "\t\t\t\t\t\t\t\t Enter your Address: ";
    getline(cin, u[i].address);
    cout << "\t\t\t\t\t\t\t\t Enter your Country: ";
    getline(cin, u[i].country);
    cout << "\t\t\t\t\t\t\t\t Enter your Province: ";
    getline(cin, u[i].province);
    cout << "\t\t\t\t\t\t\t\t Enter your City: ";
    getline(cin, u[i].city);
    cout << "\t\t\t\t\t\t\t\t Enter your Email: ";
    getline(cin, u[i].email);
	cout << "\t\t\t\t\t\t\t\t Enter your Contact Number: 092";
  	for(int j=0;j<10;j++)
		cin>>u[i].contact[j];
	cout<<"\t\t\t\t\t\t\t\t Enter your CNIC(xxxxx-xxxxxxx-x): ";
	for(int j=0;j<15;j++)
		cin>>u[i].cnic[j];
	cin.ignore();
    cout << "\t\t\t\t\t\t\t\t Enter your Source of Income: ";
    getline(cin, u[i].source_of_income);
	cout << "\t\t\t\t\t\t\t\t Create your New Password: ";
    getline(cin, u[i].password);
    back_button();
}

class admin : virtual public user
{
	private:
	    static long int admin_account_number;
	    static int number_of_admin;
	protected:
	    void admin_homepage();
	    void admin_signup_details(int);
	    void admin_login_page();
	    
	    void admin_controls(int);
		void admin_details(int);
	    void admin_update_details(int);
	    void all_bank_amount();
	    void specific_user_details();
	    void see_all_users_details();
	    void delete_user();
};
admin a[500];
int admin::number_of_admin=0;
long int admin::admin_account_number=112200;
void admin::admin_homepage()
{
	bms();
	string administration_password;
	cin.ignore();
	cout<<"\t\t\t\t\t\t\t\tEnter the Administration Password:";
	getline(cin,administration_password);
	checking();
	if(administration_password_checker(administration_password))
	{
		system("cls");
		bool check=true;
        while (check)
        {
            bms();
            signup_login_menu_page();
            cout << "\n\t\t\t\t\t\t\t\t    Enter your choice:  ";
            int choice;
            cin >> choice;
            switch (choice)
            {
	            case 1:
	            {
	            	bms();
	                admin_account_number++;
	                if(number_of_admin>500)
					{
	                	cout<<"\t\t\t\t\t\t\t\t\tAdmin Account Limit Reached."<<endl;
	                	screen_refreshing();
					}
	                else
	                {
		                for (int i=number_of_admin;i<number_of_admin+1;i++)
		                    a[i].admin_signup_details(i);
    					number_of_admin++;
					}
	                break;
	
	            }
	            case 2:
	            {
	                admin_login_page();
	                break;
	            }
	            case 0:
	            {
	                check=false;
	                break;
	            }
	            default:
	            {
	                cout<<"\n\n\t\t\t\t\t\t\t\t\t\tInvalid Number."<<endl;
	                screen_refreshing();
	                break;
	            }
            }
        }
    }
    else
    {
        cout << "\n\n\t\t\t\t\t\t\t\t\t\tIncorrect Password." << endl;
        screen_refreshing();
    }
}
void admin::admin_signup_details(int i)
{
	cout<<"\n\t\t\t\t\t\t\t\t\t***Admin Registration Form***"<<endl;
    cin.ignore();
    cout << "\n\t\t\t\t\t\t\t\t  Enter your Name: ";
    getline(cin, a[i].name);
    cout << "\t\t\t\t\t\t\t\t  Enter your Father Name: ";
    getline(cin, a[i].fname);
    cout << "\t\t\t\t\t\t\t\t  Enter your Mother Name: ";
    getline(cin, a[i].mname);
    cout << "\t\t\t\t\t\t\t\t  Enter your Date of Birth(DD/MM/YYYY): ";
    getline(cin, a[i].dob);
    cout << "\t\t\t\t\t\t\t\t  Enter your Address: ";
    getline(cin, a[i].address);
    cout << "\t\t\t\t\t\t\t\t  Enter your Country: ";
    getline(cin, a[i].country);
    cout << "\t\t\t\t\t\t\t\t  Enter your Province: ";
    getline(cin, a[i].province);
    cout << "\t\t\t\t\t\t\t\t  Enter your City: ";
    getline(cin, a[i].city);
    cout << "\t\t\t\t\t\t\t\t  Enter your Email: ";
    getline(cin, a[i].email);
    cout << "\t\t\t\t\t\t\t\t  Enter your Contact Number: 092";
  	for(int j=0;j<10;j++)
		cin>>a[i].contact[j];
	cout<<"\t\t\t\t\t\t\t\t  Enter your CNIC(xxxxx-xxxxxxx-x): ";
	for(int j=0;j<15;j++)
		cin>>a[i].cnic[j];
	cin.ignore();
    cout << "\t\t\t\t\t\t\t\t  Create your New Password: ";
    getline(cin, a[i].password);
    loading();
    bms();
    cout << "\t\t\t\t\t\t\t\t\t   ***Congratulations***" << endl<< endl;
    cout << "\t\t\t\t\t\t\t\t\tYour Account has been created." << endl;
    cout << "\n\t\t\t\t\t\t\t\tAccount Number: " << a[i].admin_account_number << endl<< endl;
    cout << "\t\t\t\t\t\t\t\tName: " << a[i].name << endl<< endl;
    cout << "\t\t\t\t\t\t\t\tPassword: " << a[i].password << endl<< endl;
	screen_refreshing();
}
void admin::admin_login_page()
{
	bms();
    int adminNo;
    string adminName,adminPassword;
    cin.ignore();
    cout<<"\n\t\t\t\t\t\t\t\tEnter your Account Number: ";
    cin>>adminNo;
    cin.ignore();
	cout<<"\n\t\t\t\t\t\t\t\tEnter your Username/Email: ";
    getline(cin,adminName);
    cout<<"\n\t\t\t\t\t\t\t\tEnter your Password: ";
    getline(cin,adminPassword);
    checking();
    for (int j = 0;  j <500; j++)
    {
        if(a[j].admin_account_number==adminNo&&(a[j].name==adminName||a[j].email==adminName)&&a[j].password==adminPassword)
        {
        	admin_controls(j);
			break;
        }
        else
        {
        	cout<<"\n\n\t\t\t\t\t\t\t\t\tNo Account Exist."<<endl;
        	screen_refreshing();
        	break;
		}
    }
}
void admin::admin_controls(int i)
{
	bool check=true;
	while(check)
	{
		bms();
		cout<<"\t\t\t\t\t\t    _________________________________________________________________"<<endl;
		cout<<"\t\t\t\t\t\t   |      |                        |      |                          |"<<endl;
		cout<<"\t\t\t\t\t\t   |  1.  |  Admin Details.        |  5.  |  Specific User Details.  |"<<endl;
		cout<<"\t\t\t\t\t\t   |______|________________________|______|__________________________|"<<endl;
		cout<<"\t\t\t\t\t\t   |      |                        |      |                          |"<<endl;
		cout<<"\t\t\t\t\t\t   |  2.  |  Update Details.       |  6.  |  See all Users Data.     |"<<endl;
		cout<<"\t\t\t\t\t\t   |______|________________________|______|__________________________|"<<endl;
		cout<<"\t\t\t\t\t\t   |      |                        |      |                          |"<<endl;
		cout<<"\t\t\t\t\t\t   |  3.  |  Total Amount in Bank. |  7.  |  Delete a User.          |"<<endl;
		cout<<"\t\t\t\t\t\t   |______|________________________|______|__________________________|"<<endl;
		cout<<"\t\t\t\t\t\t   |      |                        |      |                          |"<<endl;
		cout<<"\t\t\t\t\t\t   |  4.  |  Login as a User.      |  8.  |  Logout.                 |"<<endl;
		cout<<"\t\t\t\t\t\t   |______|________________________|______|__________________________|"<<endl<<endl;
		cout<<"\t\t\t\t\t\t\t\tEnter your choice:";
		cin>>choice;
		switch(choice)
		{
			case 1:
			{
				admin_details(i);
				break;
			}
			case 2:
			{
				admin_update_details(i);
				break;
			}
			case 3:
			{
				all_bank_amount();
				break;
			}
			case 4:
			{
				bms();
				cout<<"\n\t\t\t\t\t\t\t\t\t***Login as User***"<<endl;
				user_login_page();
				break;
			}
			case 5:
			{
				specific_user_details();
				break;
			}
			case 6:
			{
				see_all_users_details();
				break;
			}
			case 7:
			{
				delete_user();
				break;
			}
			case 8:
			{
				logging_out();
				check=false;
				break;
			}
			default:
			{
				cout<<"\n\n\t\t\t\t\t\t\t\t\t\tInvalid Number."<<endl;
				screen_refreshing();
				break;
			}
		}
	}
}
void admin::admin_details(int i)
{
	bms();
	cout<<"\n\t\t\t\t\t\t\t\t\t***Admin Account Details***"<<endl<<endl;
	cout<<"\t\t\t\t\t\t\t\t Account Number: "<<a[i].admin_account_number<<endl;
	cout<<"\t\t\t\t\t\t\t\t Name: "<<a[i].name<<endl;
    cout<<"\t\t\t\t\t\t\t\t Father Name: "<<a[i].fname<<endl;
    cout<<"\t\t\t\t\t\t\t\t Mother Name: "<<a[i].mname<<endl;
    cout<<"\t\t\t\t\t\t\t\t Date of Birth: "<<a[i].dob<<endl;
    cout<<"\t\t\t\t\t\t\t\t Address: "<<a[i].address<<endl;
    cout<<"\t\t\t\t\t\t\t\t Country: "<<a[i].country<<endl;
    cout<<"\t\t\t\t\t\t\t\t Province: "<<a[i].province<<endl;
    cout<<"\t\t\t\t\t\t\t\t City: "<<a[i].city<<endl;
    cout<<"\t\t\t\t\t\t\t\t Email: "<<a[i].email<<endl;
	cout<<"\t\t\t\t\t\t\t\t Contact Number: 092";
  	for(int j=0;j<10;j++)
		cout<<a[i].contact[j];
	cout<<endl;
	cout<<"\t\t\t\t\t\t\t\t CNIC: ";
	for(int j=0;j<15;j++)
		cout<<a[i].cnic[j];
	cout<<endl;
	cout<<"\t\t\t\t\t\t\t\t Password: "<<a[i].password<<endl;
	back_button();
}
void admin::admin_update_details(int i)
{
	bms();
	cout<<"\t\t\t\t\t\t\t\t Account Number: "<<a[i].admin_account_number<<endl;
	cin.ignore();
    cout<<"\t\t\t\t\t\t\t\t Enter your Name: ";
    getline(cin, a[i].name);
    cout << "\t\t\t\t\t\t\t\t Enter your Father Name: ";
    getline(cin, a[i].fname);
    cout << "\t\t\t\t\t\t\t\t Enter your Mother Name: ";
    getline(cin, a[i].mname);
    cout << "\t\t\t\t\t\t\t\t Enter your Date of Birth(DD/MM/YYYY): ";
    getline(cin, a[i].dob);
    cout << "\t\t\t\t\t\t\t\t Enter your Address: ";
    getline(cin, a[i].address);
    cout << "\t\t\t\t\t\t\t\t Enter your Country: ";
    getline(cin, a[i].country);
    cout << "\t\t\t\t\t\t\t\t Enter your Province: ";
    getline(cin, a[i].province);
    cout << "\t\t\t\t\t\t\t\t Enter your City: ";
    getline(cin, a[i].city);
    cout << "\t\t\t\t\t\t\t\t Enter your Email: ";
    getline(cin, a[i].email);
	cout << "\t\t\t\t\t\t\t\t Enter your Contact Number: 092";
  	for(int j=0;j<10;j++)
		cin>>a[i].contact[j];
	cout<<"\t\t\t\t\t\t\t\t Enter your CNIC(xxxxx-xxxxxxx-x): ";
	for(int j=0;j<15;j++)
		cin>>a[i].cnic[j];
	cin.ignore();
	cout << "\t\t\t\t\t\t\t\t Create your New Password: ";
    getline(cin, a[i].password);
    back_button();
}
void admin::all_bank_amount()
{
	bms();
	cout<<"\t\t\t\t\t\t\t\t Total Amount in  Bank: ";
	int total_amount=0;
	for(int i=0;i<2500;i++)
	{
		total_amount+=cu[i].amount;
		total_amount+=su[i].amount;
	}
	cout<<total_amount<<endl;
	back_button();
}
void admin::specific_user_details()
{
	bms();
	cout<<"\n\t\t\t\t\t\t\t\t\t***Specific User Details***"<<endl;
    int userNo;
    string userName,userPassword,userAccountType;
    cin.ignore();
    cout<<"\n\t\t\t\t\t\t\t\tEnter your Account Type: ";
    getline(cin,userAccountType);
    cout<<"\n\t\t\t\t\t\t\t\tEnter your Account Number: ";
    cin>>userNo;
    cin.ignore();
	cout<<"\n\t\t\t\t\t\t\t\tEnter your Username/Email: ";
    getline(cin,userName);
    cout<<"\n\t\t\t\t\t\t\t\tEnter your Password: ";
    getline(cin,userPassword);
    checking();
    if(userAccountType=="Current"||userAccountType=="current")
    {
		for (int i=0;i<2500;i++)
    	{
	        if(cu[i].current_user_account_number==userNo&&(cu[i].name==userName||cu[i].email==userName)&&cu[i].password==userPassword)
	        {
	        	user_details(cu,i,"Current");
		    	break;
	        }
		    else
			{
	        	cout<<"\n\n\t\t\t\t\t\t\t\t\tNo Account Exist."<<endl;
	        	screen_refreshing();
	        	break;
			}
		}
	}
    else if(userAccountType=="Savings"||userAccountType=="savings")
    {
    	for(int i=0;i<2500;i++)
    	{
	    	if(su[i].savings_user_account_number==userNo&&(su[i].name==userName||su[i].email==userName)&&su[i].password==userPassword)
		    {
	        	user_details(su,i,"Savings");
			   	break;
		    }
			else
			{
		      	cout<<"\n\n\t\t\t\t\t\t\t\t\tNo Account Exist."<<endl;
		       	screen_refreshing();
		       	break;
			}
		}
	}
	else
	{
        cout<<"\n\n\t\t\t\t\t\t\t\t\tNo Account Exist."<<endl;
        screen_refreshing();
	}
}
void admin::see_all_users_details()
{
	bms();
	cout<<endl;
	if(current_number_of_user==0)
	{
		cout<<"\t\t\t\t\t\t\t\t No User with Current Account"<<endl<<endl;
		cout<<"\t\t\t\t\t\t\t\t________________________________________"<<endl<<endl;
	}
	else
	{
		for (int i=0;i<current_number_of_user+1;i++)
		{
			cout<<"\t\t\t\t\t\t\t\t Account Type: Current"<<endl;
			cout<<"\t\t\t\t\t\t\t\t Account Number: "<<cu[i].current_user_account_number<<endl;
			cout<<"\t\t\t\t\t\t\t\t Name: "<<cu[i].name<<endl;
			cout<<"\t\t\t\t\t\t\t\t Email: "<<cu[i].email<<endl;
			cout<<"\t\t\t\t\t\t\t\t Password: "<<cu[i].password<<endl;
			cout<<"\t\t\t\t\t\t\t\t Total Amount in Account: "<<cu[i].amount<<endl<<endl;
			cout<<"\t\t\t\t\t\t\t\t________________________________________"<<endl<<endl;
		}
	}
	if(savings_number_of_user==0)
	{
		cout<<"\t\t\t\t\t\t\t\t No User with Savings Account"<<endl<<endl;
		cout<<"\t\t\t\t\t\t\t\t________________________________________"<<endl<<endl;
	}
	else
	{
		for (int i=0;i<savings_number_of_user+1;i++)
		{
			cout<<"\t\t\t\t\t\t\t\t Account Type: Savings"<<endl;
			cout<<"\t\t\t\t\t\t\t\t Account Number: "<<su[i].savings_user_account_number<<endl;
			cout<<"\t\t\t\t\t\t\t\t Name: "<<su[i].name<<endl;
			cout<<"\t\t\t\t\t\t\t\t Email: "<<su[i].email<<endl;
			cout<<"\t\t\t\t\t\t\t\t Password: "<<su[i].password<<endl;
			cout<<"\t\t\t\t\t\t\t\t Total Amount in Account: "<<su[i].amount<<endl<<endl;
			cout<<"\t\t\t\t\t\t\t\t________________________________________"<<endl<<endl;
		}
	}
	cout<<"\t\t\t\t\t\t\t\t Total Active Users: "<<current_number_of_user+savings_number_of_user<<endl;
	back_button();
}
void admin::delete_user()
{
	bms();
	int userNo;
    string userName,userPassword,userAccountType;
    cin.ignore();
    cout<<"\n\t\t\t\t\t\t\t\tEnter your Account Type: ";
    getline(cin,userAccountType);
    cout<<"\n\t\t\t\t\t\t\t\tEnter your Account Number: ";
    cin>>userNo;
    cin.ignore();
	cout<<"\n\t\t\t\t\t\t\t\tEnter your Username/Email: ";
    getline(cin,userName);
    cout<<"\n\t\t\t\t\t\t\t\tEnter your Password: ";
    getline(cin,userPassword);
    checking();
    if(userAccountType=="Current"||userAccountType=="current")
    {
		for (int i=0;i<2500;i++)
    	{
	        if(cu[i].current_user_account_number==userNo&&(cu[i].name==userName||cu[i].email==userName)&&cu[i].password==userPassword)
	        {
	        	for(int j=0;j<2499;j++)
	        		cu[j]=cu[j+1];
	        	cout<<"\n\n\t\t\t\t\t\t\t\t\tUser Account Deleted."<<endl;
	        	screen_refreshing();
		    	break;
	        }
		    else
			{
	        	cout<<"\n\n\t\t\t\t\t\t\t\t\tNo Account Exist."<<endl;
	        	screen_refreshing();
	        	break;
			}
		}
	}
    else if(userAccountType=="Savings"||userAccountType=="savings")
    {
    	for(int i=0;i<2500;i++)
    	{
	    	if(su[i].savings_user_account_number==userNo&&(su[i].name==userName||su[i].email==userName)&&su[i].password==userPassword)
		    {
		    	for(int j=0;j<2499;j++)
	        		su[j]=su[j+1];
			   	cout<<"\n\n\t\t\t\t\t\t\t\t\tUser Account Deleted."<<endl;
	        	screen_refreshing();
				break;
		    }
			else
			{
		      	cout<<"\n\n\t\t\t\t\t\t\t\t\tNo Account Exist."<<endl;
		       	screen_refreshing();
		       	break;
			}
		}
	}
	else
	{
        cout<<"\n\n\t\t\t\t\t\t\t\t\tNo Account Exist."<<endl;
        screen_refreshing();
	}
}

class actual:virtual public user,virtual public admin
{
	public:
		void homepage();
};

void actual::homepage()
{
	bool check=true;
	while(check)
	{
		bms();
		cout<<"\t\t\t\t\t\t\t\t\t         |Main Menu|       "<<endl;
		cout<<"\t\t\t\t\t\t\t\t\t __________________________"<<endl;
		cout<<"\t\t\t\t\t\t\t\t\t|      |                   |"<<endl;
		cout<<"\t\t\t\t\t\t\t\t\t|  1.  |  Enter as Admin.  |"<<endl;
		cout<<"\t\t\t\t\t\t\t\t\t|______|___________________|"<<endl;
		cout<<"\t\t\t\t\t\t\t\t\t|      |                   |"<<endl;
		cout<<"\t\t\t\t\t\t\t\t\t|  2.  |  Enter as User.   |"<<endl;
		cout<<"\t\t\t\t\t\t\t\t\t|______|___________________|"<<endl;
		cout<<"\t\t\t\t\t\t\t\t\t|                          |"<<endl;
		cout<<"\t\t\t\t\t\t\t\t\t|          0. Exit         |"<<endl;
		cout<<"\t\t\t\t\t\t\t\t\t|__________________________|"<<endl<<endl;
		cout<<"\t\t\t\t\t\t\t\t\tEnter your choice: ";
		cin>>choice;
		switch(choice)
		{
			loading();
			case 1:
			{
				admin_homepage();
				break;
			}
			case 2:
			{
				user_homepage();
				break;
			}
			case 0:
			{
				check=false;
				cout<<endl<<"\t\t\t\t\t\t\t\t\t\tProgram Exit."<<endl;
				break;
			}
			default:
			{
				cout<<"\n\n\t\t\t\t\t\t\t\t\t\tInvalid Number."<<endl;
				screen_refreshing();
				break;
			}
		}
	}
}

int main()
{
	system("color 0B");
	actual e;
	e.homepage();
	return 0;
}