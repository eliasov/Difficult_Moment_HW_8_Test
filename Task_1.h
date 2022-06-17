#pragma once


struct Person
{
    string name;
    string surname;
    optional<string> patrontmic;
};

struct PhoneNumber
{
    int countryCode;
    int cityCode;
    string number;
    optional<int> addationalNumber;
};

class PhoneBook
{
private:
    vector <pair<Person, PhoneNumber>> container;
public:
    PhoneBook(ifstream& file);
    friend ostream& operator<<(ostream& out, const PhoneBook& phb);
    void SortByName();
    void SortByPhone();
    pair<string, vector<PhoneNumber>> GetPhoneNumber(const string& name);
    void ChangePhoneNumber(const Person& p, const PhoneNumber& phn);
};

optional<string> getOutputString(string& patr);
std::ostream& operator << (std::ostream& out, const Person& person);
bool operator < (const Person& p1, const Person& p2);
bool operator == (const Person& p1, const Person& p2);





optional<int> getInputInt(string& in);
bool operator < (const PhoneNumber& phonNun1, const PhoneNumber& phonNun2);
bool operator == (const PhoneNumber& phonNun1, const PhoneNumber& phonNun2);
ostream& operator<<(ostream& out, const PhoneNumber& p);



