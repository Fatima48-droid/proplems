/*

المسألة 1: تعريف Struct متداخل وتمثيل بيانات طالب
قم بإنشاء struct يمثل بيانات طالب تحتوي على:

الاسم

الرقم الجامعي

Struct آخر يمثل العنوان يحتوي على:

اسم المدينة

اسم الشارع

رقم المبنى

المطلوب:

تعريف الـ struct بشكل صحيح

إنشاء كائن منه وإدخال البيانات

طباعة البيانات


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

city create(){
    city CS;
    cout<<"enter your name";
    cin>>CS.Student.name;
    
    cout<<"enter your ID";
    cin>>CS.Student.ID;
    
    cout<<"enter your city name ";
    cin>>CS.cityname;
    
    cout<<"enter your streetname : ";
    cin>>CS.streetname;
    
    cout<<"enter your building number: ";
    cin>>CS.buildingNUMBER;
    return CS;
}

int main()
{
   city CA=create();
   
   cout<<CA.Student.name<<endl;
   cout<<CA.Student.ID<<endl;
   cout<<CA.cityname<<endl;
   cout<<CA.streetname<<endl;
   cout<<CA.buildingNUMBER<<endl;
    return 0;
}