/*
المسألة 3: استخدام Struct متداخل مع مؤشرات
قم بإنشاء كائن من Struct يحتوي على Struct متداخل باستخدام المؤشرات (dynamic memory allocation

*/
#include <iostream>
using namespace std;

struct student{
    string name ;
    int ID;
};
struct city{
    string cityname;
    string streetname;
    int buildingNUMBER;
    student Student;
    
    
};


int main()
{
  city CB;
  
  
  CB.Student.name="Fatima";
  CB.Student.ID=2310455;
  CB.cityname="Sharjah";
  CB.streetname="HammadBENZayed";
  CB.buildingNUMBER=13;
  
  cout<<"name: "<<CB.Student.name;
  cout<<"ID : "<<CB.Student.ID;
  cout<<"cityname : "<<CB.cityname;
  cout<<"streetname : "<<CB.streetname;
  cout<<"building number : "<<CB.buildingNUMBER;
    return 0;
}