#include <bits/stdc++.h>

using namespace std;

void solve(){
  /*
 aabaabaad

 --b---aad
 -----baad

 a-baabaad
 -abaabaad

 ------a-d
 -a------d

 ---a---ad
 -a-----ad

 From earlier observations, it is clear that two operations of the first kind
 are equal to an operation of the second kind, then an operation of the first
 kind. Then we assume that we do not perform any operations of the second kind
 before operations of the first kind.

 \begin{proof}
     Suppose $i_1 + j_1 = i_2 + j_2$, and $s_{i_1} = s_{i_2}$. Then let $a$ be
 the string derived by applying $i_1$ operations of the first kind, and $j_1$
 operations of the second kind, and vice versa for $b$.

     Clearly $a_1 = a_2.$, and because $i_1 + j_1 = i_2 + j_2$, $a_k = b_k$, for
 $k > 1$.

     Then it is sufficient for $i_1 + j_1 = i_2 + j_2$, and $s_{i_1} = s_{i_2}$
 for $a$ to equal $b$. \end{proof}

 */
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

