#include <iostream>
using namespace std;
int main() {
    int a,matriks[100];
        for(int a=0; a<8; a++){
            cout<<"Masukkan angka: ";
            cin>>matriks[a];
    }
 int arr[2][2][2] = {
 {
    {matriks[0], matriks[1]},
    {matriks[2], matriks[3]},
    },
 {
    {matriks[4], matriks[5]},
    {matriks[6], matriks[7]},
 }
 };
cout<<"\nA|"<<arr[0][0][0]<<", "<<arr[0][0][1]<<"| B|"<<arr[1][0][0]<<", "<<arr[1][0][1]<<"|"<<endl;
cout<<" |"<<arr[0][1][0]<<", "<<arr[0][1][1]<<"|  |"<<arr[1][1][0]<<", "<<arr[1][1][1]<<"|"<<endl<<endl;
cout<<"\n==================================================================================="<<endl;


//a. Penjumlahan Matriks
cout << "Penjumlahan Matriks"<<endl;
cout<<"A + B = "<<endl;
cout<<"|"<<arr[0][0][0] + arr[1][0][0]<<" "<<arr[0][0][1] + arr[1][0][1]<<"|"<<endl;
cout<<"|"<<arr[0][1][0] + arr[1][1][0]<<" "<<arr[0][1][1] + arr[1][1][1]<<"|"<<endl<<endl;
cout<<"\n===================================================================================="<<endl;


//b. Perkalian Matriks
cout << "Perkalian Matriks"<<endl;
cout<<"A x B = "<<endl;
cout<<"|("<<arr[0][0][0]<<"x"<<arr[1][0][0]<<")+("<<arr[0][0][1]<<"x"<<arr[1][1][0]<<") ("<<arr[0][0][0]<<"x"<<arr[1][0][1]<<")+("<<arr[0][0][1]<<"x"<<arr[1][1][1]<<")|"<<endl;
cout<<"|("<<arr[0][1][0]<<"x"<<arr[1][0][0]<<")+("<<arr[0][1][1]<<"x"<<arr[1][1][0]<<") ("<<arr[0][1][0]<<"x"<<arr[1][0][1]<<")+("<<arr[0][1][1]<<"x"<<arr[1][1][1]<<")|"<<endl;
cout<<"="<<endl;
cout<<"|"<<(arr[0][0][0] * arr[1][0][0]) + (arr[0][0][1] * arr[1][1][0])<<" "<<(arr[0][0][0] * arr[1][0][1]) + (arr[0][0][1] * arr[1][1][1])<<"|"<<endl;
cout<<"|"<<(arr[0][1][0] * arr[1][0][0]) + (arr[0][1][1] * arr[1][1][0])<<" "<<(arr[0][1][0] * arr[1][0][1]) + (arr[0][1][1] * arr[1][1][1])<<"|"<<endl<<endl;
cout<<"\n===================================================================================="<<endl;


//c. Transpose Matriks
cout<<"Transpose Matriks"<<endl;
cout<<"|"<<arr[0][0][0] + arr[1][0][0]<<" "<<arr[0][1][0] + arr[1][1][0]<<"|"<<endl;
cout<<"|"<<arr[0][0][1] + arr[1][0][1]<<" "<<arr[0][1][1] + arr[1][1][1]<<"|"<<endl;
 return 0;
}
