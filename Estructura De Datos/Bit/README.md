# BINARY INDEXED TREE 

### Concepto
Es una composición de datos que almacena los resultados de un operación -u operaciones- definida en un intérvalo [0..j]. Esto destinados a sólo tener que obtener el resultado de la operación inversa entre los intérvalos [0..i] y [0..j] para lograr tener el resultado de la operación para el intérvalo [i..j].

 Aunque le llamemos Tree, en verdad el árbol como tal no existe. Todos los datos realmente permanecen guardados en un arreglo. Además, a diferencia de la composición Segment Tree, no guardamos todos los valores del grupo dado. Priorizamos el almacenamiento de la operación elaborada en intérvalos de tamaños más grandes a 1.

 para lograr edificar un BIT, Binary Indexed Tree, debemos primero comprender la operacion binaria Complemento 1 y además el término de bit menos importante. El complemento 1 de un número binario es ese que convierte los 1's del original en 0's y los 0's en 1's. Entonces si poseemos 11, su complemento 1 va a ser 00. De esta operación derivará una segunda operación '-n(a 2 )', donde -n = complemento1(a 2 ) + 1. Y el bit menos relevante de un número binario va a ser el último número 1 presente en el número seguido de los ceros que corresponden. Si poseemos 1010, el bit menos relevante va a ser 10; si poseemos 11100, va a ser 100; si poseemos 1001, va a ser 1; etcétera.

 Hallar el bit menos importante mediante código es importante. La nueva operación -n() nos ayudará. La forma en que encontraremos el bit menos importante de un número binario va a ser implementando la operación 'and' al número binario a 2 y al resultado de -n(a 2 ). 
 
 Tambien se lo conoce como Fenwick tree.

### Ejemplo 
![image](https://user-images.githubusercontent.com/102009436/193955622-a6f5c474-ab9b-4f7c-8970-e8d99a958066.png)


### Bibliografia 
[Teoria](https://cp-algorithms.com/data_structures/fenwick.html)

[Video clave](https://www.youtube.com/watch?v=4SNzC4uNmTA)
