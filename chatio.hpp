#include <iostream>
using namespace std;

class config {
  public:
  void room_passw();
  void login_form();
  void welcome_msg();
}

class

void config::room_passw(string port) {
  system("$./chat_server ", port);
}

void config::login_form(bool true = true, bool false = false) 
{
  int x;
  int y;
  int z;
  cout << "username: "; // Type a number and press enter
  cin >> x; // Get user input from the keyboard
  cout << "ip address:"
  cin << y;
  cout << "room password: ";
  cin >> z;
  system("$./chat_client ", x, " ", y, " ", z);
}
void config::welcome_msg(string welcome) {
  cout << welcome;
}

int init_config() {
  config config;
  #include "config.hpp"
}

