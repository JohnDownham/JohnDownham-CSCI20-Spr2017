//Created By: John Downham
 //Created On: 2/6/2017
 /*Project intended to run as a coinStar type calculater
 by inserting an amount of currency it will show you what you would recieve 
 after taking out a small fee 
 I also programmed it to show what the coins recieved would be*/
 
 
 
 #include <iostream>
 using namespace std;
 
 int main()
 {
     int changeRecieved= 0;
     cout<< "You gave us this "<<endl; 
     cin>> changeRecieved; //user entered amount
     cout << "Which converts to this  $" << changeRecieved * 0.01 << endl;
     double feeCharged= changeRecieved * .109  ; //fee charged by machine for counting your money
     
     int changeAfterFee= changeRecieved - feeCharged; //amount to break down into dollars and cents after fee
     
     
int numDollers=changeAfterFee/100; //number of dollars to be taken 
int valueDollers= numDollers * 100; //value of dollars taken from overall amount
     int numQuarters=  (changeAfterFee % valueDollers) / 25  ; //number of quarters to be taken (Modulo requirement used here)
    int valueQuarters = numQuarters * 25; // value of quarters taken from overall amount
     int numDimes= (changeAfterFee - valueDollers - valueQuarters) / 10 ; //number of dimes to be taken
     int valueDimes= numDimes * 10; // value of dimes taken from overall amount
     int numNickels= (changeAfterFee - valueDollers - valueQuarters - valueDimes) / 5; // number of nickels to be taken
     int valueNickels= numNickels * 05; // value of nickels taken from overall amount
     int numPennies = (changeAfterFee -valueDollers -valueQuarters-valueDimes-valueNickels) / 1; //number of pennies to be taken
     int valuePennies= numPennies * 01; // value of pennies taken from overall amount
     double totalInChange= valueDollers+ valueQuarters + valueDimes + valueNickels + valuePennies; //total value of all coins remaing after fee
     
     
     cout << "our fee is 10.9% which equals $" << feeCharged * 0.01 << endl; //displays taken fee
     cout << "giving you a total voucher of $" << totalInChange * 0.01<< endl; // displays the value remaining
     cout << "which breaks down to this" << endl; //next two lines break value down by dollars and cents
      cout <<"numDollers "<< numDollers <<" numQuarters "<< numQuarters <<" numDimes"<< numDimes <<" numNickels"<< numNickels <<" numPennies"<< numPennies<< endl;
     
     return 0; //ends program
 }