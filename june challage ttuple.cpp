#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long int
#define mod 100000
#define for1(k,n) for(ll i=k;i<n;i++)
#define for2(k,n) for(ll j=k;j<n;j++)
#define E cout<<endl
#define max 100000




int main()
{
#ifndef ONLINE_JUDGE
	clock_t tStart = clock();
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base:: sync_with_stdio(false);
	cin.tie(0);

//////////////////////////////////////start...............
	//|| (((a / p == b / q) && (a > p)) && (c == r)) || (((b / q == c / r) && (b > q)) && (p == a)) || (((c / r == a / p) && (c > r)) && (q == b))
	int t;
	cin >> t;
	while (t--)
	{
		ll a, b, c;
		ll p, q, r;

		cin >> p >> q >> r;
		cin >> a >> b >> c;

		ll j, k, l, x, y, z;

		j = p - a; k = q - b; l = r - c;
		if (p != 0 && a % p == 0 && a >= p)
			x = a / p;
		else if (a != 0 && p % a == 0 && p > a)
			x = p / a;
		else
			x = INT_MAX;

		if (q != 0 && b % q == 0 && b >= q)
			y = b / q;
		else if (b != 0 && q % b == 0 && q > b)
			y = q / b;
		else
			y = INT_MIN + 9999;

		if (r != 0  && c % r == 0 && c >= r)
			z = c / r;
		else if (c != 0 && r % c == 0 && r > c)
			z = r / c;
		else
			z = INT_MAX - 999;

		//cout << x << " " << y << " " << z << endl;


		if (((p == a && q == b ) && (q == b && r == c)))
			cout << "0" << endl;
		else if ((a == 0 && b == 0 && c == 0) || (a == 0 && b == 0 && c == r ) || (b == 0 && c == 0 && p == a) || (a == 0 && c == 0 && q == b))
			cout << "1" << endl;
		else if ((x == y && y == z) || (j == k && k == l))
			cout << "1" << endl;
		else if ((p == a && q == b && r != c) || (p == a && r == c && q != b) || (p != a && q == b && r == c))
			cout << "1" << endl;
		else if ((j == k && r == c) || (k == l && p == a) || (l == j && q == b) || (x == y && r == c) || (y == z && p == a) || (z == x && q == b) )
			cout << "1" << endl;
		else if (j == k || k == l || l == j || x == y || y == z || z == x)
			cout << "2" << endl;
		else
			cout << "3" << endl;



	}
/////////////////////////////end................................... ....
#ifndef ONLINE_JUDGE
	//prunsigned long longf("\nRun Time -> %.10fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC);
#endif
	return 0;

}

//c v a s selecting text or x for selecting cut
//ctrl+d after selecting text to select same type
//ctrl+shift+d for copy and paste the line below it
//ctrl+del to delete a text
//ctrl+left to jump left of line or vice versa
//ctrl+shift+"/"  to comment whole block and vice versa for undo
//ctrl+"/" for commenting a line
