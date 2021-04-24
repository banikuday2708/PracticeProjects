#include<iostream>
#include<string.h>
#include<iomanip>

using namespace std;

/*Add-ons Unavailable natively*/
// COORD c={0,0};

/*void gotoxy(int x,int y){
  auto c;
  c.X=x; //X-Co-ordinate or Abscissa
  c.Y=y; //Y-Co-ordinate or Ordinate

  SetConsoleCursorPositionHandle(GetStdHandle(STD_OUTPUT_HANDLE),c);
}*/

/*Account Class for all the variable properties of an Account in the bank*/
class Account{
protected:
  string FirstName;
  string LastName;
  string Password;
  string Username;
  long int DateofBirth;
  string AccountNmber;
  float Balance;

public:
  string AccountNumber();
/*  int CreateAccount();
  int DisplayRecord();
  int SearchRecord();
  int Withdrawal();
  int Deposit();
  int ModifyID();
  int AccountRemove();*/
};

string Account::AccountNumber(){
  long int a=rand()%1000000000000000;
  string accNumber = to_string(a);
  return accNumber;
}

/*int Account::CreateAccount(){
  FILE *fp;
  char s[15];
//  Account.AccountNmber=AccountNumber();
  std::cout<<"Enter first name : ";
  std::cin>>FirstName;
  std::cout<<"Enter last name : ";
  std::cin>>LastName;
  fflush(stdin);
  std::cout<<"Enter password : ";
  std::cin>>Password;
  fflush(stdin);
  std::cout<<"Enter date of birth : ";
  std::cin>>DateofBirth;
  fflush(stdin);
  std::cout<<"Enter username : ";
  std::cin>>Username;
  fflush(stdin);
  std::cout<<"Minimum deposit amount is 5000\n";
  std::cin>>Balance;
  fflush(stdin);
}*/

/*int Account::DisplayRecord();
int Account::SearchRecord();
int Account::Withdrawal();
int Account::Deposit();
int Account::ModifyID();
int Account::AccountRemove();
*/
int main(){
  int n;
  Account newAcc;
//  gotoxy(35,3);
  std::cout<<setw(35)<<"Welcome to SBI bank";
  std::cout<<"Menu";
  std::cout<<"1. Create account";
  std::cout<<"2. Display records:";
  std::cout<<"3. Search records:";
  std::cout<<"4. Withdrawal of money:";
  std::cout<<"5. Deposit of money:";
  std::cout<<"6. Modify ID:";
  std::cout<<"7. Remove Account:";
  std::cout<<"8. Exit from the system:\n";
  std::cout<<"Enter option:";
  std::cin>>n;
  /*do{switch(n){
    case 1:
    newAcc.CreateAccount();
    break;
    case 2:
    newAcc.DisplayRecord();
    break;
    case 3:
    newAcc.SearchRecord();
    break;
    case 4:
    newAcc.Withdrawal();
    break;
    case 5:
    newAcc.Deposit();
    break;
    case 6:
    newAcc.ModifyID();
    break;
    case 7:
    newAcc.AccountRemove();
    break;
    case 8:
    exit(0);
    break;
    default:
    std::cout<<"Error! Check your option again!";
    break;
  }
}
while(n>8);*/
return 0;
}
