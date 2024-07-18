
#include <iostream>
#include <fstream>

using namespace std;

class MediaItem {
public:
    string title, arr1[20], arr3[20];
    int year, count = 3, arr2[20], type, arr4[20], count2 = 3;

    virtual void displayinfo() {
    }

    int mediatype() {
        cout << "WHAT IS THE TYPE OF MEDIA \n press 1 FOR BOOK \n press 2 FOR MOVIE \n";
        cin >> type;
        return type;
    }
};

class book : public MediaItem {
public:
    book() {
        arr1[0] = "LIFE";
        arr1[1] = "GREAT_EXPECTATIONS";
        arr1[2] = "PRISONER";
        arr2[0] = 1920;
        arr2[1] = 1822;
        arr2[2] = 1990;
    }

    void book_adding() {
        int x;
        cout << "HOW MANY BOOKS YOU WANT TO ADD TO LIBRARY :";
        cin >> x;
        for (int i = 0; i < x; i++) {
            cout << "ENTER THE NAME OF BOOK" << endl;
            cin >> title;
            cout << "ENTER THE YEAR OF BOOK" << endl;
            cin >> year;
            arr1[count] = title;
            arr2[count] = year;
            count++;
        }
    }

    void delete_book() {
        int x;
        cout << "WHICH BOOK YOU WANTED TO DELETE :" << endl;
        for (int i = 0; i < count; i++) {
            cout << i + 1 << " " << arr1[i] << " published in " << arr2[i] << endl;
        }
        cin >> x;
        arr1[x - 1] = " ";
        arr2[x - 1] = 0;
        for (int i = x - 1; i < count; i++) {
            arr1[i] = arr1[i + 1];
            arr2[i] = arr2[i + 1];
        }
        count--;
    }

    void displayinfo() {
        for (int i = 0; i < count; i++) {
            cout << arr1[i] << " published in " << arr2[i] << endl;
        }
    }

    // Function to write book data to a file
    void write_to_file() {
        ofstream file("library.txt");
        if (file.is_open()) {
            for (int i = 0; i < count; i++) {
                file << arr1[i] << "," << arr2[i] << endl;
            }
            file.close();
        } else {
            cerr << "Error opening the file!\n";
        }
    }

    // Function to read book data from a file
    void read_from_file() {
        ifstream file("library.txt");
        if (file.is_open()) {
            count = 0;
            while (file >> arr1[count] >> arr2[count]) {
                count++;
            }
            file.close();
        } else {
            cerr << "Error opening the file!\n";
        }
    }
};

class movie : public MediaItem {
public:
    movie() {
        arr3[0] = "HARRY_POTTER";
        arr3[1] = "PURGE";
        arr3[2] = "Xman";
        arr4[0] = 2009;
        arr4[1] = 2012;
        arr4[2] = 2015;
    }

    void movie_adding() {
        int x;
        cout << "HOW MANY MOVIES YOU WANT TO ADD TO LIBRARY :";
        cin >> x;
        for (int i = 0; i < x; i++) {
            cout << "ENTER THE NAME OF MOVIE" << endl;
            cin >> title;
            cout << "ENTER THE YEAR OF MOVIE" << endl;
            cin >> year;
            arr3[count2] = title;
            arr4[count2] = year;
            count2++;
        }
    }

    void delete_movie() {
        int x;
        cout << "WHICH MOVIE YOU WANTED TO DELETE :" << endl;
        for (int i = 0; i < count2; i++) {
            cout << arr3[i] << " of " << arr4[i] << endl;
        }
        cin >> x;
        arr3[x - 1] = " ";
        arr4[x - 1] = 0;
        for (int i = x - 1; i < count; i++) {
            arr3[i] = arr3[i + 1];
            arr4[i] = arr4[i + 1];
        }
        count2--;
    }

    void displayinfo() {
        for (int i = 0; i < count2; i++) {
            cout << arr3[i] << " of " << arr4[i] << endl;
        }
    }

    // Function to write movie data to a file
    void write_to_file() {
        ofstream file("library.txt", ios::app);
        if (file.is_open()) {
            for (int i = 0; i < count2; i++) {
                file << arr3[i] << "," << arr4[i] << endl;
            }
            file.close();
        } else {
            cerr << "Error opening the file!\n";
        }
    }

    // Function to read movie data from a file
    void read_from_file() {
        ifstream file("library.txt");
        if (file.is_open()) {
            count2 = 0;
            while (file >> arr3[count2] >> arr4[count2]) {
                count2++;
            }
            file.close();
        } else {
            cerr << "Error opening the file!\n";
        }
    }
};

int main() {
    int y, z, r, x,x1;
    MediaItem *ptr;
    ptr = new book;
    book bk;
    movie mv;
    ptr->mediatype();

    if (ptr->type == 1) {
        ptr = &bk;

        cout << "Do you want to read data from file? (1 for Yes, 2 for No): ";
        cin >> x1;
        if (x1 == 1) {
            bk.read_from_file();
        }  
        
            cout << "you want to add/delete book or want to see our collection\npress 1 to ADD \npress 3 to delete \npress 2 to see our collection\n ";
            cin >> y;
            if (y == 1) {
                bk.book_adding();
                bk.write_to_file(); // Save data to file after adding
                cout << "YOU WANT TO SEE ALL COLLECTION: \n 1 YES \n 2 NO \n";
                cin >> x;
                       if (x == 1) { 	
                    ptr->displayinfo();                      
            }
			}
			 else if (y == 2) {
                ptr->displayinfo();
            } 
			else if (y == 3) {
                bk.delete_book();
                bk.write_to_file(); // Save data to file after deletion
                ptr->displayinfo();
            }
    }

    if (ptr->type == 2) {
        ptr = &mv;
        cout << "Do you want to read data from file? (1 for Yes, 2 for No): ";
        cin >> x1;
        if (x1== 1) {
            mv.read_from_file();
        }  
            cout << "you want to add/delete MOVIE or want to see our collection\npress 1 to ADD  \npress 3 to Delete \npress 2 to see our collection\n";
            cin >> z;
            if (z == 1) {
                mv.movie_adding();
                mv.write_to_file(); // Save data to file after adding
                cout << "YOU WANT TO SEE ALL COLLECTION: \n 1 YES \n 2 NO \n";
                cin >> r;
                if (r == 1) {
                    ptr->displayinfo();  
                }
            }
			 else if (z == 2) {
                ptr->displayinfo();
            
            } else if (z == 3) {
                mv.delete_movie();
                mv.write_to_file(); // Save data to file after deletion
                ptr->displayinfo();
            }
        
    }

    return 0;
}
