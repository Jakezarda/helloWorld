#include <iostream>
#include <string>
#include <vector>

class person{
    std::string title, firstName, lastName;
    int age;
    
public:
    person(std::string title, std::string firstName, std::string lastName, int age){
            this->title = title;
            this->firstName = firstName;
            this->lastName = lastName;
            this->age = age;
    }
    
    void setFirstName(std::string firstName){
        this->firstName = firstName;
    }
    
    void setLastName(std::string lastName){
        this->lastName = lastName;   
    }
    
    void setTitle(std::string title){
        this->title = title;   
    }
    
    void setAge(int age){
        this->age = age;
    }
    
  std::string getFirstName(){
        return this->firstName;   
  }
    
  std::string getLastName(){
        return this->lastName;
  }
    
  std::string getTitle(){
        return this->title;
  }
    
  int getAge(){
        return this->age;
  }
    
    
  void howOld(){
        std::cout << this->firstName << " is " << this->age << " years old.\n";   
  }
  
  void birthday(){
        this->age += 1;
        std::cout << "Happy birthday, " << this->firstName << "!\n";
        std::cout << "You are now " << this->age << " years old.\n";
  }
  
  
};

person getPerson(){
    std::string title, firstName, lastName;
    int age;
    
    std::cout << "What is your full name?: ";
    std::cin >> firstName >> lastName;
    std::cout << "What is your formal title?: ";
    std::cin >> title;
    std::cout << "What is your age?: ";
    std::cin >> age;
    
    person you(title, firstName, lastName, age);
    
    return you;
}


int main() {
    std::cout << "Hello, World!\n";
    
    std::vector<person> people;
    
    for (int i = 0; i < 3; i++){
        person you = getPerson();
        people.push_back(you);
    }
    
    std::cout << "Hello, " << people[0].getFirstName() << " " << people[0].getLastName() << "!\n";
    
    people[1].howOld();
    people[2].birthday();
    
    return 0;
}













