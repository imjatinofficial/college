package code.ripper.experiment4;

import androidx.annotation.Nullable;
import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity {

    private EditText studentName, studentClass, studentMarks;
    private Button sendBtn;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        studentName = (EditText) findViewById(R.id.student_name_edit_text);
        studentClass = (EditText) findViewById(R.id.class_edit_text);
        studentMarks = (EditText) findViewById(R.id.marks_edit_text);
        sendBtn = (Button) findViewById(R.id.send_button);

        sendBtn.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                String name = studentName.getText().toString();
                String classStudent = studentClass.getText().toString();
                String marks = studentMarks.getText().toString();

                Intent intent = new Intent(MainActivity.this, DisplayActivity.class);
                intent.putExtra("name", name);
                intent.putExtra("studentClass", classStudent);
                intent.putExtra("marks", marks);
                startActivityForResult(intent, 1);
            }
        });
    }

    @Override
    protected void onActivityResult(int requestCode, int resultCode, @Nullable Intent data) {
        super.onActivityResult(requestCode, resultCode, data);
        if (resultCode == RESULT_OK) {
            if (requestCode == 1) {
                if (data.hasExtra("returnString")) {
                    String returnString = data.getStringExtra("returnString");
                    Toast.makeText(MainActivity.this, returnString, Toast.LENGTH_SHORT).show();
                }
            }
        }
    }
}