
Conversation opened. 1 unread message.

Skip to content
Using The University of Hong Kong Mail with screen readers

1 of 7,095
(no subject)
Inbox
x

GAO, ENGE
Attachments
10:16 PM (41 minutes ago)
to me

Attachments area

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

// determine the structure

struct record{
  string ID;
  string name;
  char gender;
  int age;
  string department;
  string position;
  string birthday;
  string entry_date;
  string expiration_date;
  int salary;
  string employment_status;
  string attribute;
};

// function of printing all information of an existing employee

void print_information(record store[],int total){
	cout << "  ID                : " << store[total].ID << endl;
    cout << "  NAME              : " << store[total].name << endl;
    cout << "  GENDER            : " << store[total].gender << endl;
    cout << "  AGE               : " << store[total].age << endl;
    cout << "  DEPARTMENT        : " << store[total].department << endl;
    cout << "  POSITION          : " << store[total].position << endl;
    cout << "  BIRTHDAY          : " << store[total].birthday << endl;
    cout << "  ENTRY DATE        : " << store[total].entry_date << endl;
    cout << "  EXPIRTATION DATE  : " << store[total].expiration_date << endl;
    cout << "  SALARY            : " << store[total].salary << endl;
    cout << "  EMPLOYMENT STATUS : " << store[total].employment_status << endl;
    cout << "  ATTRIBUTE         : " << store[total].attribute << endl;
    cout << endl;
    cout << endl;
}

// function of adding a new employee

void add_Employee(record store[],int &total){
  cout << "Please enter the ID of the new employee: ";
  cin >> store[total].ID;
  cout << "Please enter the name of the new employee: ";
  cin >> store[total].name;
  cout << "Please enter the gender of the new employee: ";
  cin >> store[total].gender;
  cout << "Please enter the age of the new employee: ";
  cin >> store[total].age;
  cout << "Please enter the department of the new employee: ";
  cin >> store[total].department;
  cout << "Please enter the position of the new employee: ";
  cin >> store[total].position;
  cout << "Please enter the birthday of the new employee: ";
  cin >> store[total].birthday;
  cout << "Please enter the entry date of the new employee: ";
  cin >> store[total].entry_date;
  cout << "Please enter the expiration date of the new employee: ";
  cin >> store[total].expiration_date;
  cout << "Please enter the salary of the new employee: ";
  cin >> store[total].salary;
  store[total].employment_status = "On the job";
  cout << "Please enter the attribute of the new employee: ";
  cin >> store[total].attribute;
  cout << endl;

  cout << "ADDED SUCCESSFULLY!" << endl;
  cout << endl;
  cout << "THE INFORMATION OF THE NEW EMPLOYEE " << store[total].name << " :" << endl;

  cout << "ID                : " << store[total].ID << endl;
  cout << "NAME              : " << store[total].name << endl;
  cout << "GENDER            : " << store[total].gender << endl;
  cout << "AGE               : " << store[total].age << endl;
  cout << "DEPARTMENT        : " << store[total].department << endl;
  cout << "POSITION          : " << store[total].position << endl;
  cout << "BIRTHDAY          : " << store[total].birthday << endl;
  cout << "ENTRY DATE        : " << store[total].entry_date << endl;
  cout << "EXPIRTATION DATE  : " << store[total].expiration_date << endl;
  cout << "SALARY            : " << store[total].salary << endl;
  cout << "EMPLOYMENT STATUS : " << store[total].employment_status << endl;
  cout << "ATTRIBUTE         : " << store[total].attribute << endl;

  total++;
}

// function of searching by basic information

