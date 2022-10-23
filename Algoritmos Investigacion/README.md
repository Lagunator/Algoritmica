# ALGORITMOS TAREA


# Edit Distance
Un algoritmo de tipo bottom-up, común en programación dinámica. Llamada tambien "Distancia de Levenshtein" o "Distancia entre Palabras" es el número mínimo de operaciones requeridas para transformar una cadena de caracteres en otra, se usa ampliamente en teoría de la información y ciencias de la computación. Se entiende por operación, bien una inserción, eliminación o la sustitución de un carácter. Esta distancia recibe ese nombre en honor al científico ruso Vladimir Levenshtein, quien se ocupó de esta distancia en 1965. Es útil en programas que determinan cuán similares son dos cadenas de caracteres, como es el caso de los correctores ortográficos.

Por ejemplo, la distancia de Levenshtein entre "perro" y "pelo" es de 3 porque se necesitan al menos tres ediciones elementales para cambiar uno en el otro.

### Ejemplo 
![image](https://user-images.githubusercontent.com/102009436/197367592-070786a6-8d35-42ba-99a1-fcb77659ddac.png)


### Codigo
[Aprender](https://github.com/Lagunator/Algoritmica/blob/main/Algoritmos%20Investigacion/editdistance.cpp)

### Bibliografia 
[Teoria](https://www.wikiwand.com/es/Distancia_de_Levenshtein)


# Floyd Warshall
Es bastante usado una vez que se quiere decidir el camino mínimo entre todos los pares de vértices de un grafo, comparando todos los probables senderos consigue mejorar paulatinamente la estimación hasta llegar a la más óptima. Esto puede manifestarse de forma más clara por medio de una ejemplificación de utilización.
La complejidad de este algoritmo vendria a ser O(n*3).

### Ejemplo 
![image](https://user-images.githubusercontent.com/102009436/197368016-27ce69f0-93f4-4f84-b026-379c287093a1.png)

### Código
[Ver y Aprender](https://github.com/Lagunator/Algoritmica/blob/main/Algoritmos%20Investigacion/floydW.cpp)

### Bibliografia 
[Teoria](https://medium.com/algoritmo-floyd-warshall/algoritmo-de-floyd-warshall-e1fd1a900d8)


# Rod Cutting
Dada una barra de n pulgadas de longitud y una matriz de precios que incluye los precios de todas las piezas de tamaño menor que n. Determine el valor máximo que se puede obtener cortando la varilla y vendiendo las piezas. Por ejemplo, si la longitud de la varilla es 8 y los valores de las diferentes piezas se dan a continuación, entonces el valor máximo que se puede obtener es 22 (cortando en dos piezas de longitudes 2 y 6) 

longitud | 1 2 3 4 5 6 7 8  
-           -               -
precio | 1 5 8 9 10 17 17 20


### Ejemplo 
![image](https://user-images.githubusercontent.com/102009436/197368756-a4e76909-3fce-4462-9088-3322187c0f54.png)

### Codigo
[Ver y entender](https://github.com/Lagunator/Algoritmica/blob/main/Algoritmos%20Investigacion/rodCutting.cpp)

### Bibliografia 
[Teoria](https://www.geeksforgeeks.org/cutting-a-rod-dp-13/)


# Longest Increasing Subsequence.
El problema de la subsecuencia creciente más extensa (Longest Increasing Subsequence) es descubrir una subsecuencia de una sucesión dada en la que los recursos de la subsecuencia se encuentren ordenados, de menor a más grande, y en la que la subsecuencia sea lo más extensa viable.
Tenga presente que el problema se dirige especialmente subsecuencias que no requieren ser contiguos, o sea, no es necesario que las subsecuencias ocupen posiciones consecutivas en las secuencias originales.


### Ejemplo 
![image](https://user-images.githubusercontent.com/102009436/197369099-ab94f411-e10b-415a-ab2c-d445a4804ee9.png)


### Codigo
[Ver](https://github.com/Lagunator/Algoritmica/blob/main/Algoritmos%20Investigacion/liscode.cpp)

### Bibliografia 
[Teoria](https://www.geeksforgeeks.org/c-program-for-longest-increasing-subsequence/)
