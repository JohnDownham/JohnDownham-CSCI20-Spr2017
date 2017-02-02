//Created By: John Downham
 //Created On: 2/2/2017
 
 #include <iostream>
 using namespace std;
 
 int main()
 {
     int currentPop=324458075;
     int addPopAYear= 2147967;
     int yearChosen= 0;
     int yearPlus= currentPop + (addPopAYear * yearChosen);
     
     cout<< "The Current Population in the USA is "<< currentPop;
     cout<<endl;
     cout<<endl;
     cout<< "A Child is Born Every 8 Secounds"<< endl;
     cout<< "A Person Dies Every 11 Secounds"<< endl;
     cout<< "An Imigrant Joins our Population Every 29 Secounds"<< endl;
     cout<<endl;
     cout<< "Enter any Number of years to see what the Approximate Population will Be that Year"<<endl;
     cin >> yearChosen;
     cout<<"In "<< yearChosen + 2017<<" The Population in the USA will be Approximatly"<<endl;
     cout<<yearChosen * addPopAYear + currentPop;
     
     
    return 0;
 }