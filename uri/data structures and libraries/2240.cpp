// dia 8 de outubro competicao no querobolsa <<<<<<<<

#include <bits/stdc++.h>

#define _CRT_SECURE_NO_DEPRECATE
#define _USE_MATH_DEFINES
#define INF INT_MAX
#define MS_INF 127 // 2b
#define MS_H_INF 63 // 1b
#define PB push_back
#define MK make_pair
#define S second
#define F first
#define P push
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define si set<int>
#define msi map<string,int>
#define huge long long int
#define MAX 1 //  <<<<<< MAXIMO

#define cl(array, value) \
	memset((array), (value), sizeof (array))
#define f(i, a, b) \
	for(int i = int (a); i <= int (b); ++i)
#define rf(i, a, b) \
	for(int i = int (a); i >= int (b); --i)
#define fvi(c, it) \
	for(vi::iterator it = (c).begin(); it != (c).end(); ++it)
#define fvii(c, it) \
	for(vii::iterator it = (c).begin(); it != (c).end(); ++it)
#define fmsi(c, it) \
	for(msi::iterator it = (c).begin(); it != (c).end(); ++it)

using namespace std;
int c = -1;
int resp = 0;

struct cel {
	int conteudo;
	struct cel *esq;
	struct cel *dir;
	struct cel *meio;
};

typedef cel no;
typedef no *arvore;

no * Raiz (int y) {
    
    no *novo;
    novo = (no *) malloc (sizeof (no));
    
    // raiz nova não possui filhos
    novo->esq = NULL;
    novo->dir = NULL;
    novo->meio = NULL;
    novo->conteudo = y;
    
    return novo;   
}

void insereE(int y, no *p_no){
	no *novo;
	novo = (no *) malloc (sizeof (no));

    novo->esq = NULL;
    novo->dir = NULL;
    novo->meio = NULL;

    novo->conteudo = y;
    p_no->esq = novo;
}


void insereD(int y, no *p_no){
	no *novo;
	novo = (no *) malloc (sizeof (no));

    novo->esq = NULL;
    novo->dir = NULL;
    novo->meio = NULL;

    novo->conteudo = y;
    p_no->dir = novo;
}


void insereM(int y, no *p_no){
	no *novo;
	novo = (no *) malloc (sizeof (no));

    novo->esq = NULL;
    novo->dir = NULL;
    novo->meio = NULL;

    novo->conteudo = y;
    p_no->meio = novo;
}

void varreME(arvore r){
	if(r != NULL && r-> conteudo){
		++c;
		varreME(r->meio);
		resp = max(resp, c);
		c = -1;
		varreME(r->esq);
	}
}


void varreMD(arvore r){
	if(r != NULL && r-> conteudo){
		++c;
		varreMD(r->meio);
		resp = max(resp, c);
		c = -1;
		varreMD(r->dir);
	}
}

int main(){

	int i, j, k;
	arvore e;
	arvore d;
	int n, x, y, p;

	scanf("%d", &n);
	scanf("%d %d %d", &x, &y, &p);

	e = Raiz(x);
	insereM(y, e);
	insereE(p, e);
	while(--n){
		scanf("%d %d %d", &x, &y, &p);
		insereM(y, e);
		insereE(p, e);
	}

	varreME(e);
	cout << resp << endl;

	scanf("%d", &n);
	scanf("%d %d %d", &x, &y, &p);

	d = Raiz(x);
	insereM(y, d);
	insereE(p, d);
	while(--n){
		scanf("%d %d %d", &x, &y, &p);
		insereM(y, d);
		insereE(p, d);
	}


	return 0;
}