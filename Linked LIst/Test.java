import java.util.*;
public class Test{
    public static void main(String[] args){

        Set<Integer> set = new HashSet<>();


        set.add(1);
        set.add(2);
        set.add(3);
        set.add(4);

        printSet(set);
        




    }

    public static void printSet(Set<Integer> set){
        for(Integer i : set){
            System.out.println(i);
        }
}
}