void search_Employee(record store[], int num){
	int num_result=0;
	record * result = new record [num];
	int n, i;
	int ansint;
	string ans;
	char anschar;
	cout << "***************************" << endl;
	cout << "  1  :  ID  " << endl;
	cout << "  2  :  Name  " << endl;
	cout << "  3  :  Gender  " << endl;
	cout << "  4  :  Age  " << endl;
	cout << "  5  :  Department  " << endl;
	cout << "  6  :  Position  " << endl;
	cout << "  7  :  Birthday  " << endl;
	cout << "  8  :  Entry Date  " << endl;
	cout << "  9  :  Expiration Date  " << endl;
	cout << " 10  :  Employment Status  " << endl;
	cout << "***************************" << endl;
	cout << "Please enter the order number of the category that you want to search through:" << endl;
	cin >> n ;
	cout << "Please enter the key words that you want to search for:" << endl;
	if (n==4){

	    cin >> ansint ;
    }
    else{

    	cin >> ans;
	}
	cout << "No." ;
	switch (n){
		case 1:
			for (i=0;i<num;i++){
				if (store[i].ID==ans){
					cout << num_result << endl;
					print_information(store,i);
					result[num_result]=store[i];
					num_result+=1;

				}

			}
			if (num_result==0){
				cout << "Not Found!" << endl;
			}
			else{
				cout << "Total " << num_result << " records." << endl;
			}
			break;
		case 2:

			for (i=0;i<num;i++){
				if (store[i].name==ans){
					cout << num_result << endl;
					print_information(store,i);
					result[num_result]=store[i];
					num_result+=1;
				}

			}
			if (num_result==0){
					cout << "Not Found!" << endl;
				}
				else{
					cout << "Total " << num_result << " records." << endl;
			}
			break;
		case 3:
			anschar=ans[0];
			for (i=0;i<num;i++){
				if (store[i].gender==anschar){
					cout << num_result << endl;
					print_information(store,i);
					result[num_result]=store[i];
					num_result+=1;
				}

			}
			if (num_result==0){
					cout << "Not Found!" << endl;
				}
				else{
					cout << "Total " << num_result << " records." << endl;
			}
			break;
		case 4:

			for (i=0;i<num;i++){
				if (store[i].age==ansint){
					cout << num_result << endl;
					print_information(store,i);
					result[num_result]=store[i];
					num_result+=1;
				}

			}
			if (num_result==0){
				cout << "Not Found!" << endl;
			}
			else{
				cout << "Total " << num_result << " records." << endl;
			}
			break;
		case 5:
			for (i=0;i<num;i++){
				if (store[i].department==ans){
					cout << num_result << endl;
					print_information(store,i);
					result[num_result]=store[i];
					num_result+=1;
				}

			}
			if (num_result==0){
				cout << "Not Found!" << endl;
			}
			else{
				cout << "Total " << num_result << " records." << endl;
			}
			break;
		case 6:
			for (i=0;i<num;i++){
				if (store[i].position==ans){
					cout << num_result << endl;
					print_information(store,i);
					result[num_result]=store[i];
					num_result+=1;
				}

			}
			if (num_result==0){
				cout << "Not Found!" << endl;
			}
			else{
				cout << "Total " << num_result << " records." << endl;
			}
			break;
		case 7:
			for (i=0;i<num;i++){
				if (store[i].birthday==ans){
					cout  << num_result << endl;
					print_information(store,i);
					result[num_result]=store[i];
					num_result+=1;
				}

			}
			if (num_result==0){
				cout << "Not Found!" << endl;
			}
			else{
				cout << "Total " << num_result << " records." << endl;
			}
			break;
		case 8:
			for (i=0;i<num;i++){
				if (store[i].entry_date==ans){
					cout << num_result << endl;
					print_information(store,i);
					result[num_result]=store[i];
					num_result+=1;
				}

			}
			if (num_result==0){
				cout << "Not Found!" << endl;
			}
			else{
				cout << "Total " << num_result << " records." << endl;
			}
			break;
		case 9:

			for (i=0;i<num;i++){
				if (store[i].expiration_date==ans){
					cout << num_result << endl;
					print_information(store,i);
					result[num_result]=store[i];
					num_result+=1;
				}

			}

			if (num_result==0){
				cout << "Not Found!" << endl;
			}
			else{
				cout << "Total " << num_result << " records." << endl;
			}

			break;

		case 10:
			for (i=0;i<num;i++){
				if (store[i].employment_status==ans){
					cout  << num_result << endl;
					print_information(store,i);
					result[num_result]=store[i];
					num_result+=1;
				}
			}
			if (num_result==0){
				cout << "Not Found!" << endl;
			}
			else{
				cout << "Total " << num_result << " records." << endl;
			}

			break;
		default:
			cout << "Invalid Order Number!" << endl;
			search_Employee(store, num);
	}
    delete [] result;
}

// function of editing the basic information of an existing employee

