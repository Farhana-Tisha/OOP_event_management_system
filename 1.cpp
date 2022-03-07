#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
class shareholder;//declaring before using friend function
class balance_sheet;//declaring before using friend function
class ceo
{
public:
    virtual void showdata();
};
class event_manager:public ceo,public shareholder
{
private:
    string name;
    int account_number;
    float salary;
public:
    void getdata()
    {
        cout<<"Enter name:"<<endl;
        cin>>name;
        cout<<"Enter account number:"<<endl;
        cin>>account_number;

    }
    void calculate_salary()
    {
        cout<<"Enter salary:"<<endl;
        cin>>salary;
        cout<<"Display salary:"<<salary<<endl;
    }
    void showdata()
    {
        cout<<"Display name:"<<name<<endl;
        cout<<"Display account number:"<<account_number<<endl;

    }

};
class photography:public event_manager
{

};
class videographer:public photography,public event_manager
{
private:

    float salary;
public:
    void getdata()
    {
        event_manager::getdata();

    }
    void calculate_salary()
    {
        cout<<"Enter salary:"<<endl;
        cin>>salary;
        cout<<"Display salary:"<<salary<<endl;
    }
    void showdata()
    {
        event_manager::showdata();

    }

};
class editor:public photography,public event_manager
{
private:

    float salary;
public:
    void getdata()
    {
        event_manager::getdata();

    }
    void calculate_salary()
    {
        cout<<"Enter salary:"<<endl;
        cin>>salary;
        cout<<"Display salary:"<<salary<<endl;
    }
    void showdata()
    {
        event_manager::showdata();

    }

};
class cameraman:public photography,public event_manager
{
private:

    float salary;
public:
    void getdata()
    {
        event_manager::getdata();

    }
    void calculate_salary()
    {
        cout<<"Enter salary:"<<endl;
        cin>>salary;
        cout<<"Display salary:"<<salary<<endl;
    }
    void showdata()
    {
        event_manager::showdata();

    }

};
class decorator:public event_manager
{
private:

    float salary;
public:
    void getdata()
    {
        event_manager::getdata();

    }
    void calculate_salary()
    {
        cout<<"Enter salary:"<<endl;
        cin>>salary;
        cout<<"Display salary:"<<salary<<endl;
    }
    void showdata()
    {
        event_manager::showdata();

    }

};
class catering:public event_manager
{
private:

    float salary;
public:
    void getdata()
    {
        event_manager::getdata();

    }
    void calculate_salary()
    {
        cout<<"Enter salary:"<<endl;
        cin>>salary;
        cout<<"Display salary:"<<salary<<endl;
    }
    void showdata()
    {
        event_manager::showdata();

    }

};
class product_supplier:public event_manager
{
private:

    float salary;
public:
    void getdata()
    {
        event_manager::getdata();

    }
    void calculate_salary()
    {
        cout<<"Enter salary:"<<endl;
        cin>>salary;
        cout<<"Display salary:"<<salary<<endl;
    }
    void showdata()
    {
        event_manager::showdata();

    }

};
class stuff:public event_manager
{
private:

    float salary;
public:
    void getdata()
    {
        event_manager::getdata();

    }
    void calculate_salary()
    {
        cout<<"Enter salary:"<<endl;
        cin>>salary;
        cout<<"Display salary:"<<salary<<endl;
    }
    void showdata()
    {
        event_manager::showdata();

    }

};
class beautician:public event_manager
{
private:

    float salary;
public:
    void getdata()
    {
        event_manager::getdata();

    }
    void calculate_salary()
    {
        cout<<"Enter salary:"<<endl;
        cin>>salary;
        cout<<"Display salary:"<<salary<<endl;
    }
    void showdata()
    {
        event_manager::showdata();

    }

};
