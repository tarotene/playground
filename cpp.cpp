#include <iostream>
#include <string>
using namespace std;

class Person
{
  private:
    string name;
    int age;

  public:
    Person(string s="Penguin", int n=11) : name(s), age(n) {
        // name = s;
        // age = n;
    };
    ~Person();

    void setName(string s);
    void setAge(int n);
    void disp();
};

// Person::Person(/* args */)
// {
// }

Person::~Person()
{
}

void Person::setName(string s)
{
    name = s;
}

void Person::setAge(int n)
{
    if (n < 0)
    {
        age = 0;
    }
    else
    {
        age = n;
    }
}

void Person::disp()
{
    cout << "Name = " << name << ", Age = " << age << endl;
}

int main(int argc, char const *argv[])
{
    Person p;
    // dt.setName("Ichiro Yamada");
    // dt.setAge(-50);
    p.disp();

    Person p2(p);
    p2.disp();

    // Person d, *p = &d;

    // d.age = 40;
    // d.disp();
    // p->age = 50;
    // d.disp();

    return 0;
}
