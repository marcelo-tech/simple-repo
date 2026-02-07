#include<iostream>
#include<string>

using namespace std;

class Users {
   private:
      string username { };
      string email {};
      string password {};
      long id {};

   public:
      Users() {}
      Users(const string& username, const string& password);
      void setUsername(const string& username) const;
      void setEmail(const string& email) const;
      void setPassword(const string& password) const;
      void setID(long id) const;
};


void main() {
   Users users {};
}
