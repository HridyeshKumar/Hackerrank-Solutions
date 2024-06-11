#include <iostream>
#include <string>
using namespace std ;
int main()
{
    int test_cases;
    cin >> test_cases ;
    string str;
    int count  ;
    int j ;
    char prev ;
    for ( int i =0 ; i < test_cases ;i++)
    {
        cin >> str ;
        j = 1; prev = str[0]; count = 0 ; 
        while((int)str[j]!=0)
        {
            if(str[j] == prev)
                count ++ ;
            else
                prev = str[j] ;
            j++ ;
        }
        cout << count << endl ;
    }
    return 0 ;
}
