package bca.jatin.experiment5;

public class Student {
    private String mName;
    private String mUid;
    private String mContact;

    public Student(String name, String uid, String contact) {
        mName = name;
        mUid = uid;
        mContact = contact;
    }

    public String getmUid() {
        return mUid;
    }

    public String getmContact() {
        return mContact;
    }

    public String getmName() {
        return mName;
    }
}
