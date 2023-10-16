#include <iostream>
#include <string>

using namespace std;

/*
CSC 134
howardt
Haunted House Project
10/16/23
*/

// Function to represent the entrance of the haunted house
void entrance() {
  cout << "You find yourself at the entrance of the haunted house. It's dark "
          "and eerie."
       << endl;
  cout << "What do you want to do?" << endl;
  cout << "1. Enter the house" << endl;
  cout << "2. Run away" << endl;
}

// Function to represent a creepy room inside the haunted house
void creepyRoom() {
  cout << "You enter a creepy room with flickering candles and cobwebs "
          "everywhere."
       << endl;
  cout << "What do you want to do in this room?" << endl;
  cout << "1. Examine the creepy painting on the wall" << endl;
  cout << "2. Search for hidden objects" << endl;
  cout << "3. Go back to the entrance" << endl;
}

int main() {
  string playerName;
  int choice;

  cout << "Welcome to the Haunted House Adventure Game!" << endl;
  cout << "Enter your name: ";
  cin >> playerName;
  cout << "Hello, " << playerName << "." << endl;

  while (true) {
    entrance(); // Show the entrance options
    cout << "Enter your choice (1-2): ";
    cin >> choice;

    // TODO: They can't leave until I let them MUHAHAHAHA
    switch (choice) {
    case 1:
      // Enter the house
      while (true) {
        creepyRoom(); // Show the creepy room options
        cout << "Enter your choice (1-3): ";
        cin >> choice;

        if (choice == 1) {
          cout << "You examine the creepy painting and feel a shiver down your "
                  "spine."
               << endl;
        } else if (choice == 2) {
          cout << "You search for hidden objects but find nothing unusual."
               << endl;
        } else if (choice == 3) {
          cout << "You decide to leave the creepy room and return to the "
                  "entrance."
               << endl;
          break;
        } else {
          cout << "Invalid choice. Try again." << endl;
        }
      }
      break;
    case 2:
      cout << "You quickly run away from the haunted house. Phew, that was "
              "close!"
           << endl;
      break;
    default:
      cout << "Invalid choice. Try again." << endl;
    }
  }

  return 0;
}