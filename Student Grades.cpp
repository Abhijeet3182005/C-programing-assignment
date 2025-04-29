#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;
int main(){
    map<string, vector<int>> students;
    students["Alice"]={80, 90, 85};
    students["Bob"]={75, 65, 70};
    students["Charlie"]={88, 92, 84};
    string topper;
    double highestAvg=0.0;
    for(auto& [name, marks] : students){
        int total=0;
        for(int i=0; i<marks.size(); i++){
            total+=marks[i];
        }
        double avg=total/(double)marks.size();
        cout<<"Student"<<name<<"Marks";
        for(int m : marks){
            cout<<m;
        }
        cout<<"Average:"<<avg<<endl;
        if(avg>highestAvg){
            highestAvg=avg;
            topper=name;
        }
    }
    cout<<"Topper"<<topper<<"with average"<<highestAvg<<endl;
    return 0;
}
