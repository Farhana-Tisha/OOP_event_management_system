#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
using namespace std;
class Share_holder;//declaring before using friend function
class Balance_sheet;//declaring before using friend function
class Videographer;//declaring before using friend function
class Editor;//declaring before using friend function
class Cameraman;//declaring before using friend function
class Caterer;//declaring before using friend function
class Product_supplier;//declaring before using friend function
class Decorator;//declaring before using friend function
class Staff;//declaring before using friend function
class Event_manager;//declaring before using friend function
class Beautician;//declaring before using friend function
class Events;//declaring before using friend function
class CEO
{
public:
    virtual void get_data()=0;
    virtual void calculate_salary()=0;
    virtual void show_data()=0;
};
class Event_manager: public CEO
{
public:
    string name;
    string account_number;
    friend float calculate_profit(Balance_sheet,Event_manager,Videographer,Cameraman,Editor,Decorator,Caterer,Beautician,Product_supplier,Staff,Events);
public:
    float salary;
    Event_manager()
    {

    }
    Event_manager(string name,string account_number)
    {
        this->name= name;
        this->account_number= account_number;
    }
    void get_data()
    {
        cout<<"Enter name:"<<endl;
        cin>>name;
        cout<<"Enter the account number:"<<endl;
        cin>>account_number;

    }
    void calculate_salary()
    {
        cout<<"Enter the amount of salary : "<<endl;
        cin>>salary;
        salary=salary+0.02+0.025;//addition of home loans and medical facilities
    }
    void show_data()
    {
        cout<<"Event Manager's Name : "<<name<<endl;
        cout<<"Event Manager's account number : "<<account_number<<endl;
        cout<<"Event Manager's monthly income : "<<salary<<endl;
    }
};
class Photography:public Event_manager
{

};
class Videographer:public Photography
{
  friend float calculate_profit(Balance_sheet,Event_manager,Videographer,Cameraman,Editor,Decorator,Caterer,Beautician,Product_supplier,Staff,Events);

public:
    float salary1;
    void get_data()
    {
        Event_manager::get_data();
    }
    void calculate_salary()
    {
        cout<<"Enter the amount of salary : "<<endl;
        cin>>salary1;
        salary1=salary1+0.025;//addition of medical facilities
    }
    void show_data()
    {
     cout<<"Videographer's Name : "<<name<<endl;
     cout<<"Videographer's account number : "<<account_number<<endl;
     cout<<"Videographer's monthly income : "<<salary1<<endl;
    }
};
class Editor:public Photography
{
    friend float calculate_profit(Balance_sheet,Event_manager,Videographer,Cameraman,Editor,Decorator,Caterer,Beautician,Product_supplier,Staff,Events);

public:
    float salary2;
    void get_data()
    {
        Event_manager::get_data();
    }
    void calculate_salary()
    {
       cout<<"Enter the amount of salary : "<<endl;
       cin>>salary2;
       salary2=salary2+0.025;//addition of medical facilities
    }
    void show_data()
    {
     cout<<"Editor's Name : "<<name<<endl;
     cout<<"Editor's account number : "<<account_number<<endl;
     cout<<"Editor's monthly income : "<<salary2<<endl;
    }
};
class Cameraman:public Photography
{
    friend float calculate_profit(Balance_sheet,Event_manager,Videographer,Cameraman,Editor,Decorator,Caterer,Beautician,Product_supplier,Staff,Events);
public:
    float salary3;
    void get_data()
    {
        Event_manager::get_data();

    }
    void calculate_salary()
    {
        cout<<"Enter the amount of salary : "<<endl;
        cin>>salary3;
        salary3=salary3+0.025;//addition of medical facilities
    }
    void show_data()
    {
     cout<<"Cameraman's Name : "<<name<<endl;
     cout<<"Cameraman's account number : "<<account_number<<endl;
     cout<<"Cameraman's monthly income : "<<salary3<<endl;
    }

};
class Decorator:public Event_manager
{
   friend float calculate_profit(Balance_sheet,Event_manager,Videographer,Cameraman,Editor,Decorator,Caterer,Beautician,Product_supplier,Staff,Events);
public:
    float salary4;
    void get_data()
    {
        Event_manager::get_data();

    }
    void calculate_salary()
    {
        cout<<"Enter the amount of salary : "<<endl;
        cin>>salary4;
        salary4=salary4+0.025;//addition of medical facilities
    }
    void show_data()
    {
     cout<<"Decorator's Name : "<<name<<endl;
     cout<<"Decorator's account number : "<<account_number<<endl;
     cout<<"Decorator's monthly income : "<<salary4<<endl;
    }
};
class Caterer:public Event_manager
{
  friend float calculate_profit(Balance_sheet,Event_manager,Videographer,Cameraman,Editor,Decorator,Caterer,Beautician,Product_supplier,Staff,Events);
public:
    float salary5;
    void get_data()
    {
        Event_manager::get_data();
    }
    void calculate_salary()
    {
        cout<<"Enter the amount of salary : "<<endl;
        cin>>salary5;
        salary5=salary5+0.025;//addition of medical facilities
    }
    void show_data()
    {
     cout<<"Caterer's Name : "<<name<<endl;
     cout<<"Caterer's account number : "<<account_number<<endl;
     cout<<"Caterer's monthly income : "<<salary5<<endl;
    }
};
class Product_supplier:public Event_manager
{
  friend float calculate_profit(Balance_sheet,Event_manager,Videographer,Cameraman,Editor,Decorator,Caterer,Beautician,Product_supplier,Staff,Events);

public:
    float salary6;
    void get_data()
    {
        Event_manager::get_data();
    }
    void calculate_salary()
    {
       cout<<"Enter the amount of salary : "<<endl;
       cin>>salary6;
       salary6=salary6+0.025;//addition of medical facilities
    }
    void show_data()
    {
     cout<<"Product Supplier's Name : "<<name<<endl;
     cout<<"Product Supplier's account number : "<<account_number<<endl;
     cout<<"Product Supplier's monthly income : "<<salary6<<endl;
    }
};
class Staff:public Event_manager
{
    friend float calculate_profit(Balance_sheet,Event_manager,Videographer,Cameraman,Editor,Decorator,Caterer,Beautician,Product_supplier,Staff,Events);
public:
        float salary7;
    void get_data()
    {
        Event_manager::get_data();
    }
    void calculate_salary()
    {
       cout<<"Enter the amount of salary : "<<endl;
       cin>>salary7;
       salary7=salary7+0.025;//addition of medical facilities
    }
    void show_data()
    {
     cout<<"Staff's Name : "<<name<<endl;
     cout<<"Staff's account number : "<<account_number<<endl;
     cout<<"Staff's monthly income : "<<salary7<<endl;
    }

};
class Beautician:public Event_manager
{
    friend float calculate_profit(Balance_sheet,Event_manager,Videographer,Cameraman,Editor,Decorator,Caterer,Beautician,Product_supplier,Staff,Events);
public:
    float salary8;
    void get_data()
    {
        Event_manager::get_data();
    }
    void calculate_salary()
    {
       cout<<"Enter the amount of salary : "<<endl;
       cin>>salary8;
       salary8=salary8+0.025;//addition of medical facilities
    }
    void show_data()
    {
     cout<<"Beautician's Name : "<<name<<endl;
     cout<<"Beautician's account number : "<<account_number<<endl;
     cout<<"Beautician's monthly income : "<<salary8<<endl;
    }
};
class Events:public Event_manager
{
friend float calculate_profit(Balance_sheet,Event_manager,Videographer,Cameraman,Editor,Decorator,Caterer,Beautician,Product_supplier,Staff,Events);
public:
   string event_type,client_name,client_address;
   int client_phone_number,event_no;
   int event_budget=0,event_count=0;
public:
    Events()
    {

    }
    Events(int event_no,int client_phone_number)
    {
        this->event_no= event_no;
        this->client_phone_number= client_phone_number;
    }
    Events(string event_type,string client_name, string client_address)
    {
        this->event_type= event_type;
        this->client_name= client_name;
        this->client_address= client_address;
    }
    void get_data()
    {
       while(1)
        {
            cout<<"Enter event no : ";
            cin>>event_no;
            if(event_no==-1)
                {
                break;
                }
            cout<<"Enter Budget of the event : ";
            cin>>event_budget;
            event_budget++;
            event_count++;

            cout<<"Enter the type of event : ";
            cin>>event_type;

            cout<<"Enter client's name : ";
            cin>>client_name;
            cout<<"Enter client's phone number : ";
            cin>>client_phone_number;
            cout<<"Enter client's address : ";
            cin>>client_address;

        }

  }
  void show_data()
  {
    cout<<"Total Budget of all events (yearly) : "<<event_budget<<endl;
    cout<<"Total number of events (yearly) : "<<event_count<<endl;

  }
};
class Balance_sheet:public Videographer,public Cameraman,public Editor,public Decorator,public Caterer,public Beautician,public Product_supplier,public Staff
{
friend float calculate_profit(Balance_sheet,Event_manager,Videographer,Cameraman,Editor,Decorator,Caterer,Beautician,Product_supplier,Staff);
public:
    int other_costs;
    void get_data()
    {
        cout<<"Enter the costs of other things : ";
        cin>>other_costs;
    }
    void show_data()
    {
        cout<<"The costs of other things is : "<<other_costs<<endl;
    }
    void calculate_salary()
    {

    }
};
float calculate_profit(Balance_sheet a,Event_manager b,Videographer c,Cameraman d,Editor e,Decorator f,Caterer g,Beautician h,Product_supplier i,Staff j,Events k){
float total_spending,remainder;
total_spending = (a.other_costs+(b.salary*12)+(c.salary1*12)+(e.salary2*12)+(d.salary3*12)+(f.salary4*12)+(g.salary5*12)+(i.salary6*12)+(j.salary7*12)+(h.salary8*12));
remainder=k.event_budget-total_spending;
i;
return remainder;
}
int main()
{ CEO* ptr;
  Event_manager m1;
  ptr=&m1;
  ptr->get_data();
  ptr->calculate_salary();
  ptr->show_data();

  Videographer v1;
  ptr=&v1;
  ptr->get_data();
  ptr->calculate_salary();
  ptr->show_data();

  Cameraman c1;
  ptr=&c1;
  ptr->get_data();
  ptr->calculate_salary();
  ptr->show_data();

  Editor d1;
  ptr=&d1;
  ptr->get_data();
  ptr->calculate_salary();
  ptr->show_data();

  Beautician b1;
  ptr=&b1;
  ptr->get_data();
  ptr->calculate_salary();
  ptr->show_data();

  Caterer ca1;
  ptr=&ca1;
  ptr->get_data();
  ptr->calculate_salary();
  ptr->show_data();

  Staff s1;
  ptr=&s1;
  ptr->get_data();
  ptr->calculate_salary();
  ptr->show_data();

  Decorator de1;
  ptr=&de1;
  ptr->get_data();
  ptr->calculate_salary();
  ptr->show_data();

  Product_supplier pr1;
  ptr=&pr1;
  ptr->get_data();
  ptr->calculate_salary();
  ptr->show_data();

  Events e1;
  ptr=&e1;
  ptr->get_data();
  ptr->calculate_salary();
  ptr->show_data();

  Balance_sheet bs1;
  ptr=&bs1;
  ptr->get_data();
  ptr->show_data();
  cout<<"Total cost : "<<calculate_profit(bs1,m1,v1,c1,d1,de1,ca1,b1,pr1,s1,e1)<<endl;

  return 0;
}
