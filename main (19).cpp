/*
المسألة ٣: درجات الطلاب
أنشئ هيكلًا لتمثيل طالب باستخدام الحقول التالية:

الاسم (سلسلة نصية)

رقم القيد (عدد صحيح)

درجات ٣ مواد (مصفوفة من ٣ أعداد صحيحة)

المتطلبات:

أدخل بيانات ٥ طلاب.

احسب متوسط ​​درجات كل طالب واعرضه.

اعرض اسم ورقم قيد الطالب الحاصل على أعلى متوسط ​​درجات.




*/
#include <iostream>
using namespace std;

struct student{
    string name;
    int ID;
   
    float grades[3];
};

int main(){
 
    student students[5];
    int AVG[3];
    
    for(int i=0;i<5;i++){
        cout<<"enter your name : ";
        cin>>students[i].name;
        
        cout<<"enter your ID : ";
        cin>>students[i].ID;
        
        
        int sum=0;
        cout<<"Enter your grades";
        for(int j=0;j<3;j++){
            cin>>students[i].grades[j];
            sum+=students[i].grades[j];
            

        }
        AVG[i]=sum/3;
        
        
        
    }
    
    int Max=0;
    for(int i=0;i<5;i++)
    {
        if(AVG[i]>AVG[Max]){
            Max=i;
        }
    }
    cout<<students[Max].name<<endl;
    cout<<students[Max].ID<<endl;
    
    
   
    
  return 0;  
}