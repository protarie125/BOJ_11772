#include <iostream>
#include <string>
#include <sstream>
#include <cmath>

using namespace std;

using ll = long long;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	ll n;
	cin >> n;

	auto x = ll{ 0 };
	while (0 < (n--)) {
		string p;
		cin >> p;

		const auto& len = p.length();

		const auto& num = p.substr(0, len - 1);
		auto iss = istringstream{ num };
		ll v;
		iss >> v;

		const auto& e = static_cast<ll>(p[len - 1] - '0');

		x += pow(v, e);
	}

	cout << x;

	return 0;
}