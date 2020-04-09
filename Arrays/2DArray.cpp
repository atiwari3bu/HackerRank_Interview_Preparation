#include <bits/stdc++.h>

using namespace std;

// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> arr) {

    int max_sum = INT_MIN;
    int sum = 0;

    for(int i = 0; i<4; ++i){
        for(int j=0; j<4; ++j){

            for(int k=0;k<3;++k){
                sum += arr[i][j+k];
            }
            sum += arr[i+1][j+1];

            for(int k=0;k<3;++k){
                sum += arr[i+2][j+k];
            }

            max_sum = max(max_sum,sum);
            sum = 0;

        }
    }

    return max_sum;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = hourglassSum(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}

