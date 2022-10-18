# PRIM

### Concepto
El algoritmo de Prim es un algoritmo de la teoría de grafos que encuentra un árbol de expansión mínima para un grafo ponderado
conexo. Esto significa que se encuentra un subconjunto de las aristas que forma un árbol que incluye todos los nodos, donde el 
total peso de todas las aristas en elárbol se reduce al mínimo.  Si el gráfico no está conectado, entonces sólo se encuentra un 
mínimo  árbol de expansión para uno de los componentes conectados

(Pasos)
1.Se marca un vértice cualquiera. Será el vértice de partida.
2.Se selecciona la arista de menor peso incidente en el vértice seleccionado anteriormente y se selecciona el otro vértice en el que incide dicha arista.
3.Repetir el paso 2 siempre que la arista elegida enlace un vértice seleccionado y otro que no lo esté. Es decir, siempre que la arista elegida no cree ningún ciclo.
4.El árbol de expansión mínima será encontrado cuando hayan sido seleccionados todos los vértices del grafo.

### Ejemplo 


### Codigo

### Bibliografia 
[Teoria](https://www.monografias.com/trabajos87/monografia-algoritmo-prim/monografia-algoritmo-prim)