void edit(record store[], int num){
	int num_result=0;
	record * result = new record [num];
	string ans_name;
	cout << "Please enter the name of the employee you choose for information editing:" ;
	cin >> ans_name;
	int sequence;

  //get sequence number through emplyee's name looping

  for (int i=0;i<num;i++){
    if (store[i].name==ans_name){
      cout << "No." << i << endl;
      print_information(store,i);
      result[num_result]=store[i];
      num_result+=1;
    }

  }
  if (num_result==0){
  	cout << "Not found the record of " << ans_name << endl;
  }
  else {
  	cout << "Total " << num_result << " records" << endl;
  
  //print the information of target employee before editing
  cout << "Please enter the sequence number of the employee you want to edit:" ;
  cin >> sequence;
  cout << "THE INFORMATION OF " << store[sequence].name << " :" << endl;

  cout << "ID                : " << store[sequence].ID << endl;
  cout << "NAME              : " << store[sequence].name << endl;
  cout << "GENDER            : " << store[sequence].gender << endl;
  cout << "AGE               : " << store[sequence].age << endl;
  cout << "DEPARTMENT        : " << store[sequence].department << endl;
  cout << "POSITION          : " << store[sequence].position << endl;
  cout << "BIRTHDAY          : " << store[sequence].birthday << endl;
  cout << "ENTRY DATE        : " << store[sequence].entry_date << endl;
  cout << "EXPIRTATION DATE  : " << store[sequence].expiration_date << endl;
  cout << "SALARY            : " << store[sequence].salary << endl;
  cout << "EXPLOYMENT STATUS : " << store[sequence].employment_status << endl;
  cout << "ATTRIBUTE         : " << store[sequence].attribute << endl;

  cout << endl;
  cout << endl;

  cout << "Please make sure the employee above is the one you want to edit :)" << endl;
  cout << endl;

  cout << "***************************" << endl;
	cout << "  1  :  ID  " << endl;
	cout << "  2  :  Name  " << endl;
	cout << "  3  :  Gender  " << endl;
	cout << "  4  :  Age  " << endl;
	cout << "  5  :  Department  " << endl;
	cout << "  6  :  Position  " << endl;
	cout << "  7  :  Birthday  " << endl;
	cout << "  8  :  Entry Date  " << endl;
	cout << "  9  :  Expiration Date  " << endl;
	cout << " 10  :  Salary  " << endl;
  cout << "  0  :  FINISH EDITING  " << endl;
	cout << "***************************" << endl;
	cout << "Please enter the order number of the category that you want to edit:" << endl;
    int n;
	cin >> n ;
  while (n != 0) {
    if (n == 1) {
      cout << "This is the original ID of " << store[sequence].name << ": " << store[sequence].ID << endl;
      cout << endl;
      cout << "Please enter the new information: " << endl;
      cin >> store[sequence].ID;
    }
    else if (n == 2) {
      cout << "This is the original name of " << store[sequence].name << ": " << store[sequence].name << endl;
      cout << endl;
      cout << "Please enter the new information: " << endl;
      cin >> store[sequence].name;
    }
    else if (n == 3) {
      cout << "This is the original gender of " << store[sequence].name << ": " << store[sequence].gender << endl;
      cout << endl;
      cout << "Please enter the new information: " << endl;
      cin >> store[sequence].gender;
    }
    else if (n == 4) {
      cout << "This is the original age of " << store[sequence].name << ": " << store[sequence].age << endl;
      cout << endl;
      cout << "Please enter the new information: " << endl;
      cin >> store[sequence].age;
    }
    else if (n == 5) {
      cout << "This is the original department of " << store[sequence].name << ": " << store[sequence].department << endl;
      cout << endl;
      cout << "Please enter the new information: " << endl;
      cin >> store[sequence].department;
    }
    else if (n == 6) {
      cout << "This is the original position of " << store[sequence].name << ": " << store[sequence].position << endl;
      cout << endl;
      cout << "Please enter the new information: " << endl;
      cin >> store[sequence].position;
    }
    else if (n == 7) {
      cout << "This is the original birthday of " << store[sequence].name << ": " << store[sequence].birthday << endl;
      cout << endl;
      cout << "Please enter the new information: " << endl;
      cin >> store[sequence].birthday;
    }
    else if (n == 8) {
      cout << "This is the original entry date of " << store[sequence].name << ": " << store[sequence].entry_date << endl;
      cout << endl;
      cout << "Please enter the new information: " << endl;
      cin >> store[sequence].entry_date;
    }
    else if (n == 9) {
      cout << "This is the original expiration date of " << store[sequence].name << ": " << store[sequence].expiration_date << endl;
      cout << endl;
      cout << "Please enter the new information: " << endl;
      cin >> store[sequence].expiration_date;
    }
    else if (n == 10) {
      cout << "This is the original salary of " << store[sequence].name << ": " << store[sequence].salary << endl;
      cout << endl;
      cout << "Please enter the new information: " << endl;
      cin >> store[sequence].salary;
    }

    cout << endl;
    cout << "THE NEW INFORMATION OF " << store[sequence].name << " :" << endl;

    cout << "ID                : " << store[sequence].ID << endl;
    cout << "NAME              : " << store[sequence].name << endl;
    cout << "GENDER            : " << store[sequence].gender << endl;
    cout << "AGE               : " << store[sequence].age << endl;
    cout << "DEPARTMENT        : " << store[sequence].department << endl;
    cout << "POSITION          : " << store[sequence].position << endl;
    cout << "BIRTHDAY          : " << store[sequence].birthday << endl;
    cout << "ENTRY DATE        : " << store[sequence].entry_date << endl;
    cout << "EXPIRTATION DATE  : " << store[sequence].expiration_date << endl;
    cout << "SALARY            : " << store[sequence].salary << endl;
    cout << "EMPLOYMENT STATUS : " << store[sequence].employment_status << endl;
    cout << "ATTRIBUTE         : " << store[sequence].attribute << endl;
    cout << endl;

    cout << "***************************" << endl;
  	cout << "  1  :  ID  " << endl;
  	cout << "  2  :  Name  " << endl;
  	cout << "  3  :  Gender  " << endl;
  	cout << "  4  :  Age  " << endl;
  	cout << "  5  :  Department  " << endl;
  	cout << "  6  :  Position  " << endl;
  	cout << "  7  :  Birthday  " << endl;
  	cout << "  8  :  Entry Date  " << endl;
  	cout << "  9  :  Expiration Date  " << endl;
  	cout << " 10  :  Salary  " << endl;
    cout << "  0  :  FINISH EDITING  " << endl;
  	cout << "***************************" << endl;
  	cout << "Please enter the order number of the category that you want to edit further:" << endl;
    
  	cin >> n ;
  }

  cout << "EDIT SUCCESSFULLY!" << endl;
  }
  delete [] result;
}

