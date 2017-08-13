from __future__ import print_function
import random

def gera_matriz(n, m):
  mtx = [[2 for x in range(m)] for y in range(n)]

  pos_i = random.randint(1, n-2)
  pos_j = random.randint(1, m-2)

  mtx[pos_i][pos_j] = 3

  for i in range(1, n-1):
    for j in range(1, m-1):
      if(mtx[i][j] != 3):
        mtx[i][j] = random.randint(0,1)

  return mtx

def salva_matriz(n, m, mtx):
  for i in range(0, n):
    for j in range(0, m):
      if(j == m-1):
        print(mtx[i][j], end = "")
      else:
        print(str(mtx[i][j]) + " ", end = "")
    print()

def gera_casos(casos, n_min, n_max):
  for caso in range(0, casos):
    rn = random.randint(n_min, n_max)
    rm = random.randint(n_min, n_max)
    rk = random.randint(n_min, n_max)

    print(rn, rm, rk)
    salva_matriz(rn, rm, gera_matriz(rn, rm))

gera_casos(5, 3, 10)
gera_casos(10, 3, 20)
gera_casos(10, 3, 500)
gera_casos(10, 3, 999)
gera_casos(1, 999, 999)
print("0 0 0")
