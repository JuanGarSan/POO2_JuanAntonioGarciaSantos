#include <conio.h>
#include <iostream>
struct nodo {
  char nombre[20];
  int edad;
  struct nodo *sgte;
};
struct cola {
  struct nodo *adelante;
  struct nodo *atras;
};
void iniciar(struct cola &);
void encolar(struct cola &, struct nodo);
struct nodo desencolar(struct cola &);
void vercola(struct cola);
void main()

{
  int n, i;
  struct nodo juan;
  struct cola guadalupe;
  struct cola julio;
  struct cola mariana;
  struct cola fernanda;
  struct cola antonio;
  struct cola fatima;
  iniciar(juan);
  iniciar(guadalupe);
  iniciar(julio);
  iniciar(mariana);
  iniciar(fernanda);
  iniciar(antonio);
  cout << "Ingresar cantidad de personas:";
  cin >> n;
  for (i = 0; i < n; i++) {
    cout << "Nombre   :";
    cin >> cte.nombre;
    cout << "Edad     :";
    cin >> cte.edad;
    encolar(q, cte);
  }
  cout << "**Cola Original**" << endl;
  vercola(q);
  while (q.adelante != NULL) {
    cte = desencolar(q);
    if (cte.edad > 15 && cte.edad <= 17)
      encolar(qI, cte);
    if (cte.edad > 17 && cte.edad <= 21)
      encolar(qN, cte);
    if (cte.edad > 21 && cte.edad <= 24)
      encolar(qJ, cte);
    if (cte.edad > 24 && cte.edad <= 30)
      encolar(qA, cte);
    if (cte.edad > 30)
      encolar(qV, cte);
  }
  cout << "**Infantes**" << endl;
  vercola(qI);
  cout << "**Niños**" << endl;
  vercola(qN);
  cout << "**Jovenes**" << endl;
  vercola(qJ);
  cout << "**Adultos**" << endl;
  vercola(qA);
  cout << "***Ancianos" << endl;
  vercola(qV);
  getch();
}
void iniciar(struct cola &q) {
  q.adelante = NULL;
  q.atras = NULL;
}
void encolar(struct cola &q, struct nodo cte) {
  struct nodo *p;
  p = new (struct nodo);
  *p = cte;
  p->sgte = NULL;
  if (q.adelante == NULL)
    q.adelante = p;
  else
    (q.atras)->sgte = p;
  q.atras = p;
}
struct nodo desencolar(struct cola &q) {
  struct nodo *p;
  p = q.adelante;
  struct nodo n = *p;
  q.adelante = (q.adelante)->sgte;
  delete (p);
  return n;
}
void vercola(struct cola q) {
  struct nodo *p;
  p = q.adelante;
  while (p != NULL) {
    cout << p->nombre << endl;
    p = p->sgte;
  }
  cout << endl;
}
