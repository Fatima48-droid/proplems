/*
المسألة 4: استخدام Struct متداخل مع مصفوفة من الكائنات
قم بإنشاء مصفوفة من الطلاب بحيث يمكن تخزين بيانات 3 طلاب على الأقل.


*/
#include<iostream>
using namespace std;


struct student {
 string name;
 int age;
 int grade;
 };
 int main() {
 student st[3] = {
 {"Fatima" , 20 , 80},
 {"eslam" , 21, 99},
 {"mohamed" , 23, 100}};
    
for(int i=0;i<3;i++){
    cout<<"names :"<<st[i].name<<endl;
    cout<<"ages : "<<st[i].age<<endl;
    cout<<"grades : "<<st[i].grade<<endl;
}
    
    
return 0;
}
