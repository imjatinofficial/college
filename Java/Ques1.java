import java.util.*;

class Ques1 {
    public static void main(String args[]) {
        ArrayList<String> elements = new ArrayList();
        elements.add("15");
        if (!elements.isEmpty()) {
            elements.remove("15");
        }
        System.out.println("The size of arrayList : " + elements.size());
    }
}