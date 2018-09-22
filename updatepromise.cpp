#include <iostream>
#include <vector>
#include <set>
using namespace std;

bool majorityGate(bool a, bool b, bool c, bool d) {
    int count = 0;
    vector<bool> vt;
    vt.push_back(a);
    vt.push_back(b);
    vt.push_back(c);
    vt.push_back(d);
    for( auto it = vt.begin(); it != vt.end(); ++it) {
        if( *it ) {
            count++;
        }
    }

    if( count > 2 ) {
        return true;
    }else {
        return false;
    }
}

int firstDuplicate(vector<int> *vt) {
    set<int> mSet;
    pair<set<int>::iterator, bool> p;
    int index = 0;
    for( auto it = vt->begin(); it != vt->end(); ++it, ++index) {
        p = mSet.insert(*it);
        if( !(p.second) )  {
            return index;
        }
    }
    return -1;
}

float frenchWeeks( float weeks){
     if( weeks <= 0) {
        return 0;
    }
    float fweeks = 0.0;
    float rate = (float)(7 * 24 * 60 * 60) / (float)(10 * 10 * 100 * 100);
    return (weeks * rate); 
}

int main() {

    cout<<"No1: Test for majorityGate" <<endl;
    bool a = true;
    bool b = true;
    bool c = true;
    bool d = false;
    if( majorityGate(a, b, c, d)){
        cout << "TRUE" << endl;
    }else {
        cout << "FALSE" <<endl;
    }

    cout<<"No2: Test for firstDuplicate " <<endl;
    vector<int> nums = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 2};
    int index = firstDuplicate(&nums);
    cout << "index = " << index <<endl;

    cout<<"No3: Test for frenchWeeks " <<endl;
    float fweeks = frenchWeeks(10.89);
    cout<<"frenchWeeks= " << fweeks <<endl;

    return 0;
}

