#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	int momopin, momo_pin, balance, wbalance, option, number, send, airtime_amount, pin, new_pin, lim, pin_lim, ibalance, nbalance;
	momopin = 0000;
	wbalance = 1000;
	balance = wbalance;
	lim = 6 * 100000000;
	pin_lim = 10000;
	start:
	cout << "Welcome to Mary's Mobile Tranfer Services"<<endl;
	cout << "Please Select From The Options Below The Index of Choice"<<endl;
	cout << "1. Transfer Money"<<endl;
	cout << "2. Buy Airtime"<<endl;
	cout << "3. Check Account Balance"<<endl;
	cout << "4. Change Pin" << endl;
	cout << "5. Exit"<<endl;
	cin >> option;
	if (option==1) {
	system("CLS");
		cout << "Enter Momo Number" << endl;
	continue_2:
		cin >> number;
		goto crosscheck;
	continue_1:
		cout << "Enter amount to send" << endl;
		cin >> send;
		cout << "Kindly wait for authentication"<<endl;
			system("PAUSE");
		if (send <= balance){
			ibalance = balance - send;
			balance = ibalance;
				goto authentication_1;
			} else {
				system("CLS");
				cout << "Issuficient Balance"<<endl;
				goto end;
			}
		}else if (option==2) {
			system("CLS");
			cout << "Enter Number" << endl;
	continue_4:
			cin >> number;
			goto crosscheck_1;
	continue_3:
			cout << "Enter Amount"<<endl;
			cin >> airtime_amount;
			cout << "Kindly wait for authentication"<<endl;
			system("PAUSE");
			if (airtime_amount <= balance){
				nbalance = balance - airtime_amount;
				balance = nbalance;
				goto authentication_1;
			} else {
				system("CLS");
				cout << "Issuficient amount"<<endl;
				cout << "Please try again" << endl;
				goto end;
			}
		} else if(option==3){
			system("CLS");
			cout << "Enter Mobile Money Pin"<<endl;
			cin >> momo_pin;
			system("CLS");
		if (momo_pin == momopin){
			cout <<"Your New Balance is:"<<" "<< balance << endl;
			goto end;
		}
			else {
				goto authentication_12;
			}
		} else if (option==4){
			system("CLS");
			cout << "Enter Old or Default Pin" << endl;
			cin >> pin;
			system("CLS");
			if (pin==momopin){
		up:
			cout << "Enter New Pin" << endl;
				cin >> new_pin;
				if (new_pin >= 1000){
					goto crosscheck_4;
				} else {
				cout << "Input is not valid" << endl;
				cout << "A pin should be a four digit number greater than 1000" << endl;
				cout << "Try Again"<< endl;
				goto up;
				}
			system:
				system("CLS");
				momopin = new_pin;
				cout << "Pin Has Been Updated"<< endl;
				goto end;
			} else {
				goto authentication_22;
			}
		} else if (option==5) {
				system("CLS");
			cout << "Thank You for your time"<< endl;
			goto end_1;
		} else {
			cout << "The input is not valid"<< endl;
			cout << "Try again" << endl;
			system("PAUSE");
			goto end;
		}
		goto end;
		authentication_1:
			cout << "Authenticating" << endl;
			cout << "Enter Mobile Money Pin" << endl;
			cin >> momo_pin;
			system("CLS");
			if (momo_pin == momopin){
		check:
				cout << "Transaction Was Successful" << endl;
				goto end;
		} else {
			goto authentication_2;
		}
		authentication_2:
			cout << "Authenticating" << endl;
			cout << "Incorrect mobile money pin, you have two chances left" << endl;
			cout << "Re-enter the mobile money pin or press 0 to exit" << endl;
			cin >> momo_pin;
			system("CLS");
			if (momo_pin == momopin){
				goto check;
			} else if (momo_pin == 0){
				goto end_1;
			} else {
				goto authentication_3;
			}
		authentication_3:
			cout << "Authenticating" << endl;
			cout << "You have entered an incorrect pin twice"<< endl;
			cout << "Re-enter or press 0 to exit"<< endl;
			cin >> momo_pin;
			system("CLS");
			if (momo_pin == momopin){
				goto check;
			} else if (momo_pin == 0){
				goto end_1;
			} else {
				cout << "You have exceeded your limit"<< endl;
				goto end_1;
			}
			authentication_12:
			cout << "Authenticating" << endl;
			cout << "Incorrect mobile money pin, you have two chances left" << endl;
			cout << "Re-enter the mobile money pin or press 0 to exit" << endl;
			cin >> momo_pin;
			system("CLS");
			if (momo_pin == momopin){
				cout << "Your New Balance is:"<< " " << balance << endl;
				goto end;
			} else if (momo_pin == 0){
				goto end_1;
			} else {
				goto authentication_13;
			}
		authentication_13:
			cout << "Authenticating" << endl;
			cout << "You have entered an incorrect pin twice"<< endl; 
			cout << "Re-enter or press 0 to exit"<< endl;
			cin >> momo_pin;
			system("CLS");
			if (momo_pin == momopin){
				cout <<"Your New Balance Is:"<<" "<< balance << endl;
				goto end;
			} else if (momo_pin == 0){
				goto end_1;
			} else {
				cout << "You have exceeded your limit"<< endl;
				goto end_1;
			}
		authentication_22:
			cout << "Authenticating" << endl;
			cout << "Incorrect mobile money pin, you have two chances left" << endl;
			cout << "Re-enter the mobile money pin or press 0 to exit" << endl;
			cin >> pin;
			system("CLS");
			if (pin == momopin){
				goto up;
			} else if (pin == 0){
				goto end_1;
			} else {
				goto authentication_33;
			}
		authentication_33:
			cout << "Authenticating" << endl;
			cout << "You have entered an incorrect pin twice"<< endl; 
			cout << "Re-enter or press 0 to exit"<< endl;
			cin >> pin;
			system("CLS");
			if (pin == momopin){
				goto up;
			} else if (momo_pin == 0){
				goto end_1;
			} else {
				cout << "You have exceeded your limit"<< endl;
				goto end_1;
			}
		crosscheck:
			if(number > 0200000000){
				goto crosscheck_2;
			}else {
				cout << "Number is invalid" << endl;
				cout << "Re-enter number" << endl;
				goto continue_2;
			}
		crosscheck_1:
			if(number > 0200000000){
				goto crosscheck_3;
			}else {
				cout << "Number is invalid" << endl;
				cout << "Re-enter number" << endl;
				goto continue_4;
			}
		crosscheck_2:
			if (number < lim){
				goto continue_1;
			} else {
				cout << "Number is invalid" << endl;
				cout << "Re-enter number" << endl;
				goto continue_2;
			}
		crosscheck_3:
			if (number < lim){
				goto continue_3;
			} else {
				cout << "Number is invalid" << endl;
				cout << "Re-enter number" << endl;
				goto continue_4;
			}
		crosscheck_4:
			if (new_pin <= pin_lim){
				goto system;
			} else {
				cout << "Input is not valid" << endl;
				cout << "A pin should be a four digit number less than 10,000" << endl;
				cout << "Try Again"<< endl;
				goto up;
			}
			end:
				cout << "Program is restarting" << endl;
				system("PAUSE");
				system("CLS");
				goto start;
			end_1:
				cout << "Program is shutting down";
	return 0;
}
