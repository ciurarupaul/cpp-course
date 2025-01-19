using namespace std;
#include <iostream>
#include <string>
#include <vector>

class Player
{
private:
   std::string name;
   int health;
   int xp;
public:
    std::string get_name() { return name; }
    int get_health() { return health; }
    int get_xp() { return xp; } 
    Player(std::string name_val ="None", int health_val = 0, int xp_val = 0);
    // Copy constructor
    Player(const Player &source);
    // Destructor
    ~Player() { cout << "Destructor called for: " << name << endl; }
};

// constructor
Player::Player(std::string name_val, int health_val, int xp_val) 
    : name {name_val}, health {health_val}, xp {xp_val} {
}

// copy constructor
Player::Player(const Player &source)
   // : name(source.name), health(source.health), xp{source.xp} {
        // delegate constructor !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
       : Player {source.name, source.health, source.xp}  {
        cout << "Copy constructor - made copy of: " << source.name << endl; 
}

void display_player(Player p) {
    cout << "Name: " << p.get_name() << endl;
    cout << "Health: " << p.get_health() << endl;
    cout << "XP: " << p.get_xp() << endl;    
}

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
    // constructors
    Player empty {"XXXXXXXXXX", 100, 50};

    // copy empty player into my_new_object
    Player my_new_object {empty};

    display_player(empty);

    return 0;
}