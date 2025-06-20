#include "my_test.h"

#include "person.pb.h"

void MyTest::test() {
    Person person;

    person.set_id(2013221);
    person.set_age(33);
    person.set_name("Juicy");
    person.set_sex("Female");

    std::string output;

    person.SerializeToString(&output);

    Person other;

    other.ParseFromString(output);

    std::cout << other.id() << ", " << other.age() << ", " << other.name() << ", " << other.sex();
}