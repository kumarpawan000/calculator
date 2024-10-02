#include<iostream>

using namespace std;
int main(){
    cout<<"===================================================================================================================="<<endl;
    cout<<"========================================== Simple Calculator ======================================================="<<endl;
    cout<<"===================================================================================================================="<<endl;

    char ch;
    cout<<"Press c for calculate or any other keys to quit :";
    cin >> ch;
    while(ch == 'c')
    {
        int first_number,second_number;
        cout<<"Enter the first Number:"<<endl;
        cin >> first_number;
        cout<<" Enter the Second Number:"<<endl;
        cin >> second_number;

        string operation;cout<<"Enter operation : ";
        cin>> operation;
        if(operation=="+")
        {
            cout<<first_number+second_number<<endl;

        }
        else if (operation=="-")
        {
            cout<<first_number-second_number<<endl;
        }
        else if (operation=="*")
        {
            cout<<first_number*second_number<<endl;
        }
        else if(operation=="/")
        {
            cout<<float(first_number)/ float(second_number)<<endl;
        }

        cout<<"press c for calculate again or any otherkeys to quit :";
        cin>> ch;
        cout<<"================================================================================================================="<<endl;
    }

}