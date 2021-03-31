class CountObjectsCreated{
    static int count = 0;
    CountObjectsCreated(){
        count++;
    }
    public static void main(String[] args) {
        CountObjectsCreated o = new CountObjectsCreated();
        CountObjectsCreated o1 = new CountObjectsCreated();
        CountObjectsCreated o2 = new CountObjectsCreated();
        CountObjectsCreated o3 = new CountObjectsCreated();
        System.out.println(count);
    }
}