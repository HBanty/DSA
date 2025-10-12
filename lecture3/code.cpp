#include <iostream>
using namespace std;
int main(){
// // even or odd
// int main(){
//     int n = 10;
//     if (n >= 0) {
//         cout << "n is positive or zero" << endl;
//     } else {
//         cout << "n is negative" << endl;
//     }

// user age can vote or not
//     int age;
//     cout << " Enter your age :";
//     cin >> age;
//     if (age >= 18) {
//         cout << " you can vote \n"
//     } else {
//         cout << " you can't vote " << endl;
//     }
//3rd  even or odd
    // int n;
    // cout << " Enter a number :";
    // cin >> n;
    // if (n % 2 == 0) {
    //     cout << n <<" is even \n";
    // } else {
    //     cout << n <<" is odd \n";
    // }
    // return 0;
//4 th question 
    // int marks;
    // cout << "entr your marks:";
    // cin >> marks;
    // if (marks >= 90)
    // {
    //     cout<<"A";
    // }
    // else if (marks >= 80 && marks <= 90)
    // {
    //     cout << "B";
    // }
    // else
    // {
    //     cout << "C";
    // }
    
    // if (ch >= 'a' && ch <= 'z')
    // {
    //     cout << "lowercase";
    // }
    // else
    // {
    //     cout << "uppercase";
    // }
// char ch;
// cout << "enter your character;";\
// cin >> ch;
// if (ch >= 65 && ch <= 90)
// {
//     cout << "uppercase";
// }
// else
// {
//     cout << "lowercase";
// }

// int n;//declar
// cout << "enter number: ";
// cin >>n;
// cout <<(n >= 0 ? "positive":"negetive")<<endl;

//LOOP
// int count =1;
// int num;
// cout << "enter number:";
// cin >>num;
// while(count <= num){
//     cout << count << " ";
//     count++;
// }



// cout <<endl;




// for loop

// int n =3;
// for (int i=1; i<=3;i++){
//     cout<<i<<" \n";
// }
// cout<<endl;

// sum of n numbers
    // int num;
    // cout << "enter number:";
    // cin>>num;
    // int add;
    // int sum=0;
    // for(int i=1;i<=num;i++){
    //     sum+=i;
    // if(i==5){
    //     break;//keyword
    // }

        
    // }
    // cout<<sum<<endl;



//using while
// int num;
// cout <<"enter number:";
// cin>>num;
// int i=1;
// int sum =0;
// while (i<=num)
// {
//     sum+=i;
//     i++;
// if(i==5){
//         break;//keyword
//     }
// }
// cout << sum <<endl;






// int n;
// cout<<"enter num:";
// cin>>n;
// int sum=0;
// for (int i=1;i<=n;i++){
//     if(i%2!=0){
        
//         sum+=i;
//     }
// }
// cout<<sum<<endl;

// int n=10;
// int oddSum =0;
// int i=1;
// int odd;
// while (i<=n)
// {
//     if(i%2!=0){
//         oddSum+=i;
        
//     }
//     i++;
// }


// cout<<"oddSum is:"<<oddSum<<endl;
//do while
// do
// {
//     cout << "hello world ! \n";
    
// } while (3>5);



// while (3>5)
// {
//     cout << "hello world ! \n";
//
// }





// //print 1 to 10 
// int n= 10;
// int i =1;

// do {
//     cout << i << " ";
//     i++;

// }while (i<=n);

//     /* code */




// is prime in dowhiwle

    // int n=6;
    // bool isPrime= true;
    // for (int i = 2; i <=n-1; i++)
    // {
    //     if (n%i==0) // non prime
    //     {
    //         isPrime = false;
    //         break;
    //     }
        
    // }

    // if (isPrime == true)
    // {
    //     cout << "Prime NO\n";
    // }
    // else
    // {
    //     cout << "nonPrime NO\n";
        
    // }



// isPrime -> true -> prime
// isPrime -> false -> non prime 


// //better approch 
    // int n=7;
    // bool isPrime= true;
    // for (int i = 2; i*i<=n; i++)//i <=n-1
    // {
    //     if (n%i==0) // non prime
    //     {
    //         isPrime = false;
    //         break;
    //     }
        
    // }

    // if (isPrime == true)
    // {
    //     cout << "Prime NO\n";
    // }
    // else
    // {
    //     cout << "nonPrime NO\n";
        
    // }



//nested loop
    //4 number  of star in 5 line  
    //4 number  of star in n line 
    int n=10; 
    for(int i=1;i<=n;i++)//1line is one cercle of loop
    {
        //xnumber of star; in one line 
        int x=5;
        for (int j =1;j<=x ; j++){
            cout<<"*";
        }
        cout <<endl;
        
    }





return 0;
}