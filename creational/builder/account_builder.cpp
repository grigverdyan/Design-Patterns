#include "account_builder.hpp"

AccountBuilder& AccountBuilder::loginIs(std::string login)
{
	account._login = login;
	return *this;
}

AccountBuilder& AccountBuilder::usName(std::string name)
{
	account._name = name;
	return *this;
}

AccountBuilder& AccountBuilder::usMiddleName(std::string middleName)
{
	account._middleName = middleName;
	return *this;
}

AccountBuilder& AccountBuilder::usSurname(std::string surname)
{
	account._surname = surname;
	return *this;
}

AccountBuilder& AccountBuilder::isOld(unsigned int age)
{
	account._age = age;
	return *this;
}

AccountBuilder& AccountBuilder::livesCountry(std::string country)
{
	account._country = country;
	return *this;
}

AccountBuilder& AccountBuilder::livesCity(std::string city)
{
	account._city = city;
	return *this;
}
