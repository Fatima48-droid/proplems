/*

المسألة: إدارة بيانات طالب مع درجات المواد
قم بإنشاء Struct يمثل طالبًا يحتوي على:

الاسم

الرقم الجامعي

مصفوفة من 5 درجات للمواد المختلفة

المطلوب:

إدخال بيانات الطالب، بما في ذلك درجات المواد.

حساب متوسط الدرجات.

طباعة بيانات الطالب ومتوسط درجاته




*/
#include<iostream>
using namespace std;

struct student{
    string name;
    int ID;
   int grade[5];
};
int main()
{
    student st;
    
    cout<<"enter your name : ";
    cin>>st.name;
    
    cout<<"enter your ID : ";
    cin>>st.ID;
    
    cout<<"Enter your grades : ";
    for(int i=0;i<5;i++)
    {
        cin>>st.grade[i];
    }
    
    cout<<st.name<<endl;
    cout<<st.ID<<endl;
   
   for(int i=0;i<5;i++){
       cout<<st.grade[i]<<endl;
   }
    
    
    float AVG,sum=0;
    
    for(int i=0;i<5;i++)
    {
        sum+=st.grade[i];
    }
    
AVG=sum/5;

cout<<"your average grades : "<<AVG;
 return 0;   
    
}