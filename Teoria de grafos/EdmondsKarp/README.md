# EDMONDS KARP

### Concepto
En ciencias de la computación y teoría de grafos, el Algoritmo de Edmonds-Karp es una implementación del método de Ford-Fulkerson para calcular el flujo maximo en una red de flujo con complejidad O(V E^2). Es asintóticamente más lento que el algoritmo de Push-relabel, que tiene complejidad O(V^3), pero es habitualmente más rápido en la práctica para grafos ralos. El algoritmo fue publicado por primera vez por un científico soviético, Yefim (Chaim) Dinic, en 1970, e independientemente por Jack Edmonds y Richard Karp en 1972. El Algoritmo de Dinic incluye técnicas adicionales para reducir la complejidad a O(V^2E).

El camino encontrado debería ser el camino más corto que tiene capacidad disponible. La complejidad O(V E^2) se basa demostrando que cada camino aumentante podría ser encontrado con O(E), cada vez que por lo menos uno de los lados E se satura, la distancia a partir del lado saturado hasta los principios por medio del camino aumentante tendrá que ser más extenso que la última vez que este estuvo saturado, y aquel extenso es a lo sumo V. Otra propiedad de este algoritmo es que el extenso del camino aumentante más corto aumenta monotonamente.

### Ejemplo 
![image](https://user-images.githubusercontent.com/102009436/199380085-d47901f4-1a2b-443d-8a4b-99f3efff3b07.png)

### Bibliografia 
[Teoria](https://eprints.ucm.es/id/eprint/16752/1/Memoria_TFM.pdf)


