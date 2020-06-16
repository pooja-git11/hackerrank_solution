#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the pageCount function below.
 */
int pageCount(int n, int p) {
    /*
     * Write your code here.
     */
     int s_page_turn = 0;
     int l_page_turn = 0;
     int i;

     if(p == 1)
        return s_page_turn;
     
     for(i = 2; i <= n; i += 2)
     {
         s_page_turn++;
         if(i == p || i + 1 == p)
            break;
     }

     //checking from last
     if(p == n)
        return l_page_turn;
     if(n % 2 == 0)
     {
         for(i = n-1; i > 1; i -=2)
         {
             l_page_turn++;
             if(i == p || i-1 == p)
                break;
         }
     }
     else
     {
         if(p == n-1)
            return l_page_turn;
         else
         {
             for(i = n-2; i > 1; i -=2)
             {
                 l_page_turn++;
                 if(i == p || i-1 == p)
                    break;
             }
         }
     }

    if(s_page_turn > l_page_turn)
        return l_page_turn;
    else
        return s_page_turn;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int p;
    cin >> p;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = pageCount(n, p);

    fout << result << "\n";

    fout.close();

    return 0;
}
