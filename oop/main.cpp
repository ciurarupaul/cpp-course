using namespace std;
#include <iostream>
#include <string>
#include <vector>

class Player{
private:
    // attributes / data
    string name {"Player"};
    int health {100};
    int xp {3};

public: 
    // methods / functions
    void talk(string text_to_say){
        cout << name << " says " << text_to_say << endl;
    };
    bool is_dead();
};

class Account {
public: 
    string name {"Account"};
    double balance {0.0};

    bool deposit(double bal){
        balance += bal;
        cout << "In deposit" << endl;
    };
    bool withdraw(double bal){
        balance -= bal;
        cout << "In withdraw" << endl;
    };
};

int main(){
/*
    // declaring a class and creating objects
    Account frank_account;
    Account jim_account;

    Player frank;
    Player hero;

    Player players[] {frank, hero};

    vector<Player> player_vec {frank};
    player_vec.push_back(hero);

    Player *enemy {nullptr};
    enemy = new Player;

    delete enemy;

    // accessing class members
    Player frank;

    frank.name = "Frank";
    frank.health = 100;
    frank.xp = 12;

    frank.talk("racial slurs");

    Player *enemy = new Player;

    (*enemy).name = "Enemy";    // same as below
    enemy -> xp = 15;           // same as above

    Account frank_account;
    frank_account.name = "Frank's account";
    frank_account.balance = 5000.0;

    frank_account.deposit(1000.0);
    frank_account.withdraw(500.0);
*/
    // member methods

    
    
    return 0;
}