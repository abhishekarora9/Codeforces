#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    long long int t = 0;
    cin >> t;
    string a[10000];
    long long int b[100000];
    memset(b, 0, sizeof b);
    memset(a, 0, sizeof a);
    long long int stringcount = 0;
    long long int globalmax = -1000000;
    string globalstring;
    string temp;
    long long int temp2 = 0;

    for (long long int i = t; i > 0; --i) {

        cin >> temp;
        cin >> temp2;
        if (stringcount == 0) {
            a[stringcount] = temp;
            b[stringcount] = b[stringcount] + temp2;
            //cout<<a[stringcount]<<" "<<b[stringcount]<<endl;

            if (b[stringcount] > globalmax) {
                globalmax = b[stringcount];
                globalstring = a[stringcount];
            }
            stringcount++;
            continue;
        }
        else {
            for (long long int j = 0; j < stringcount; ++j) {
                if (a[j] == temp) {

                    b[j] = b[j] + temp2;
                    // cout<<a[stringcount]<<" "<<b[stringcount]<<endl;
                    if (b[j] > globalmax) {
                        globalmax = b[j];
                        globalstring = temp;
                    }

                    break;
                }
                else if (j == stringcount - 1) {
                    a[stringcount] = temp;

                    b[stringcount] = b[stringcount] + temp2;

                    //cout<<a[stringcount]<<" "<<b[stringcount]<<endl;
                    if (b[stringcount] > globalmax) {
                        globalmax = b[stringcount];
                        globalstring = a[stringcount];
                    }
                    stringcount++;
                    break;
                }
            }
        }
        //cout<<globalstring<<"\t"<<globalmax<<endl;
    }

    cout << globalstring << endl;
    return 0;
}