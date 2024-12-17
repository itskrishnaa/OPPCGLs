#include <iostream>
#include <string>
#include <map>
using namespace std;
int main(){
    map<string,int>state;
    state.insert(pair<string,int>("maharashtra",903245240999));
    state.insert(pair<string,int>("goa",900999));
    state.insert(pair<string,int>("karnataka",903234250999));
    state.insert(pair<string,int>("haryana",903252599));
    state.insert(pair<string,int>("assam",932545999));
    state.insert(pair<string,int>("sikkim",90254999));
    state.insert(pair<string,int>("rajasthan",9354599));
    state.insert(pair<string,int>("kerala",9445399));
    state.insert(pair<string,int>("andhra",934654769));
    state.insert(pair<string,int>("tamil",95465469));
    string search;
    cout<<"Enter the name of state you want to search :"<<endl;
    cin>>search;
    map<string, int>::iterator i;
    int f=0;
    for ( i = state.begin(); i != state.end(); i++)
    {
        if(search==i->first){
            f++;
            cout<<"the population of "<<i->first<<" is "<<i->second<<endl;
        }
    }if (f==0){
        cout<<"State not found."<<endl;
    }
}
