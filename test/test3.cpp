#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Book {
public:
    string title;
    string author;
    Book(string t, string a) : title(t), author(a) {}
};

class Library {
private:
    vector<Book> books;
public:
    void addBook(const Book& book) {
        books.push_back(book);
    }
    void displayBooks() {
        cout << "Books in the Library:" << endl;
        for (const auto& book : books) {
            cout << "Title: " << book.title << ", Author: " << book.author << endl;
        }
    }
};

int main() {
    Library lib;
    lib.addBook(Book("1984", "George Orwell"));
    lib.addBook(Book("To Kill a Mockingbird", "Harper Lee"));
    lib.displayBooks();
    return 0;
}