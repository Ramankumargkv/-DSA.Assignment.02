// Q4 ..WAP for finding the volume of the cylinder by taking radius and height as input.
#include<iostream>
using namespace std ;
int main(){
    float radius,height ;
    cout<<"Enter the value of radius = ";
    cin>>radius;
    cout<<"Enetr the value of height = ";
    cin>>height;
    float v,pai= 3.1415926 ;
     v= pai*radius*radius*height;
    cout<<"Volume of cylinder is = "<<v;
}