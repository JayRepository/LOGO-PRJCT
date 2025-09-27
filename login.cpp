#include <iostream>
#include <string>
using namespace std;

int main(){

    string savedUser, savedPass;
    string choice, username, password;
    
    
    while(true){
        cout << "\n**********MENU************\n";
        cout << "============================\n";
        cout << "1. Sign Up\n";
        cout << "2. Log In\n";
        cout << "3. Exit\n";
        cout << "============================\n";
        cout << "****************************\n";
        getline(cin, choice);

        if(choice == "1"){
            cout << "Enter a username: ";
            getline(cin, savedUser);

            cout << "Enter a password: ";
            getline(cin, savedPass);
            
            cout << "\nSign Up Succesful!\n";
            
        }
        else if(choice == "2"){
            cout << "Enter your username: ";
            getline(cin, username);

            cout << "Enter your password: ";
            getline(cin, password);

            if(username == savedUser && password == savedPass){
                cout << "\nLogin Successful!\n";
            }
            else{
                cout << "\nLogin Failed! Incorrect username or password.\n";
            }
        }
        else if(choice == "3"){
            cout << "\nARIGATO GOZAIMASU!\n";
            break;
        }
        else{
            cout << "\nInvalid choice. Please try again.!\n";
        }
        
    }
    return 0;
}