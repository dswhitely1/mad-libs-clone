#include <iostream>
#include <string>
using namespace std;

int main() {
    string adjective1, adjective2, adjective3;
    string girlsName, boysName, mansName;
    string occupation1, occupation2;
    string placeName, clothing, hobby;

    cout << "Please enter an adjective:" << endl;
    getline(cin, adjective1);
    cout << "Please enter a girls name:" << endl;
    getline(cin,girlsName);
    cout << "Please enter another adjective:" << endl;
    getline(cin,adjective2);
    cout << "Please enter an occupation:" << endl;
    getline(cin, occupation1);
    cout << "Please enter a place:" << endl;
    getline(cin, placeName);
    cout << "Please enter plural form of clothing:" << endl;
    getline(cin,clothing);
    cout << "Please enter a hobby:" << endl;
    getline(cin,hobby);
    cout << "Please enter another adjective:" << endl;
    getline(cin, adjective3);
    cout << "Please enter another occupation:" << endl;
    getline(cin, occupation2);
    cout << "Please enter a boys name:" << endl;
    getline(cin, boysName);
    cout << "Please enter a mans name:" << endl;
    getline(cin, mansName);

    cout << "There once was a " + adjective1 + " girl named " + girlsName + " who was a " + adjective2 + " " + occupation1 + " in the Kingdom of " + placeName + ".  ";
    cout << "She loved to wear " + clothing + " and " + hobby + ".  ";
    cout << "She wanted to marry the " + adjective3 + " " + occupation2 + " named " + boysName + " but her father, King " + mansName + " forbid her from seeing him" << endl;

    return 0;
}