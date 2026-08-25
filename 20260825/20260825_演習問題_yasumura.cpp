#include <iostream>

class Dog 
{
private:
    const char* name;

public:
    void setName(const char* dogName)
    {
        name = dogName;
    }

    void showProfile()
    {
        std::cout << "–¼‘O: " << name << std::endl;
    }
};

int main() 
{
    Dog myDog;

    myDog.setName("ƒvƒŠƒ“");

    myDog.showProfile();

    return 0;
}
