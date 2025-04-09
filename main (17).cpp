/*

المشكلة ١: نظام إدارة الموظفين
أنشئ هيكلًا لتمثيل موظف يتضمن الحقول التالية:

الاسم (سلسلة نصية)

معرّف الموظف (عدد صحيح)

الراتب (عدد عشري)

المتطلبات:

أنشئ مصفوفة من ٥ موظفين.

أدخل بيانات الموظف (الاسم، المعرّف، والراتب) من المستخدم.

اعرض بيانات الموظف صاحب أعلى راتب.





*/
#include <iostream>
using namespace std;
struct employee{
    string name;
    int ID;
    double Salary;
    
};




int main()
{
   employee emp[5];
   
   for(int i=0;i<5;i++){
       cout<<"enter the names of employee: ";
       cin>>emp[i].name;
       
       cout<<"enter the ID : ";
       cin>>emp[i].ID;
       
       cout<<"enter Salary : ";
       cin>>emp[i].Salary;
   }
int max=0;
for(int i=0;i<5;i++){
    if(emp[i].Salary>emp[max].  Salary){
        max=i;
    }}
    
    
cout<<"the employee who have the highest salary is : "<<endl;
cout<<"name : "<<emp[max].name<<endl;
cout<<"id: "<<emp[max].ID<<endl;
cout<<"salary : "<<emp[max].Salary<<endl;
return 0;
}