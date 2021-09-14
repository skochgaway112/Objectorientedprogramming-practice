#include<bits/stdc++.h>
#define ll long long int
using namespace std;
struct student{
     char name[25];
     int roll;
     int english;
     int hindi;
     int maths;
     int science;
     int sst;

};
int main(){
      struct student s;
      cout<<"Enter the name of the student"<<":"<<endl;
      cin.get(s.name, 25);
      cout<<"Enter roll no"<<":"<<endl;
      cin>>s.roll;
      cout<<"Enter marks in English"<<":"<<endl;
      cin>>s.english;
      cout<<"Enter marks in Hindi"<<":"<<endl;
      cin>>s.hindi;
      cout<<"Enter marks in Maths"<<":"<<endl;
      cin>>s.maths;
      cout<<"Enter marks in Science"<<":"<<endl;
      cin>>s.science;
      cout<<"Enter marks in SST"<<":"<<endl;
      cin>>s.sst;
      cout<<"Name :"<<s.name<<endl;
      cout<<"Roll no :"<<s.roll<<endl;
      cout<<"English marks :"<<s.english<<endl;
      cout<<"Hindi marks :"<<s.hindi<<endl;
      cout<<"Maths marks :"<<s.maths<<endl;
      cout<<"Science marks:"<<s.science<<endl;
      cout<<"SST marks :"<<s.sst<<endl;
    return 0;
}