import java.util.*;
class Laboratorio3{
    class Node{
        char carater;
        int frequency;
        Node izquierda;
        Node derecha;
        public Node(char carater,int frequency){
            this.carater=carater;
            this.frequency=frequency;
        }
        public int compareTo(Node other){
            return this.frequency-other.frequency;
        }
    }
    public static Node ConstruirArbol(int[] frecuencias){
        PriorityQueue<Node> colaPrioridad=new PriorityQueue<>();
        for(int i=0;i<frecuencias.length;i++){
            if(frecuencias[i]>0){
                colaPrioridad.offer(new Node((char) i,frecuencias[i]));
            }
        }
        while(colaPrioridad.size()>1){
            Node Nodo1=colaPrioridad.poll();
            Node Nodo2=colaPrioridad.poll();
            Node Padre=new Node('\0',Nodo1.frequency+Nodo2.frequency);
            Padre.izquierda=Nodo1;
            Padre.derecha=Nodo2;
            colaPrioridad.offer(Padre);
        }
        return colaPrioridad.poll();
    }
    public static void main(String[] args){
        String text="mobydick";
        int[] frecuencias=new int[256];
        for(char c: text.toCharArray()){
            frecuencias[c]++;
        }
        Node raiz=ConstruirArbol(frecuencias);
        System.out.println(raiz);
    }
}