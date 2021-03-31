package bca.jatin.experiment5;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.EditText;
import android.widget.Spinner;
import android.widget.TextView;
import android.widget.Toast;

import java.util.ArrayList;

public class MainActivity extends AppCompatActivity {

    private Spinner spinner;
    private Button registerButton;
    private EditText nameEditText, uidEditText, contactEditText;
    private TextView detailsTextView;
    private ArrayAdapter<String> spinnerAdapter;
    private ArrayList<String> uidList;
    private ArrayList<Student> record;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        record = new ArrayList<Student>();
        uidList = new ArrayList<String>();

        spinner = (Spinner) findViewById(R.id.spin_list);
        registerButton = (Button) findViewById(R.id.register_button);
        nameEditText = (EditText) findViewById(R.id.name_edit_text);
        uidEditText = (EditText) findViewById(R.id.uid_edit_text);
        contactEditText = (EditText) findViewById(R.id.contact_edit_text);
        detailsTextView = (TextView) findViewById(R.id.details_text_view);

        spinnerAdapter = new ArrayAdapter<String>(this, android.R.layout.simple_spinner_dropdown_item, uidList);
        spinner.setAdapter(spinnerAdapter);



        registerButton.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                String name = nameEditText.getText().toString();
                String uid = uidEditText.getText().toString();
                String contact = contactEditText.getText().toString();

                record.add(new Student(name, uid, contact));
                uidList.add(uid);
                Toast.makeText(MainActivity.this, "Registered : " + uid, Toast.LENGTH_SHORT).show();
                nameEditText.setText("");
                uidEditText.setText("");
                contactEditText.setText(""); yes wait
            }
        });

    }
}