#include <bits/stdc++.h>

using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, string s) {
    int level = 0;
    int number_of_valley=0;

    for(auto& c : s){
        if(c=='U') ++level;
        if(c=='D') --level;

        if(level == 0 && c=='U'){
            ++number_of_valley;
        }   
    }

    return number_of_valley;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int result = countingValleys(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}

