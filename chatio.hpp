class config {
  public:
  void port();
}

class

void config::port(string port) {
  system("$./chat_server", port);
}

int init_config() {
  config config;
  #include "config.hpp"
}
