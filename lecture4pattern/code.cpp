#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<< "enter number: ";
    cin>>n;
    //                                squar star
    // for (int i=1; i<=n;i++){ //int i =0 ; i<n;i++ both are same
    //     for(int j=1;j<=n;j++){
    //         cout << "*"<< " ";
    //     }
    //     cout << endl;
    // }

    // sqare 1 to 4  4 row 4 column logic
    // for (int i =1 ; i <= n ;i++){

    //     for (int j=1; j<=n;j++){
    //         cout << j<<" ";
    //     }
    //     cout << endl;
    // }




////ABCD
////ABCD
////ABCD
////ABCD
    // for (int i = 0; i < n; i++)//out
    // {
    //     char ch = 'A';
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << ch;
    //         ch = ch + 1;
    //     }
    //     cout << endl;
    // }


//123
//456
//789
    // int i,j ;
    // int num=1;
    //     for ( i =0; i<n;i++){
    //         for ( j =0; j<n;j++){
                
    //             cout << num<<"  ";
    //             num +=1;
    //         }
    //         cout<<endl;

    //     }


//A B C 
//D E F 
//G H I
// char ch ='A';
// for (int i=0; i<n;i++){
//     for (int j=0; j<n; j++)
//     {
//         cout << ch<< " ";
//         ch++;
//     }
//     cout<<endl;
// }





// *
// **
// ***
// ****
    // for (int i= 0 ;i<n;i++){
    //     for(int j=0;j<i+1 ;j++){//j,i+1 | j<=i
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    // }

// 1
// 22
// 333
// 4444
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j <i+1; j++)
    //     {
    //         cout<<i+1;
    //     }
    //     cout<<endl;
    // }
    
//A
//BB
//CCC
//DDDD
// for (int i = 0; i <n; i++){
//     char ch ='A'+i;
//     for (int j = 0; j < i+1; j++)
//     {
//         cout<<ch;
        
//     }
//  cout<<endl;

// }


// 1
// 12
// 123
// 1234
for (int i = 0; i <n; i++){
    
    for (int j = 1; j <= i+1; j++)
    {
        cout<<j;
        
    }
 cout<<endl;

}

    return 0;
}