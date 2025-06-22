#include "my_test.h"

#include "person.pb.h"

void MyTest::test() {
    this_person::Person person;

    person.set_id(2013221);
    person.set_age(33);

    person.add_names();;

    person.set_names(0, "Kukka");
    person.add_names("Ice");

    person.set_sex("Female");

    person.mutable_address()->set_address_id(1001);
    person.mutable_address()->set_country("China");

    person.set_color(this_person::Color::kBlue);

    std::string output;

    person.SerializeToString(&output);

    this_person::Person other;

    other.ParseFromString(output);

    std::cout << other.id() << ", " << other.age() << ", " << other.sex() << std::endl;

    std::cout << other.address().address_id() << ", " << other.address().country() << std::endl;

    for (int i = 0; i < person.names_size(); ++i) {
        std::cout << person.names(i) << ' ';
    }
    std::cout << std::endl;

    std::cout << person.color() << std::endl;
}