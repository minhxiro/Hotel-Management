#include <iostream>

using namespace std;

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

    cout << "Your type of room: " << endl << endl;

    if(user_select2 == 1) {
        cout << single.description << endl;
        cout << single.price << endl;
        cout << single.images << endl;
    }
    else if(user_select2 == 2) {
        cout << double_room.description << endl;
        cout << double_room.price << endl;
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
// To return to main menu
int menu() {
    int user_enter;
    cout << "Select your option: " << endl;
    cout << endl;

    cout << "1.Sign in" << endl;
    cout << "2.View Rooms" << endl;
    cout << "3.Register" << "\n\n";
    cout << "----------------------------" << "\n";
    cin >> user_enter;
    
    // Cal function select
    if(user_enter == 2) {
        
        type_of_room();
    }

    return 0;
}
//Sign in 

 int sign_in() {
    int exit;
    string username;
    string password;
    cout<< "Username: ";
    cin >> username;
    cout << "Password: ";
    cin >> password;

    cout << "Continue? Press 1" << endl;
    cout << "Exit? Press 2" << endl;
    cin >> exit;

    if(exit == 1) {
        type_of_room();
    }
    else if(exit == 2) {
        menu();
    }
    return 0;
}


int main() {
    int user_enter;
    cout << "Select your option: " << endl;
    cout << endl;

    cout << "1.Sign in" << endl;
    cout << "2.View Rooms" << endl;
    cout << "3.Register" << "\n\n";
    cout << "----------------------------" << "\n";
    cin >> user_enter;
    
    // Cal function select
    if(user_enter == 2) {
        
        type_of_room();
    }
    else if(user_enter == 1) {
        sign_in();
    }

    return 0;
}