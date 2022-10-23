#ifndef REGISTRATION_H

#include <iostream>

class AccountBuilder:q;

class Account
{
    private:
        /*
         *  Account Details
        */
        std::string     _login;
        std::string     _email;
        std::string     _password;

        /*
         * Personal information
        */
        std::string     _name;
        std::string     _middleName;
        std::string     _surname;
        std::string     _country;
        std::string     _city;
        unsigned int    _age;

        Account(std::string email, std::string password) 
            : _email(email), _password(password) {}

    public:
        friend class AccountBuilder;
        friend std::ostream& operator<<(std::ostream& os, Account& obj);
        static AccountBuilder create(std::string email, std::string password);
};

#endif  /* REGISTRATION_H */



