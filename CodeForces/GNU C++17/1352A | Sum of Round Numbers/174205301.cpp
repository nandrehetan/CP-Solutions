#include <bits/stdc++.h>
#include<math.h>
using namespace std;
#define ll long long 
#define ASCII_SIZE 256
//Hetan Nandre's code 
 
struct node
{
    int data;
    struct node *next;
};
struct node *head;
void insert_node(int data)
{
 
    struct node *newnode = (struct node *)malloc(sizeof(struct node *));
 
    newnode->data = data;
    newnode->next = head;
    head = newnode;
}
void reverse()
{
    node* current = head;
        node *prev = NULL, *next = NULL;
 
        while (current != NULL) {
            // Store next
            next = current->next;
            // Reverse current node's pointer
            current->next = prev;
            // Move pointers one position ahead.
            prev = current;
            current = next;
        }
        head = prev;
}
void print()
{
    struct node *p;
    p = head;
    while (p != NULL)
    {
        cout << p-> data << " ";
        p = p->next;
    }
    cout << endl;
}
 
 
 
 
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
        vector<int>v;
        ll n;
        cin >> n;
        int power = 1;
        
       while (n > 0)
       {
        if (n % 10 > 0)
        {
            v.push_back((n%10) * power);
        }
        n = n / 10;
        power = power * 10;
       }
    cout << v.size() <<endl;
       for (auto x : v)
        {
        cout << x << " ";
        }
    cout << "\n";
       
    }
    
    return 0;
}