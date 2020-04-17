#include <bits/stdc++.h>
#define num 1000000007LL
typedef long long ll;
using namespace std;

ll pSequences(ll n, ll p)
{

    ll b[n + 1][p + 1];

    b[0][0] = 1;
    for (ll i = 0; i <= n; i++)
    {
        b[i][0] = 0;
    }

    for (ll i = 1; i <= p; i++)
    {
        b[0][i] = 0;
        b[1][i] = 1;
    }

    ll k = 1, prevk = 0,previ=2;
    bool valueAdded = false;
    for (ll i = 2; i <= n;)
    {
        ll count = 0, s = 1;

        if (prevk == (p / k) && previ==i)
        {
            b[i][k] = (b[i][k - 1] % num);
            valueAdded = true;
        }
        else
        {
            for (ll j = 1; j <= (p / k); j++)
            {

                count =(count+ b[i - 1][j])%num;
            }
        }

        if (k == p)
        {
            if (!valueAdded)
            {
                b[i][k] = (count % num);
            }else{
                valueAdded=false;
            }
            
            k = 1;
            previ=i;
            i++;
        }
        else
        {
            prevk = (p / k);
            b[i][k++] = count % num;
        }
    }

     ll sum = 0;

    for (ll i = 1; i <= p; i++)
    {     
        sum =(sum+b[n][i])%num;
    }

    // for(ll i=0; i<=n;i++){
    //     for(ll j=0;j<=p;j++){
    //         printf("%lld  ",b[i][j]);
    //     }
    //     printf("\n");
    // }


    return sum%num;
}

int main()
{
    
    // ll n,p;

    // scanf("%lld%lld", &n, &p);
    ll count = pSequences(78, 100);

    cout << count << endl;

    return 0;
}