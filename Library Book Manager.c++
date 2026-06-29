#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<string> books;
    int choice;
    string book;

    do {

        cout << "\n=== LIBRARY ===\n";
        cout << "1. Add Book\n";
        cout << "2. Show Books\n";
        cout << "3. Count Books\n";
        cout << "0. Exit\n";

        cin >> choice;
        cin.ignore();

        switch(choice) {

            case 1:
                cout << "Book: ";
                getline(cin, book);
                books.push_back(book);
                break;

            case 2:
                for(int i = 0; i < books.size(); i++)
                    cout << i + 1
                         << ". "
                         << books[i]
                         << endl;
                break;

            case 3:
                cout << "Total Books: "
                     << books.size()
                     << endl;
                break;
        }

    } while(choice != 0);

    return 0;
}
