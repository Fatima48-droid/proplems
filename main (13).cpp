/*
المسألة 2: تمرير Struct متداخل إلى دالة
قم بتعديل الكود السابق بحيث يكون هناك دالة تقوم بطباعة بيانات الطالب بدلاً من الطباعة داخل main().



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
    cout<<"enter your name : ";
    cin>>CS.Student.name;
    
    cout<<"enter your ID : ";
    cin>>CS.Student.ID;
    
    cout<<"enter your city name: ";
    cin>>CS.cityname;
   
   cout<<"enter your street name: ";
   cin>>CS.streetname;
    
    cout<<"enter your building number: ";
    cin>>CS.buildingNUMBER;
    return CS;
}
void print(const city&CA){
  
   cout<<CA.Student.name<<endl;
   cout<<CA.Student.ID<<endl; 
   cout<<CA.cityname<<endl;
   cout<<CA.streetname<<endl;
   cout<<CA.buildingNUMBER<<endl; 

  
}
int main()
{
  city CB;
  CB=create();
  
  
   print(CB);
  
    return 0;
}