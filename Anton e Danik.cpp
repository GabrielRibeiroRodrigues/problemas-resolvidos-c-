#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

#define d(x) cout<<#x<<" = "<<x<<endl;

#define pb push_back
#define pf push_front
#define mp make_pair
#define f first
#define s second
#define f(i, n) for (int i = 0; i < (n); ++i)
typedef long long ll;
typedef pair<int, int> ii;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main()
{
int a =0,d = 0,n;cin >> n;
string c;cin >>c;
f(i,n){
if(c[i] == 'A'){
    a++;
}
if(c[i] == 'D'){
    d++;
}
}

if(d > a){
    cout << "Danik" << endl;
}

if(d < a){
    cout << "Anton" << endl;
}

if(d == a){
    cout << "Friendship" << endl;
}

}