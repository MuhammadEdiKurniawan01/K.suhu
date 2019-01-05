#include <iostream>
using namespace std;
int main (){
    int c;
    float F=1.8,suhu1;
    float R=0.8,suhu2;

    cout<<"masukan suhu celsius : ";
    cin>>c;

    suhu1=F*c+32;
    cout<<"hasil konversi kesuhu fahrenhead :"<<suhu1;
    cout<<"\n";
    suhu2=R*c;
    cout<<"hasil konversi kesuhu Reamur :"<<suhu2;
    return 0;
}
