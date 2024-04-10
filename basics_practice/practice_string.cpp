
// input aaabb
// return aaa (longest consecutive string)
#include <iostream>
using namespace std;
int main()
{
    string str;
    cout << "Enter the string" << endl;
    cin >> str;
    string currString = "", largeststring = "";
    currString = str[0];
    largeststring = str[0];
    for (int i = 0; i < str.length() - 1; i++)
    {
        cout << "i = " << i << endl;
        if (str[i] == str[i + 1])
        {
            currString = currString + str[i + 1];
        }
        else
        {
            currString = str[i + 1];
        }
        if (currString.length() >= largeststring.length())
        {
            largeststring = currString;
        }

        cout << "currString = " << currString
             << "     largeststring = " << largeststring << endl;
    }
    cout << largeststring.length() << endl
         << largeststring << endl;
}

// // input aaabb
// // return aaa (longest consecutive string)
// #include <iostream>
// using namespace std;
// int main()
// {
//     string str;
//     cout << "Enter the string" << endl;
//     cin >> str;
//     int currcount = 1, highiestcount = 0;
//     string currString = "", largeststring = "";
//     currString = str[0];
//     for (int i = 0; i < str.length() - 1; i++)
//     {
//         if (str[i] == str[i + 1])
//         {
//             currcount++;
//             currString = currString + str[i + 1];
//         }
//         else
//         {
//             currcount = 1;
//             currString = str[i + 1];
//         }
//         if (currcount >= highiestcount)
//         {
//             largeststring = currString;
//             highiestcount = currcount;
//         }
//     }
//     cout << highiestcount << endl
//          << largeststring << endl;
// }

// #include<iostream>
// using namespace std;
// int main(){
//   int matrix[3][3];
//   cout<<"Enter the matrix"<<endl;
//  for (int i = 0; i < 3; i++)
//  {
//    for (int j = 0; j < 3; j++)
//    {
//    cin>>matrix[i][j];
//    }
  
//  }
//  cout<<"Entered matrix is:"<<endl;
//   for (int i = 0; i < 3; i++)
//  {
//    for (int j = 0; j < 3; j++)
//    {
//    cout<<matrix[i][j]<<" ";
//    }
//    cout<<endl;
//  }
//  return 0;
// }