// function of firing an existing employee

void fire(record store[], int num){

	int sequence;

    search_Employee(store, num);

	cout << "Please enter the sequence number of the employee you want to fire:" ;
	cin >> sequence;

	

	store[sequence].employment_status = "Fired";

	cout << store[sequence].name << " is fired!" << endl;
}


// function of printing the order menu

void print_menu(string &order){
  for(int i = 0; i < 57; i++){
    cout << "*";
  }
  cout << endl;
  cout << "******  WELCOME TO THE EMPLOYEE MANAGEMENT SYSTEM  ******" << endl;
  for(int i = 0; i < 57; i++){
    cout << "*";
  }
  cout << endl;
  cout << endl;
  cout << " NUMBER : FUNCITON" << endl;
  cout << "   01   : Add a new employee record" << endl;
  cout << "   02   : Search for employees through basic information" << endl;
  cout << "   03   : Fire an employee" << endl;
  cout << "   04   : Edit the information of an employee" << endl;
  cout << "   05   : Search for employees through salary" << endl;
  cout << "   06   : Edit attribute of an existing employee" << endl;
  cout << "   07   : Reminder" << endl;
  cout << "   08   : Exit" << endl;
  cout << endl;
  for(int i = 0; i < 57; i++){
    cout << "*";
  }
  cout << endl;
  cout << "Please enter your order: ";
  cin >> order;
  for(int i = 0; i < 57; i++){
    cout << "*";
  }
  cout << endl;
  cout << endl;
}

// function of remind upcoming days

