#include<iostream>
#include<vector>
#include<algorithm>

int n;
int n1; 
 long long Xg, Yg;
long long ans[41] = {0};
 long long x[40], y[40]; 

struct result {
  long long sum_x, sum_y, cnt;	
};

std::vector<result> f, g; 

void fork_forward(int i, long long sum_x, long long  sum_y, int cnt)
{
	if (i == n1) {
		result r;
		r.sum_x = sum_x;
		r.sum_y = sum_y;
		r.cnt = cnt;
		f.push_back(r);
	}
	else { 
		fork_forward(i + 1, sum_x, sum_y, cnt);
		fork_forward(i + 1, sum_x + x[i], sum_y + y[i], cnt + 1);
	} 
}

void fork_backward(int i, long long  sum_x, long long  sum_y, int cnt)
{
	if (i == n) {
		result r;
		r.sum_x = sum_x;
		r.sum_y = sum_y;
		r.cnt = cnt;
		g.push_back(r);
	}
	else { 
		fork_backward(i + 1, sum_x, sum_y, cnt);
		fork_backward(i + 1, sum_x - x[i], sum_y - y[i], cnt + 1);
	} 
}

bool cmp(result lhs, result rhs) {
	if (lhs.sum_x != rhs.sum_x) return lhs.sum_x < rhs.sum_x;
	if (lhs.sum_y != rhs.sum_y) return lhs.sum_y < rhs.sum_y;
	return false;
}

int main() {
	std::cin >> n;
	std::cin >> Xg >> Yg;
	for (int i = 0; i < n; ++i) {
		std::cin >> x[i] >> y[i];
	}
	n1 = n / 2;
	fork_forward(0, 0, 0, 0); // 0-->n1
	fork_backward(n1, Xg, Yg, 0); // n1-->n2;
	
	std::sort(f.begin(), f.end(), cmp);
	std::sort(g.begin(), g.end(), cmp);
	 
	int i = 0;
	int j = 0;
	
	while (i < f.size() and j < g.size()) {
		if (f[i].sum_x < g[j].sum_x) i++;
		else if (f[i].sum_x > g[j].sum_x) j++;
		else if (f[i].sum_y < g[j].sum_y) i++;
		else if (f[i].sum_y > g[j].sum_y) j++;
		else {
			long long cnt_f[51] = {0};
			//std::fill(cnt_f, cnt_f + 50, 0);
			cnt_f[f[i].cnt] ++;
			while (true) {
				i++;
				if (i == f.size()) break;
				if (f[i].sum_x == f[i-1].sum_x and f[i].sum_y == f[i-1].sum_y) {
					cnt_f[f[i].cnt] ++;
				}
				else break;
			}
			
			long long cnt_g[51] = {0};
			//std::fill(cnt_g, cnt_g + 50, 0);
			cnt_g[g[j].cnt] ++;
			while (true) {
				j++;
				if (j == g.size()) break;
				if (g[j].sum_x == g[j-1].sum_x and g[j].sum_y == g[j-1].sum_y) {
					cnt_g[g[j].cnt] ++;
				}
				else break;
			}
			for (int p = 0; p <= n; p++)
			  for (int q = 0; q + p <= n; ++q) {
			  	ans[p+q] += cnt_f[p] * cnt_g[q];
			  }
		}
	}
	
	
	for (int i = 1; i <= n; ++i) 
	  std::cout << ans[i] << "\n";
}
