#ifndef ACCOUNT_BUILDER_H
#define ACCOUNT_BUILDER_H

#include "account.hpp"

class AccountBuilder
{
    public:
        AccountBuilder(std::string login, std::string password)
            : account(login, password) {}

        operator Account() const
        { return 
    private:
        Account account;
};

#endif  /* ACCOUNT_BUILDER_H */
