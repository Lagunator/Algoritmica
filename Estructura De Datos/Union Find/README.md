# UNION FIND

### Concepto
Union Find es una composición de datos enfocada a detectar qué recursos de un grupo se hallan en un subgrupo detallado. Para comprender el propósito de Union Find, tenemos que regresar al criterio de grafo. Un grafo, en matemática discreta, es un grupo de objetos que se hallan interconectados entre sí. Vamos a llamar a dichos objetos, nodos. Entonces, un grafo está formado por nodos que poseen conexiones entre ellos. Cabe remarcar que hay nodos que no poseen conexiones, sin embargo no se ahondará en el asunto de grafos en esta parte. En Union Find tenemos la posibilidad de mencionar que construiremos varios grafos e identificaremos a qué grafo pertenece qué nodo. 
En el union find tenenmos los nodos hijos y los nodos padres, si o si los nodos hijos tienen que tener un nodo papá aparte de que tampoco es necesario.
Las dos reglas que ya mostre hacen que esto se vuelva en una jerarquía: el superpadre va a ser el nodo que sea su propio papá. Para acortar el procedimiento de averiguación de Union Find y la alianza de un nodo con su nuevo papá, nos enfocaremos en el superpadre. Esto se consigue realizando que el nodo superpadre sea papá directo tanto de sus nodos hijos como de los hijos de sus hijos, etcétera. Esto se consigue encontrando a los superpadres del futuro nodo papá y el futuro nodo hijo y construyendo una interacción padre-hijo con los superpadres encontrado. 

### Ejemplo 
![image](https://user-images.githubusercontent.com/102009436/193952389-4b925afc-da38-4f4b-b925-0b059219b6fc.png)


### Problemas
- Sopa de letras

### Bibliografia 
[Teoria](https://www.techiedelight.com/es/disjoint-set-data-structure-union-find-algorithm/#:~:text=Tambi%C3%A9n%20se%20denomina%20estructura%20de,de%20ese%20conjunto%20en%20particular.)

[Video clave](https://www.youtube.com/watch?v=RKF5NiuFvus)

