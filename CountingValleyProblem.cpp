#include <bits/stdc++.h>

using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, string s) {

    int valley = 0;
    int altitude = 0;//represent sea level

    for(int i = 0; i < n; i++)
    {
        if(s[i] == 'D')
            altitude--;
        else 
            altitude++;

        if(altitude == 0 && s[i] == 'U')
            valley++;
    }

    return valley;
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
