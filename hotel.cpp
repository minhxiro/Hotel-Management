#include <iostream>
#include <fstream>


using std::cin;
using std::string;
using std::cout;
using std::endl;

//Create object and class about the room

class Room {
    public:
        string description;
        int price;
        string images;
    
    // Create constructor for 4 type of rooms

    Room(string description_single, int price_single, string images_single) {
        description = description_single;
        price = price_single;
        images = images_single;
        
    }

};

//Logical statement after user make their selection
void user_selection2(int user_select2) {
    // Assign value for single room
    Room single("sdadasdas", 120, "Inavlid");
    Room double_room("sdadasdas", 213, "Inavlid");
    Room triple("sdadasdas", 43, "Inavlid");
    Room penta("sdadasdas", 54, "Inavlid");

    cout << "Your type of room: " << "\n\n";

    if(user_select2 == 1) {
        cout << single.description << "\n";
        cout << single.price << "\n";
        cout << single.images << "\n";
    }
    else if(user_select2 == 2) {
        cout << double_room.description << "\n";
        cout << double_room.price << "\n";
        cout << double_room.images << endl;
    }
    else if(user_select2 == 3) {
        cout << triple.description << endl;
        cout << triple.price << endl;
        cout << triple.images << endl;
    }
    else if(user_select2 == 4) {
        cout << penta.description << endl;
        cout << penta.price << endl;
        cout << penta.images << endl;
    }

    
}

void type_of_room() {
    int user_select2;
    cout << "Please select the type of rooms: " << endl << endl;
    cout << "1.Single" << endl << endl;
    cout << "2.Double" << endl << endl;
    cout << "3.Tripple" << "\n\n";
    cout << "4. Penta" << "\n\n";
    cout << "--------------------" << endl;

    cin >> user_select2;
    while(user_select2 < 1 && user_select2 > 4) {
        cout << "Invalid input, re enter" << endl;
        cin >> user_select2;
    }

    // Call the logical function
    user_selection2(user_select2);

}

//Sign in 
class user{
    private:
        string user_name;

    public:
    void get_user_information() {
        std::fstream file;
        file.open("pass.dat", std::ios::in);
        file >> user_name;
        file.close();
    }
    void check_password(string pass, string username) {
        if((user_name.find(pass) != std::string::npos) && (user_name.find(username) != std::string::npos)) {
            cout << "Congratulation";
        }
        else cout <<"Wrong username or password";

    }
    
    
};

 int sign_up() {
    string user_name;
    string password;
    cout << "Enter username: " << "\n";
    cin >> user_name;
    cout << "Enter password: " << "\n";
    cin >> password;
    std:: fstream file;
    file.open("pass.dat", std::ios::out);
    if(!file) {
        std::cerr << "error to open file";
    }
   file << user_name;
   file << password; 
   file.close();
   return 0;
}

void sign_in() {
    user client;
    string pass;
    string username;
    cout << "Please enter your username: " <<"\n\n" <<"------------------------------\n";
    cin >> username;
    cout << "Please enter your password: " <<"\n\n" <<"------------------------------\n";
    cin >> pass;
    client.get_user_information();
    client.check_password(pass, username);
}

int main() {
    cout << "----------------------" << endl << endl;
    cout << "Created by Minh Dinh" <<endl << endl;
    cout << "---------------------" << endl << endl;
    int user_enter;
    cout << "Select your option: " << endl<<endl;

    cout << "1.Sign in" << endl;
    cout << "2.View Rooms" << endl;
    cout << "3.Register" << "\n\n";
    cout << "----------------------------" << "\n";
    cin >> user_enter;
    
    // Cal function select
    if(user_enter == 2) {
        
        type_of_room();
    }
    else if(user_enter == 3) {
        sign_up();
    }
    else if(user_enter == 1) {
        sign_in();
    }

    
    return 0;
}
