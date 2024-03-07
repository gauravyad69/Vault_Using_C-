#include <iostream>
#include <fstream>
using namespace std;


void print(string s){
    cout<<s<<endl;
};


int main(){


  int vaultno;
  string vault;
  int selectedOption;

   print("  ██    ██  █████  ██    ██ ██      ████████  ");
   print("  ██    ██ ██   ██ ██    ██ ██         ██     ");
   print("  ██    ██ ███████ ██    ██ ██         ██     ");
   print("   ██  ██  ██   ██ ██    ██ ██         ██     ");
   print("    ████   ██   ██  ██████  ███████    ██    ");
    print("---------------------------------------------");
    print("1. Create New Vault");
    print("2. Read Vault");
    print("3. Exit");
    
    cin>>selectedOption;

    if (selectedOption==3){
        print("Bye Bye");
        exit;

    }else if (selectedOption==2){
        


 string myText;
    int vault;
    print("Please Enter Your Vault Number You Want to Read: ");
    cin>>vault;
    print("------------------------------------------------------");
    string teg = to_string(vault);
    ifstream MyReadFile(teg+"vault.txt");

if (MyReadFile.is_open()) { 
     while (getline (MyReadFile, myText)) {
     cout << myText<<endl;
    }
 }else{
    cerr<<"Error Opening the file/ Either The File Has Been Deleted"<<endl;
 }
MyReadFile.close(); 

    print("------------------------------------------------------");



    }
    else if (selectedOption==1)
    {


    print("------------------------------------------------------");


    int vault;
    char additionaldataChecker;
    print("Please Enter Your Vault Number You Want to Save or Overwrite");
    cin>>vault;

    string name, age, city, additionaldata;
    print("Name: ");
    cin>>name;
    print("Age: ");
    cin>>age;
    print("City: ");
    cin>>city;

    print("Do You Want To Add Any Additional Data? y/n");
    cin>> additionaldataChecker;
    if (additionaldataChecker=='y')
    {
        print("Enter Your Additional Data: ");
        cin>>additionaldata;
    }
    string teg =  to_string(vault);
      std::ofstream outputFile(teg+"vault.txt"); // create a new output file or overwrite an existing one

  if (outputFile.is_open()) { 

    if(additionaldataChecker=='n'){
    outputFile << name<< "\n" << age<< "\n" << city; 
    } else{
     outputFile << name<< "\n" << age<< "\n" << city << "\n"<< additionaldata; 
    }
    outputFile.close();
    cout<<"Your Data Was Sucessfully written to "<<teg+"vault.txt"<<"\n";

  }
  else {
    std::cerr << "Error opening file\n";
  }





    }
    
    


  
    print("---------------------------------------------");

    return 0;
}