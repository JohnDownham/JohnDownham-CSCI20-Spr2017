//Created By: John Downham
 //Created On: 2/6/2017
 //Project intended to run as a coinStar type calculater
 
 
 #include <iostream>
 using namespace std;
 
 int main()
 {
     int changeRecieved= 0;
     cout<< "You gave us this "<<endl; 
     cin>> changeRecieved;
     cout << "Which converts to this  $" << changeRecieved * 0.01 << endl;
     double feeCharged= changeRecieved * .109  ;
     
     int changeAfterFee= changeRecieved - feeCharged;
     
     
int numDollers=changeAfterFee/100;
int valueDollers= numDollers * 100;
     int numQuarters=  (changeAfterFee % valueDollers) / 25  ;
    int valueQuarters = numQuarters * 25; 
     int numDimes= (changeAfterFee - valueDollers - valueQuarters) / 10 ;
     int valueDimes= numDimes * 10;
     int numNickels= (changeAfterFee - valueDollers - valueQuarters - valueDimes) / 5;
     int valueNickels= numNickels * 05;
     int numPennies = (changeAfterFee -valueDollers -valueQuarters-valueDimes-valueNickels) / 1;
     int valuePennies= numPennies * 01;
     double totalInChange= valueDollers+ valueQuarters + valueDimes + valueNickels + valuePennies;
     
     
     cout << "our fee is 10.9% which equals $" << feeCharged * 0.01 << endl;
     cout << "giving you a total voucher of $" << totalInChange * 0.01<< endl;
     cout << "which breaks down to this" << endl;
      cout <<"numDollers "<< numDollers <<" numQuarters "<< numQuarters <<" numDimes"<< numDimes <<" numNickels"<< numNickels <<" numPennies"<< numPennies<< endl;
     return 0;
 }