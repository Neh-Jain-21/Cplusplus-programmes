#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person
{
public:
    string name;
    int age;
    virtual void getdata(){}
    virtual void putdata(){}
};

class Professor : public Person
{
private:
    int publications;
public:
    static int id;
    int cur_id;
    Professor()
    {
        cur_id=++id;
    }
    void getdata()
    {
        cin>>Person::name>>Person::age>>publications;
    }
    void putdata()
    {
        cout<<Person::name<<" "<<Person::age<<" "<<publications<<" "<<cur_id<<endl;
    }
};
int Professor::id=0;

class Student : public Person
{
private:
    int marks[6];
public:
    static int id;
    int cur_id;
    Student()
    {
        cur_id=++id;
    }
    void getdata()
    {
        cin>>Person::name>>Person::age;
        for (int i = 0; i < 6; i++)
        {
            cin>>marks[i];
        }
    }
    void putdata()
    {
        int sum=0;
        cout<<Person::name<<" "<<Person::age<<" ";
        for (int i = 0; i < 6; i++)
        {
            sum=sum+marks[i];
        }
        cout<<sum<<" "<<cur_id<<endl;
    }
};
int Student::id=0;

int main()
{
    int n, val;
    cin>>n;
    Person *per[n];
    for(int i = 0;i < n;i++)
    {
        cin>>val;
        if(val == 1)
        {
            per[i] = new Professor;
        }
        else
        {
            per[i] = new Student;
        }
        per[i]->getdata();
    }
    for(int i=0;i<n;i++)
    {
        per[i]->putdata();
    }
    return 0;
}
