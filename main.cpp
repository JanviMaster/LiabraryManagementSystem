#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Book {
    string title;
    string author;
    double price;
    int quantity;
};

class Library {
    vector<Book> books;
    double totalBill = 0;

public:
    void addBook() {
        string title, author;
        double price;
        int quantity;
        
        cout << "Enter book title: ";
        cin.ignore();
        getline(cin, title);
        cout << "Enter author: ";
        getline(cin, author);
        cout << "Enter price: ";
        cin >> price;
        cout << "Enter quantity: ";
        cin >> quantity;

        books.push_back({title, author, price, quantity});
        cout << "Book '" << title << "' added successfully!\n";
    }

    void removeBook() {
        string bookTitle;
        cout << "Enter the title of the book you want to remove: ";
        cin.ignore();
        getline(cin, bookTitle);

        bool found = false;
        for (size_t i = 0; i < books.size(); ++i) {
            if (books[i].title == bookTitle) {
                books.erase(books.begin() + i);
                found = true;
                cout << "Book '" << bookTitle << "' removed successfully!\n";
                break;
            }
        }

        if (!found) {
            cout << "Book not found!\n";
        }
    }

    void placeOrder() {
        string bookTitle;
        cout << "Enter the title of the book you want to order: ";
        cin.ignore();
        getline(cin, bookTitle);

        bool found = false;
        for (auto& book : books) {
            if (book.title == bookTitle) {
                found = true;
                int quantity;
                cout << "Enter quantity: ";
                cin >> quantity;

                if (book.quantity >= quantity) {
                    book.quantity -= quantity;
                    double billAmount = quantity * book.price;
                    totalBill += billAmount;
                    cout << "Order placed for " << quantity << " copies of '" << book.title << "' successfully!" << endl;
                    cout << "Total Bill for this order: $" << billAmount << endl;
                } else {
                    cout << "Sorry, not enough copies available!" << endl;
                }
                break;
            }
        }

        if (!found) {
            cout << "Sorry, book not found!" << endl;
        }
    }

    void generateBill() {
        cout << "Total Bill Amount: $" << totalBill << endl;
    }

    void showBooks() {
        if (books.empty()) {
            cout << "No books available in the library!\n";
            return;
        }
        cout << "Available Books:\n";
        for (const auto& book : books) {
            cout << "Title: " << book.title << ", Author: " << book.author
                 << ", Price: $" << book.price << ", Quantity: " << book.quantity << endl;
        }
    }
};

int main() {
    Library library;
    int choice;

    library.addBook();
    library.addBook();
    
    do {
        cout << "\nLibrary Management System\n";
        cout << "1. Add Book\n";
        cout << "2. Remove Book\n";
        cout << "3. Place Order\n";
        cout << "4. Generate Bill\n";
        cout << "5. Show Available Books\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                library.addBook();
                break;
            case 2:
                library.removeBook();
                break;
            case 3:
                library.placeOrder();
                break;
            case 4:
                library.generateBill();
                break;
            case 5:
                library.showBooks();
                break;
            case 6:
                cout << "Exiting system. Thank you!\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
                break;
        }
    } while (choice != 6);

    return 0;
}
