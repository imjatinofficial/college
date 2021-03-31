import java.util.Vector;

class VectorMethods{
    public static void main(String[] args){
        Vector v = new Vector();
        v.add(1105);
        v.add("Jatin");
        v.add("BCA");
        System.out.println("Initial vector: " + v);
        v.remove("BCA");
        System.out.println("After remove: " + v);
        System.out.println(v.size());
        System.out.println(v.indexOf(1105));
        v.clear();
        System.out.println("After clearing: " + v);
    }
}