#include <bits/stdc++.h>
#include<math.h>
using namespace std;
#define ll long long 
#define ASCII_SIZE 256
//Hetan Nandre's code 
 
 
// ll top1 = 0;
// ll top2 = 0;
// #define size
 
// void push1 (int data)  
// {  
//   int array[SIZE];  
//   if (top1 < top2 - 1)  
//   {  
//     top1++;  
//     array[top1] = data;  
//   }  
//   else  
//   {  
//     cout << "Stack is full" << endl;  
//   }  
// }  
 
// void push2 (int data)  
// {  
//   int array[SIZE]; 
//   if (top1 < top2 - 1)  
//   {  
//     top2--;  
//     array[top2] = data;   
//   }  
//   else  
//   {  
//     cout << "Stack is full.." << endl;  
//   }  
// }  
 
// void pop1 ()  
// {  
//   int array[SIZE]; 
//   if (top1 >= 0)  
//   {  
//     int popped_element = 0;
//     popped_element = array[top1];  
//     top1--;  
     
//     cout << popped_element << " is being popped from Stack 1" << endl;  
//   }  
//   else  
//   {  
//     cout << "Stack is Empty" << endl;  
//   }  
// }  
 
// void pop2 ()  
// {
//   int array[SIZE];    
//   if (top2 < SIZE)  
//   {  
//     int popped_element = 0;
//     popped_element = array[top2];  
//     top2--;  
     
//     cout << popped_element << " is being popped from Stack 1" << endl;  
//   }  
//   else  
//   {  
//     cout << "Stack is Empty!" << endl;  
//   }  
// }  
 
// void display_stack1 ()  
// {  
//   int array[SIZE]; 
//   int i;  
//   for (i = top1; i >= 0; --i)  
//   {  
//     cout << array[i] << " ";  
//   }  
//   cout << "\n";  
// }  
 
// void display_stack2 ()  
// {
//   int array[SIZE];   
//   int i;  
//   for (i = top2; i < SIZE; ++i)  
//   {  
//     cout <<  array[i] << " ";  
//   }  
//   cout << "\n";  
// }  
   
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    #ifndef ONLINE_JUDGE 
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif
 
    
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (n == 1)
        {
            cout << 0 << endl;
        }
        else
        {
            sort(a, a+n);
            vector<int>v;
            ll h = a[0];
            ll c = 0;
            ll p =0;
            for (int i = 1; i < n; i++)
            {
                if (a[i] >= (2 * h))
                {
                    ll p = ((a[i] + (2*h - 2)) / (2*h - 1));
                    c = c + p - 1;
                }
                
            }
            cout << c << endl;
 
        }
        
    }
    
    return 0;
}