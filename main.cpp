#include <bits/stdc++.h>

using namespace std;

#define ll long long

mt19937_64 rnd(chrono::steady_clock::now().time_since_epoch().count());

const int INF = 1e9 + 7;
const double EPS = 1e-12;

bool ch;

struct Node{
    int n;
    Node* next;
    Node(int _n) : n(_n), next(nullptr){}
};

struct Stck{
    Node* first;
    Node* last;

    Stck() : first(nullptr), last(nullptr) {}

    bool is_empty(){
        return first == nullptr;
    }

    void insert(int n){
        Node* t = new Node(n);
        if(is_empty()){
            last = t;
        }
        t->next = first;
        first = t;
    }

    void ans(){
        if(is_empty()) { return; }
        Node* t = first;
        int i = 1;
        while(t){
            if(ch){ cout << 'n' << i << " = "; }
            cout << t->n << '\n';
            t = t->next;
        }
    }
};

int main(int argc, char *argv[]){
    //ios_base::sync_with_stdio(0);
    //cin.tie(0); cout.tie(0);
    Stck st;
    string s = argv[1];
    if(s == "true"){
        ch = 1;
    }
    if(ch){ cout << "Input values:\n"; }
    int n, i = 1;
    while(1){
        if(ch){ cout << 'n' << i << " ="; }
        cin >> n;
        if(!n){
            break;
        }
        if(n > 0){
            st.insert(n);
        }
        i++;
    }
    if(ch){ cout << "Aanswer is:"; }
    st.ans();
    return 0;
}