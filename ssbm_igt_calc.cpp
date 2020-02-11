//kopimi
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <ctime>
using namespace std;

int main(){
    ofstream f;
    f.open("igt.txt");
    string players[25] = {"Dr. Mario", "Mario", "Luigi", "Bowser", "Peach", "Yoshi", "DK", "C. Falcon", "Ganondorf", "Falco", "Fox", "Ness", "Ice Climbers", "Kirby", "Samus", "Zelda", "Link", "Young Link", "Pichu", "Pikachu", "Jigglypuff", "Mewtwo", "Mr. Game and Watch", "Marth", "Roy"};
    float input = 0;
    float total = 0;
    float wr = 252.31;

    system("color 17");
    cout << "SSBM IGT Calculator\nBREAK THE TARGETS\nDeveloped by RevSpennicus\n";
    f << "SSBM IGT Calculator\nBREAK THE TARGETS\nDeveloped by RevSpennicus\n";
    system("pause");
    system("cls");

    string name;
    cout << "Please enter your name: ";
    cin >> name;
    system("cls");

    cout << "Hello, " << name << "!";
    f << "\nHello, " << name << "!";
    time_t t = time(0);   // get time now
    struct tm * now = localtime( & t );
    cout << "\nToday's date is ";
    f << "\nToday's date is ";
    cout << (now->tm_mday) << '-'
         << (now->tm_mon + 1) << '-'
         <<  (now->tm_year + 1900)
         << endl;
    f << (now->tm_year + 1900) << '-'
         << (now->tm_mon + 1) << '-'
         <<  now->tm_mday
         << endl;
    cout << "The current world record is " << wr << " by Judge.\nGood luck!\n";
    f << "The current world record is " << wr << " by Judge.\nGood luck!\n\n";
    system("pause");
    system("cls");

    for (int x = 0; x < 25; x++){
        cout << players[x] << ": ";
        f << players[x] << ": ";
        cin >> input;
        f << input;
        total += input;
        cout << endl;
        f << endl;
    }
    cout << "Your total is " << total;
    cout << endl;
    f << "Your total is " << total;
    f << endl;
    system ("pause");
    system("cls");

    float diff = wr - total;
    float negaDiff = -(diff);

    if (total > wr){
        cout << "You missed the world record by " << negaDiff << " seconds\nBetter luck next time!\n";
        f << "\nYou missed the world record by " << negaDiff << " seconds\nBetter luck next time!";
        f.close();
        system("pause");
    } else if (total < wr) {
        cout << "Wow! Incredible! You beat the world record by " << diff << " seconds!\n";
        f << "\nWow! Incredible! You beat the world record by " << diff << " seconds!";
        f.close();
        system("pause");
    }
}
