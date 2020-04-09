#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n) {

    long times_in_divisible = 0;
    long times_in_modulo = 0;

    for(auto& c : s){
        if(c=='a') ++times_in_divisible;
    }

    for(int i=0;i<n%(s.length());++i){
        if(s[i]=='a') ++times_in_modulo;
    }

    return times_in_divisible * (n/(s.length())) + times_in_modulo ;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}

