public class Calc{
    public static void main(String[] args) {
        shape circle = new shape();
        circle.setradius(5);
        double radius = circle.getradius();
        double circumference = 2 * 22/7 * radius;
        System.out.println("circumference is : " + circumference);

        shape rectangle = new shape();
        rectangle.setbase(10);
        rectangle.setheight(5);
        int a = rectangle.getbase();
        int b = rectangle.getheight();
        int areaOfRectangle = a * b;
        System.out.println("area of rectangle is : " + areaOfRectangle);

        shape triangle = new shape();
        triangle.setbase(8);
        triangle.setheight(10);
        int base = triangle.getbase();
        int height = triangle.getheight();
        int areaOfTriangle = base * height / 2;
        System.out.println("area of triangle is : " + areaOfTriangle);
    }
}

class shape {
    private int base;
    private int height;
    private double radius;

    public int getbase() {
        return base;
    }

    public int getheight() {
        return height;
    }

    public void setheight(int height) {
        if (height > 0) {
            this.height = height;
        }
    }

    public void setbase(int base) {
        if (base > 0) {
            this.base = base;
        }
    }

    public void setradius(double radius) {
        if (radius > 0) {
            this.radius = radius;
        }
    }

    public double getradius() {
        return radius;
    }
}