void Reminder(record store[], int num){

	int month, birth, i, num_result=0;

	cout << "Please enter the month you want to search for: " << endl;
	cin >> month ;

	for (i=0;i<num;i++){

		birth=(store[i].birthday[4]-'0')*10+(store[i].birthday[5]-'0');

		if (birth==month){

			num_result+=1;
		}

	}

	if (num_result==0){
		cout << "There is no birthdays in this month."<< endl;
	}
	else{
		cout << "Birthdays in this month:" << endl;
		for (i=0;i<num;i++){

		    birth=(store[i].birthday[4]-'0')*10+(store[i].birthday[5]-'0');

	    	if (birth==month){
		    	cout << "  " << store[i].name << "  " << store[i].age << endl;
				cout << "   Birthday: " << store[i].birthday << endl;
				cout << "   Entry date: " << store[i].entry_date << endl;
				cout << "   Expiration date: " << store[i].expiration_date << endl;
			    num_result+=1;
		    }

    	}
    	cout << endl;
	}
	num_result=0;
	for (i=0;i<num;i++){

		birth=(store[i].entry_date[4]-'0')*10+(store[i].entry_date[5]-'0');

		if (birth==month){

			num_result+=1;
		}

	}

	if (num_result==0){
		cout << "There is no entry date in this month."<< endl;
	}
	else{
		cout << "Entry dates in this month:" << endl;
		for (i=0;i<num;i++){

		    birth=(store[i].entry_date[4]-'0')*10+(store[i].entry_date[5]-'0');

	    	if (birth==month){
		    	cout << "  " << store[i].name << "  " << store[i].age << endl;
				cout << "   Birthday: " << store[i].birthday << endl;
				cout << "   Entry date: " << store[i].entry_date << endl;
				cout << "   Expiration date: " << store[i].expiration_date << endl;
			    num_result+=1;
		    }

    	}
    	cout << endl;
	}
	num_result=0;
	for (i=0;i<num;i++){

		birth=(store[i].expiration_date[4]-'0')*10+(store[i].expiration_date[5]-'0');

		if (birth==month){

			num_result+=1;
		}

	}

	if (num_result==0){
		cout << "There is no expiration date in this month."<< endl;
	}
	else{
		cout << "Expiration dates in this month:" << endl;
		for (i=0;i<num;i++){

		    birth=(store[i].expiration_date[4]-'0')*10+(store[i].expiration_date[5]-'0');

	    	if (birth==month){
		    	cout << "  " << store[i].name << "  " << store[i].age << endl;
				cout << "   Birthday: " << store[i].birthday << endl;
				cout << "   Entry date: " << store[i].entry_date << endl;
				cout << "   Expiration date: " << store[i].expiration_date << endl;
			    num_result+=1;
		    }

    	}
    	cout << endl;
	}
}

// function of searching by salary

void search_by_salary(record store[], int num){

	int target, i, comp, num_result=0;
	cout << "Please enter a target salary:";
	cin >> target;

	cout << "***********************************" << endl;
	cout << "  1  :  Greater than" << endl;
	cout << "  2  :  Lower than" << endl;
	cout << "  3  :  Equal to" << endl;
	cout << "  4  :  Greater than or equal to" << endl;
	cout << "  5  :  Lower than or equal to" << endl;
	cout << "***********************************" << endl;
	cout << "Please enter a order number:";
	cin >> comp;

	switch (comp){
		case 1:
			for (i=0;i<num;i++){
				if (store[i].salary>target){
					print_information(store,i);
					num_result+=1;
				}
			}
			if (num_result==0){
				cout << "Not found!" << endl;
			}
			else{
				cout << "Total "<<num_result<< " records" << endl;
			}
			break;
		case 2:
			for (i=0;i<num;i++){
				if (store[i].salary<target){
					print_information(store,i);
					num_result+=1;
				}
			}
			if (num_result==0){
				cout << "Not found!" << endl;
			}
			else{
				cout << "Total "<<num_result<< " records" << endl;
			}
			break;
		case 3:
			for (i=0;i<num;i++){
				if (store[i].salary==target){
					print_information(store,i);
					num_result+=1;
				}
			}
			if (num_result==0){
				cout << "Not found!" << endl;
			}
			else{
				cout << "Total "<<num_result<< " records" << endl;
			}
			break;
		case 4:
			for (i=0;i<num;i++){
				if ((store[i].salary>target) or (store[i].salary==target)){
					print_information(store,i);
					num_result+=1;
				}
			}
			if (num_result==0){
				cout << "Not found!" << endl;
			}
			else{
				cout << "Total "<<num_result<< " records" << endl;
			}
			break;
		case 5:
			for (i=0;i<num;i++){
				if ((store[i].salary<target) or (store[i].salary==target)){
					print_information(store,i);
					num_result+=1;
				}
			}
			if (num_result==0){
				cout << "Not found!" << endl;
			}
			else{
				cout << "Total "<<num_result<< " records" << endl;
			}
			break;
		default:
			cout << "Invalid order number!" << endl ;
			search_by_salary(store,num);
	}
}



