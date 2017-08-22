#include <bits/stdc++.h>

using namespace std;

const int inf = 0x3f3f3f3f;

typedef long long huge;

const int maxn = 16;
const int max_players = 128;

int players[max_players][maxn][maxn];
int n, l, c;
vector<pair<int, int> > winners;

bool verify(int player, int line, int column){
  int cont = 0;
  for(int j = 0; j < c; ++j){
    if(!players[player][line][j])
      ++cont;
  }
  if(cont == c)
    return true;
  cont = 0;
  for(int i = 0; i < l; ++i){
    if(!players[player][i][column])
      ++cont;
  }
  if(cont == l)
    return true;
  return false;
}

void mark(int x, int round){
  for(int k = 0; k < n; ++k){
    for(int i = 0; i < l; ++i){
      for(int j = 0; j < c; ++j){
	if(players[k][i][j] == x){
	  players[k][i][j] = 0;
	  if(verify(k, i, j)){
	    winners.push_back(make_pair(round, k+1));
	  }
	}
      }
    }
  }
}

int main(){

  int balls, x;

  scanf(" %d %d", &l, &c);
  scanf(" %d", &n);
  
  for(int k = 0; k < n; ++k){
    for(int i = 0; i < l; ++i){
      for(int j = 0; j < c; ++j){
	scanf(" %d", &x);
	players[k][i][j] = x;
      }
    }
  }
  scanf(" %d", &balls);
  for(int i = 1; i <= balls; ++i){
    scanf(" %d", &x);
    mark(x, i);  
  }
  int win_round;
  if(winners.size() > 1){ 
    sort(winners.begin(), winners.end());
    if(winners[0].first == winners[1].first)
      printf("EMPATE\n");
    else
      printf("%d %d\n", winners[0].second, winners[0].first);
  }else if (winners.size() == 1)
    printf("%d %d\n", winners[0].second, winners[0].first);
  else
    printf("NADA\n");


  return 0;
}
