#include <iostream>
using namespace std;
void formula(int eng, int beng, int math, int phy, int chmy, int life_sin, int his, int geo){

    int total;
    float avg, per;

    total = eng + beng + math + phy + chmy + life_sin + his + geo;
    avg = total / 8.0;
    per = (total / 800.0) * 100.0;


    if (eng < 49 || beng < 49 || math < 49 || phy < 49 || chmy < 49 || life_sin < 49 || his < 49 || geo < 49) {
        cout<<"You have failed.\n";
        cout<<"Total:"<<total<<"\nAverage:"<<avg<<"\nPercentage:"<<per<<"\nGrade: F\n";
    } else {
        cout<<"You have passed.\n";
        cout<<"Total:"<<total<<"\nAverage:"<<avg<<"\nPercentage:"<<per<<"\n";

        if (per >= 90)
            cout<<"Grade: A+\n";
        else if (per >= 80)
            cout<<"Grade: A\n";
        else if (per >= 70)
            cout<<"Grade: B\n";
        else if (per >= 60)
            cout<<"Grade: C\n";
        else
            cout<<"Grade: D\n";
    }

}
int main() {
    int eng, beng, math, phy, chmy, life_sin, his, geo;
    int total;
    float avg, per;

    cout<<"Enter English Marks: ";
    cin>>eng;

    cout<<("Enter Bengali Marks: ");
    cin>>beng;

    cout<<("Enter Math Marks: ");
    cin>>math;

    cout<<"Enter History Marks: ";
    cin>>his;

    cout<<"Enter Geography Marks: ";
    cin>>geo;

    cout<<"Enter Physics Marks: ";
    cin>>phy;

    cout<<"Enter Chemistry Marks: ";
    cin>>chmy;

    cout<<"Enter Life Science Marks: ";
    cin>>life_sin;

    formula(eng, beng, math, phy, chmy, life_sin, his, geo);
   

    return 0;
}