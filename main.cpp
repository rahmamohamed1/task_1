#include<bits/stdc++.h>
using namespace std ;
class Person
{
private :
    string name ;
    int age ;
public:
    Person()
    {
    }
    Person (string name, int age)
    {
        this->name=name;
        this->age=age;
    }
    void Display()
    {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl ;
    }

};
class Patient : public Person
{
private :
    int patientid ;
    string diagnosis ;
public:
    Patient():Person()
    {
    }
    Patient(int patientid,string diagnosis,string name, int age ) : Person(name,age)
    {
        this->patientid=patientid;
        this->diagnosis=diagnosis;
    }
    int get_patientid()
    {
        return patientid ;
    }
    void Display()
    {
        cout << "the patient informations are : " << endl;
        Person::Display();
        cout << "Patient id : " << patientid << endl;
        cout << "Diagnosis : " << diagnosis << endl;
    }
};
class Doctor : public Person
{
private :
    int doctorid ;
    string specialzation ;
public :
    Doctor():Person()
    {
    }
    Doctor(int doctorid, string specialzation,int age, string name) : Person(name,age)
    {
        this->doctorid=doctorid;
        this->specialzation=specialzation;
    }
    int get_doctorid()
    {
        return doctorid;
    }
    void Display()
    {
        cout << "....................."<<endl ;
        cout << "the doctor informations are : " << endl;
        Person::Display();
        cout << "Doctor id : " << doctorid << endl;
        cout << "Specialization : " << specialzation << endl ;
    }


};

int main ()
{
    Patient p1(1999,"EyeTest","rahma",21) ;
    Doctor d1(28839,"EyeDoctor",40,"mohamed");
    p1.Display();
    d1.Display();

}