//function of sorting

void sort(record store[], int num){
	int num_result=0;
	record * result = new record [num];
	int max_posi, order_num, n, maxint, i, j;
	string maxstr;
	char maxchar;
	record rond={};
	cout << "***************************" << endl;
	cout << "  1  :  ID  " << endl;
	cout << "  2  :  Name  " << endl;
	cout << "  3  :  Gender  " << endl;
	cout << "  4  :  Age  " << endl;
	cout << "  5  :  Department  " << endl;
	cout << "  6  :  Position  " << endl;
	cout << "  7  :  Birthday  " << endl;
	cout << "  8  :  Entry Date  " << endl;
	cout << "  9  :  Expiration Date  " << endl;
	cout << " 10  :  Salary" << endl;
	cout << " 11  :  Employment Status  " << endl;
	cout << "***************************" << endl;
	cout << "Please enter the order number of the category that you want to sort:" << endl;
	cin >> n ;
	cout << "***************************" << endl;
	cout << "  1  :  Descending order" << endl;
	cout << "  2  :  Ascending order" << endl;
	cout << "***************************" << endl;
	cout << "Please choose the sequence number of sort order ( 1 or 2 ): " << endl;
	cin >> order_num;
	for (i=0;i<num;i++){
		result[i]=store[i];

	}
	switch (n){
		case 1:
			for (i=0;i<num;i++){
				maxstr=result[i].ID;
				max_posi=i;
				for (j=i+1;j<num;j++){
					if ( result[j].ID > maxstr ){
						maxstr=result[j].ID;
						max_posi=j;
					}
				}
				if (max_posi!=i){
					rond=result[i];
					result[i]=result[max_posi];
					result[max_posi]=rond;
				}
			}
			break;
		case 2:
			for (i=0;i<num;i++){
				maxstr=result[i].name;
				max_posi=i;
				for (j=i+1;j<num;j++){
					if ( result[j].name > maxstr ){
						maxstr=result[j].name;
						max_posi=j;
					}
				}
				if (max_posi!=i){
					rond=result[i];
					result[i]=result[max_posi];
					result[max_posi]=rond;
				}
			}
			break;
		case 3:
			for (i=0;i<num;i++){
				maxchar=result[i].gender;
				max_posi=i;
				for (j=i+1;j<num;j++){
					if ( result[j].gender > maxchar ){
						maxchar=result[j].gender;
						max_posi=j;
					}
				}
				if (max_posi!=i){
					rond=result[i];
					result[i]=result[max_posi];
					result[max_posi]=rond;
				}
			}
			break;
		case 4:
			for (i=0;i<num;i++){
				maxint=result[i].age;
				max_posi=i;
				for (j=i+1;j<num;j++){
					if ( result[j].age > maxint ){
						maxint=result[j].age;
						max_posi=j;
					}
				}
				if (max_posi!=i){
					rond=result[i];
					result[i]=result[max_posi];
					result[max_posi]=rond;
				}
			}
			break;
		case 5:
			for (i=0;i<num;i++){
				maxstr=result[i].department;
				max_posi=i;
				for (j=i+1;j<num;j++){
					if ( result[j].department > maxstr ){
						maxstr=result[j].department;
						max_posi=j;
					}
				}
				if (max_posi!=i){
					rond=result[i];
					result[i]=result[max_posi];
					result[max_posi]=rond;
				}
			}
			break;
		case 6:
			for (i=0;i<num;i++){
				maxstr=result[i].position;
				max_posi=i;
				for (j=i+1;j<num;j++){
					if ( result[j].position > maxstr ){
						maxstr=result[j].position;
						max_posi=j;
					}
				}
				if (max_posi!=i){
					rond=result[i];
					result[i]=result[max_posi];
					result[max_posi]=rond;
				}
			}
			break;
		case 7:
			for (i=0;i<num;i++){
				maxstr=result[i].birthday;
				max_posi=i;
				for (j=i+1;j<num;j++){
					if ( result[j].birthday > maxstr ){
						maxstr=result[j].birthday;
						max_posi=j;
					}
				}
				if (max_posi!=i){
					rond=result[i];
					result[i]=result[max_posi];
					result[max_posi]=rond;
				}
			}
			break;
		case 8:
			for (i=0;i<num;i++){
				maxstr=result[i].entry_date;
				max_posi=i;
				for (j=i+1;j<num;j++){
					if ( result[j].entry_date > maxstr ){
						maxstr=result[j].entry_date;
						max_posi=j;
					}
				}
				if (max_posi!=i){
					rond=result[i];
					result[i]=result[max_posi];
					result[max_posi]=rond;
				}
			}
			break;
		case 9:
			for (i=0;i<num;i++){
				maxstr=result[i].expiration_date;
				max_posi=i;
				for (j=i+1;j<num;j++){
					if ( result[j].expiration_date > maxstr ){
						maxstr=result[j].expiration_date;
						max_posi=j;
					}
				}
				if (max_posi!=i){
					rond=result[i];
					result[i]=result[max_posi];
					result[max_posi]=rond;
				}
			}
			break;
		case 10:
			for (i=0;i<num;i++){
				maxint=result[i].salary;
				max_posi=i;
				for (j=i+1;j<num;j++){
					if ( result[j].salary > maxint ){
						maxint=result[j].salary;
						max_posi=j;
					}
				}
				if (max_posi!=i){
					rond=result[i];
					result[i]=result[max_posi];
					result[max_posi]=rond;
				}
			}
			break;
		case 11:
			for (i=0;i<num;i++){
				maxstr=result[i].employment_status;
				max_posi=i;
				for (j=i+1;j<num;j++){
					if ( result[j].employment_status > maxstr ){
						maxstr=result[j].employment_status;
						max_posi=j;
					}
				}
				if (max_posi!=i){
					rond=result[i];
					result[i]=result[max_posi];
					result[max_posi]=rond;
				}
			}
			break;
		default:
			cout << "Invalid sequence number of sort order!" << endl;
			sort(store, num);

	}
    if (order_num==1){
    	for (i=0;i<num;i++){
    		print_information(result,i);
		}
	}
	else {
		for (i=num-1;i>-1;i--){
			print_information(result,i);
		}
	}
	delete [] result;
}

