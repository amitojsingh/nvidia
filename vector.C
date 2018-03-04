/* Usefull set of methods for vector class*/
#include<iostream>
#include<cmath>
#include<math.h>

using namespace std;
class vector3d
{
private: 
int a,b,c,x,y,z,resultx,resulty,resultz;
public: 
void input();
void addition();
void magnitude();
void dotproduct();
void display();
};

void vector3d::input(){
cout<<"Input first vector"<<endl;
cin>>a>>b>>c;
cout<<"Input second vector"<<endl;
cin>>x>>y>>z;
}
void vector3d::addition(){
 resultx=a+x;
 resulty=b+y;
 resultz=c+z;
}
void vector3d::magnitude(){
int mx=pow((a+x),2);
int my=pow((b+y),2);
int mz=pow((c+z),2);
int mresult=sqrt(mx+my+mz);
cout<<"magnitude is"<<mresult<<endl;
}

void vector3d::dotproduct(){
int product;
product=a*x+b*y+c*z;
cout<<"dotproduct="<<product<<endl;
}
void vector3d::display(){
cout<<"("<<resultx<<","<<resulty<<","<<resultz<<")"<<endl;
}
int main(int argc, const char* argv[]){
vector3d myvector;
myvector.input();
myvector.addition();
myvector.display();
myvector.magnitude();
myvector.dotproduct();
}

