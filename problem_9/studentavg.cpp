#include <iostream>
using namespace std;

struct Student {
    int nim;
    float uts, uas, avg;
} ;

int main()
{
    int num;
    cout << "enter the number of student : ";
    cin >> num;
    
    if(num > 50 || num <= 0) {
        cout << "invalid number of students" << endl;
        return 1;
    }
    
    Student students[50];
    
    for(int i = 0; i<num; i++) {
        cout << "enter the nim : ";
        cin >> students[i].nim;
        cout << "enter the UTS value : ";
        cin >> students[i].uts;
        cout << "enter the UAS value : ";
        cin >> students[i].uas;
        
        students[i].avg = (students[i].uts + students[i].uas) / 2;
        
    }
    
    cout << "----------" << endl;
    
    for(int i = 0; i<num; i++) {
        cout << "NIM : " << students[i].nim << endl;
        cout << "average : " << students[i].avg << endl;
    }

    return 0;
}
