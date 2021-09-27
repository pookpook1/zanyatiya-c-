#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>

using namespace std;



int main() {
    string str  , ss;
    getline(cin,str , '\n');
    vector <string> slov ;
    int max = 1;

    while(str != " ")
    {

        int z = str.find(' ');
        if(z < str.size())
        {
            slov.push_back(str.substr(0, z));
            str.erase(0, z + 1);
        }
        else
        {
            slov.push_back(str);
            str.clear();
        }
    }

    sort(slov.begin(), slov.end());

    for (int i = 0 ; i < slov.size() ; i++){
        cout << slov[i] << " " ;
    }

    cout << endl;

    for (int i = 0 ; i < slov.size() ; i++){
     int count = 0;
     for(int j = i; j < slov.size() ; j++){
         if(slov[i] == slov[j]){
             count++;
         }
     }
     if (max < count)
     {
         max = count;
         ss = slov[i];
     }

    }

    cout << max << " " << ss;



    return 0;
}
