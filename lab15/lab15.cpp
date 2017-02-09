//Created By: John Downham
//Created On: 2/6/2017
/*Project intended to run as a madlib generator using 9 variables 
to create a funny story*/
 
 
 
 #include <iostream>
 #include <string> // supports string type data 
 using namespace std;
 
 int main()
 {
 string name; //all below string variables will store an entry and form together at the end to form a story
 string feeling;
 string place;
 string time;
 string animal;
 string naturalDisaster;
 string name2;
 string wayToDie;
 string howISurvived;
 
 cout<< "enter a name"<< endl; //this is where the user enters the string values
 getline (cin,name);
 cout<< "enter another name"<<endl;
 getline (cin,name2);
 cout<< "enter a place"<<endl;
 getline (cin,place);
 cout<< "enter a feeling"<<endl;
 getline (cin,feeling);
 cout<< "enter a time"<<endl;
 getline (cin,time);
 cout<< "enter a type of animal"<<endl;
 getline (cin,animal);
 cout<< "enter a type of natural disaster"<<endl;
 getline (cin,naturalDisaster);
 cout<< "enter a way to die"<<endl;
 getline (cin,wayToDie);
 cout<< "enter how you would survive"<<endl;
 getline (cin,howISurvived);
 
 
 //and this is the story 
 cout<< "Hello " << name<< " I'm not sure how to tell you this but at "<< time << " Yesterday"<<endl;
 cout<< name2 << " was " << wayToDie << " by an " << animal << " that was set loose due to a "<<naturalDisaster<< "."<< endl;
 cout<< "The good news is I used "<< howISurvived<< " just in time to avoid "<< name2 << "'s rotten luck."<< endl;
 cout<< "anyways, "<< name<< " it's "<< time<< " and I have to go feed my "<< animal << " its at the "<< place<< endl;
 cout << "and it gets a little "<< feeling << " right after a kill."<<endl;
 cout<< "Have a nice day!!"<< endl;
 
 
 
 return 0; //ends program
 
 }