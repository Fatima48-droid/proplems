/*
المسألة ٢: نظام معلومات الكتب
أنشئ بنيةً لتمثيل كتاب بالسمات التالية:

العنوان (سلسلة نصية)

المؤلف (سلسلة نصية)

رقم ISBN (سلسلة نصية)

السعر (عدد عشري)

المتطلبات:

أدخل بيانات ٣ كتب.

اعرض السعر الإجمالي لجميع الكتب.

اعرض معلومات الكتاب الأعلى سعرًا.


*/
#include <iostream>
#include <string>
using namespace std;


struct book {
    string name;
    string Author;
    string ISBN;
    double price;
};

int main() {
    
  book B[3];
  
  for(int i=0;i<3;i++){
      cout<<"enter name of the book : ";
      cin>>B[i].name;
      
      cout<<"enter the name of  author : ";
      cin>>B[i].Author;
      
      cout<<"enter the ISBN :  ";
      cin>>B[i].ISBN;
      
      cout<<"enter the price : ";
      cin>>B[i].price;
  }
  int max=0;
  for(int i=0;i<3;i++)
{ if(B[i].price>B[max].price){
    max=i;
}}

cout<<"the data of  highest book price is :"<<endl;
cout<<B[max].name<<endl;
cout<<B[max].Author<<endl;
cout<<B[max].ISBN<<endl;
cout<<B[max].price<<endl;



    return 0;
}