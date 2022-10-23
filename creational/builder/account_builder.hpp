#ifndef ACCOUNT_BUILDER_H
#define ACCOUNT_BUILDER_H

#include "account.hpp"

class AccountBuilder
{
    public:
        AccountBuilder(std::string login, std::string password)
            : account(login, password) {}

        operator Account() const
        { return std::move(account); }
		AccountBuilder& loginIs(std::string login);
		AccountBuilder& usName(std::string name);
		AccountBuilder& usMiddleName(std::string middleName);
		AccountBuilder& usSurname(std::string surname);
		AccountBuilder& isOld(unsigned int age);
		AccountBuilder& livesCountry(std::string country);
		AccountBuilder& livesCity(std::string city);
    private:
        Account account;
};

#endif  /* ACCOUNT_BUILDER_H */
