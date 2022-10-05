# SEGMENT TREE 

### Concepto
El Segment Tree es una composición de datos bastante versátil que sirve para contestar algunas consultas de añadidura tipo mayor, mínimo, sumas, promedio, multiplicaciones y otras menos estándar, en tiempo log N para un cosmos de N recursos. Típicamente el Segment Tree se hace para contestar consultas sobre un arreglo (como "entrégame el mínimo costo entre los índices i y j del arreglo"). Además tienen la posibilidad de hacer actualizaciones de recursos de aquel arreglo que tardan tiempo log N. Si poseemos entonces un problema donde hay Q consultas (preguntas por rango y actualizaciones de elementos) sobre un arreglo de extenso N, la era total de la solución con Segment Tree va a ser Ο(Q log N) más la época de creación inicial del Segment Tree (que se puede conseguir en Ο(N log N)). 

![image](https://user-images.githubusercontent.com/102009436/193952083-de69fdfd-a540-43ca-852c-35b826986643.png)


### Variantes
- Suffix Trie

### Bibliografia 
[Teoria](https://aprende.olimpiada-informatica.org/algoritmia-arboles-segmentos-1)

[Video clave](https://progcomp.cl/segmenttree)
