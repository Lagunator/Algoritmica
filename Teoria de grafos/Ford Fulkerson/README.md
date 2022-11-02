# FORD FULKERSON

### Concepto
El algoritmo de Ford-Fulkerson tiene como objetivo buscar caminos en los que se pueda aumentar el flujo usando DFS, hasta que se alcance el flujo máximo. Es aplicable a los Flujos maximales. La idea es encontrar una ruta de penetración con un flujo positivo neto que una los nodos origen y destino. Su nombre viene dado por sus creadores, L. R. Ford, Jr. y D. R. Fulkerson.

Sea G(V,E) un grafo, con V vértices, E aristas y donde por cada arista (u,v), tenemos una capacidad c(u,v) y un flujo f(u,v). Se busca maximizar el valor del flujo desde una fuente S hasta un sumidero T.

El método inicia con f(u,v)=0 para toda (u,v) en V. En cada iteración, se incrementa el flujo en G mediante el resultado de una búsqueda de un «camino de aumento» en una «red residual» G_{f}. Aunque cada iteración del método Ford-Fulkerson aumenta el valor del flujo, el flujo por arista de G puede aumentar o disminuir. En cada iteración el flujo se aumentara hasta que la red G_{f} no tenga más caminos de aumento.

El flujo a aumentar se debe considerar legal, para esto debe seguir que:

- El flujo de para toda arista (u,v) no debe ser mayor que la capacidad de dicha arista.
- El flujo que sale de la fuente S debe ser igual al que llega al sumidero T.

### Ejemplo 
![image](https://user-images.githubusercontent.com/102009436/199381500-1e262f31-351f-4a5a-9fcc-e47e50c3ad01.png)

### Bibliografia 
[Teoria](https://www.researchgate.net/figure/The-problem-with-Ford-Fulkerson-algorithm_fig1_330971147)