// function of editing the attribute of an existing employee

void edit_Attribute(record store[], int num){

	string attribute;
    
	int sequence;



    search_Employee(store, num);

	cout << "Please enter the sequence number of the employee you choose:" ;
	cin >> sequence;

	print_information(store,sequence);
	cout << "Please enter the attribute you want to edit for him/her:";
	cin >> attribute;

	store[sequence].attribute=attribute;

	print_information(store,sequence);
	cout << "Edit the attribute successfully!" << endl;

}

int main(){
  
  int total = 0,num_result = 0;
  int const MAX=10000;

  record store[MAX];
  record * result = new record [MAX];

  string order;
  int x;
  string emply;
  ifstream fin;
  fin.open("input.txt");
  while (fin >> x ){
  	fin >> store[total].ID ;
  	fin >> store[total].name ;
  	fin >> store[total].gender ;
  	fin >> store[total].age;
  	getline(fin,emply);
  	getline(fin,store[total].department) ;
  	getline(fin,store[total].position) ;
  	fin >> store[total].birthday ;
  	fin >> store[total].entry_date ;
  	fin >> store[total].expiration_date ;
  	fin >> store[total].salary ;
  	getline(fin,emply);
  	getline(fin , store[total].employment_status) ;
    getline(fin , store[total].attribute) ;
	total++; 
	
  }
  fin.close();
  string username, password;
  cout << "Please enter your username: ";
  cin >> username;
  cout << "Please enter your password: ";
  cin >> password;
  
  if((username=="ENGG1340") and (password=="Programming")){

  
  print_menu(order);

  while (order != "08") {
    if (order == "01") {
      add_Employee(store,total);
      total+=1;
    }

    else if (order == "02") {
      search_Employee(store,total);
    }

    else if (order == "03") {
      fire(store,total);
    }

    else if (order == "04") {
      edit(store,total);
    }

    else if (order == "05") {
      search_by_salary(store,total);
    }

    else if (order == "06") {
      edit_Attribute(store,total);
    }

    else if (order == "07") {
      Reminder(store,total);
    }

    else {
      cout << "Invalid order! Please enter again!" << endl;
      cout << endl;
    }

    print_menu(order);
  }
  cout << "Thanks for using Staff Management System!";
  }
  else{
	  cout << "Invalid username or password!"<<endl;
	  main(); 
  }
  return 0;
  delete [] result;
}
