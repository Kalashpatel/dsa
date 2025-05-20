#include<iostream>
using namespace std;

int main(){

    int size;
    cout << "enter the size of array";
    cin >> size;

    int a[size];
    for(int i = 0; i < size; i++){
        cout << "enter a[" << i << "] : ";
        cin >> a[i];
    }

    int choice;
    do{
        cout << "1.insertion on the array" << endl;
        cout << "2.updating the array" << endl;
        cout << "3.viewing the array" << endl;
        cout << "4.deleting element of the array" << endl;
        cout << "0.Exit" << endl << endl;
        cout << "enter you choice" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 0:
            break;
        default:
            cout << "invalid choice entered" << endl << endl;
            break;
        }
    }while(choice != 0);




    return 0;
}