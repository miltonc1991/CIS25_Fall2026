#include <iostream>
#include <string>
using namespace std;

struct Item {
    string name;
    int id;
};

int binarySearch(Item items[], int size, int targetId) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (items[mid].id == targetId)
            return mid;
        else if (items[mid].id < targetId)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main() {
    int size = 5;
    Item* inventory = new Item[size];

    inventory[0] = { "Wooden Sword", 1 };
    inventory[1] = { "Iron Shield", 2 };
    inventory[2] = { "Magic Potion", 3 };
    inventory[3] = { "Golden Key", 4 };
    inventory[4] = { "Dragon Egg", 5 };

    cout << "==============================" << endl;
    cout << "       Adventure Inventory    " << endl;
    cout << "==============================" << endl;
    cout << "You have 5 special items in your bag." << endl;
    cout << "Enter the ID of the item you want to inspect (1–5): ";

    int searchId;
    cin >> searchId;

    int index = binarySearch(inventory, size, searchId);

    cout << endl;
    if (index != -1)
        cout << "You found the item: " << inventory[index].name << " (ID: " << inventory[index].id << ")" << endl;
    else
        cout << "That item doesn’t exist in your inventory." << endl;

    cout << "Thanks for playing!" << endl;

    delete[] inventory;
    return 0;
}

