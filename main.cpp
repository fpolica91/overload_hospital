#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// function when patient is in_patient
void calculate(int days, int rate, int services, int meds){
  cout<< days << endl;
  cout<< rate << endl;
  cout << services << endl;
  cout<< meds << endl;
  // need to calculate and print out result

}
// function when patient is outpatient. 
void calculate(int services, int meds){
  cout << services << endl;
  cout<< meds << endl;
  // need to calculate and print out result.
}

int main() {
  int days, rate, services, meds;
  bool in_patient;
  string visit_type;
  cout << "Enter `in` for out patient and `out` inpatient:";
  cin>> visit_type;
  // need validation. 
  if(visit_type == "in"){
    cout << "length of stay: ";
    cin>> days;
    cout << "daily room rate: ";
    cin>> rate;
    cout << "cost of services: ";
    cin>> services;
    cout<< "medication cost: ";
    cin>> meds;
    calculate(days, rate, services, meds);
  }else{
    cout << "cost of services: ";
    cin>> services;
    cout<< "medication cost: ";
    cin>> meds;
    calculate(services, meds);
  }
}