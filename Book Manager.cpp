#include<iostream>
#include<string.h>
using namespace std;

class Book {
private:
    string title; 
    string author_name;
    int count;
    int no_chapter;  
    bool format_type;
    float chapter_pages[100];  

public:
    Book() {
        title = "";
        author_name = "";
        count = 0;
        no_chapter = 0;
        format_type = false; 
    }

    Book(string t, string an, int c, int nc, bool ft, float cp[]) {
        title = t;
        author_name = an;
        count = c;
        no_chapter = nc;
        format_type = ft;

        for (int i = 0; i < no_chapter; i++) {
            chapter_pages[i] = cp[i];
        }

        cout << "\nTitle of the book: " << title;
        cout << "\nAuthor name is: " << author_name;
        cout << "\nPage count: " << count;
        cout << "\nNumber of chapters: " << no_chapter;
        cout << "\nFormat type of book (1 for hardcover / 0 for paperback): " << format_type;
        cout << "\nChapter pages: ";
        for (int i = 0; i < no_chapter; i++) {
            cout << chapter_pages[i] << " ";
        }
        cout << endl;
    }

    Book(const Book& obj) {
        title = obj.title;
        author_name = obj.author_name;
        count = obj.count;
        no_chapter = obj.no_chapter;
        format_type = obj.format_type;

        for (int i = 0; i < no_chapter; i++) {
            chapter_pages[i] = obj.chapter_pages[i];
        }
    }

    void display() const {
        cout << "\nTitle: " << title;
        cout << "\nAuthor: " << author_name;
        cout << "\nPage count: " << count;
        cout << "\nNumber of chapters: " << no_chapter;
        cout << "\nFormat: " << (format_type ? "Hardcover" : "Paperback");
        cout << "\nChapter pages: ";
        for (int i = 0; i < no_chapter; i++) {
            cout << chapter_pages[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    float chpages[] = {10, 20, 30, 40, 50};  

    Book b1("Agnipankh", "Dr.A.P.J Abdul Kalam", 1000, 5, true, chpages);
    b1.display();

    Book b2 = b1;
    cout << "\nSecond book (copied):\n";
    b2.display();

    return 0;
}
















