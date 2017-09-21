#include <bits/stdc++.h>

using namespace std;

const int inf = 0x3f3f3f3f;
const double eps = 1e-9;
const int maxn = 0;

typedef long long huge;

double people, total_ml;
double volume, r, R, H;

double calc_radius(double h){
  return r + ((R-r)/H)*h;
}

int main(){

  int n;
  scanf(" %d", &n);

  while(n--){

    scanf(" %lf %lf", &people, &total_ml);
    scanf(" %lf %lf %lf", &r, &R, &H);
    
    volume = total_ml/people;

    double low = 0, high = H, mid, new_radius, result;

    while(true){
      mid = (low + high)/2.0;
      new_radius = calc_radius(mid);
      result = (M_PI*mid*(r*r + r*new_radius + new_radius*new_radius))/3.0;
      if(abs(result - volume) <= eps){
	printf("%.2lf\n", mid);
	break;
      }else if(result - volume > 0){
	high = mid - 1;
      }else if(result - volume < 0){
	low = mid + 1;
      }
    }
  }


  return 0;
}
