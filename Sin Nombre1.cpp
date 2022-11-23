#include<iostream.h>
#include<conio.h>

struct nodo{ int nro;
         struct nodo * sgte;};

typedef nodo *ptrPila;

void imprimir1(ptrPila);
void imprimir2(ptrPila);
void eliminaPila(ptrPila &);
void push(ptrPila &, int);
void unirPilas(ptrPila , ptrPila );
int pop(ptrPila &);

void main(void)
{ ptrPila p1=NULL;
  ptrPila p2=NULL;
  ptrPila p=NULL;
int opc,n,valor,i;
do{
 cout<<"1 Apilar"<<endl;

 cout<<"2 Ver pila"<<endl;

   cout<<"3 Unir"<<endl;
 cout<<"4 Salir"<<endl;
 cout<<"Ingrese una opcion";
 cin>>opc;
 switch(opc)
 {case 1:cout<<"limite de la pila"; cin>>n;
           cout<<"Ingresar pila 1"<<endl;
           for(i=0;i<n;i++)
           {cout<<"Elemento:"<<endl;
            cin>>valor;
      push(p1,valor);
            }
            cout<<"Ingresar pila 2"<<endl;
           for(i=0;i<n;i++)
           {cout<<"Elemento:"<<endl;
            cin>>valor;
      push(p2,valor);
            }
   break;

 case 2:cout<<"Contenido de la pila 1"<<endl;
   imprimir1(p1);
         cout<<"Contenido de la pila 2"<<endl;
   imprimir1(p2);
   break;

   case 3:
           cout<<"Pilas unidas"<<endl;
           unirPilas(p1,p2);
           break;
 }
}while(opc!=4);
}
//Funci�n para insertar elementos en la pila
void push(ptrPila &p, int n)
{ ptrPila q=new(struct nodo);
  q->nro=n;
  q->sgte=p;
  p=q;
}


void unirPilas(ptrPila p1, ptrPila p2)
{
  ptrPila q=p1;
  while(q->sgte!=NULL)
  q=q->sgte;
  q->sgte=p2;
}
//Funci�n para visualizar elementos en la pila
void imprimir(ptrPila p1)
{ while(p1!=NULL)
 {cout<<p1->nro<<endl;
  p1=p1->sgte;
 }
cout<<endl;
}
void imprimir1(ptrPila p1)
{ while(p1!=NULL)
 {cout<<p1->nro<<endl;
  p1=p1->sgte;
 }
cout<<endl;
}
void imprimir2(ptrPila p2)
{ while(p2!=NULL)
 {cout<<p2->nro<<endl;
  p2=p2->sgte;
 }
cout<<endl;
}
