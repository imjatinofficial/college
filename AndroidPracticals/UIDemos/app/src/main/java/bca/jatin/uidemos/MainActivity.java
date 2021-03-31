package bca.jatin.uidemos;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.RadioButton;
import android.widget.RadioGroup;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity {
    private RadioGroup courseGroup, genderGroup;
    private RadioButton maleBtn, femaleBtn, mcaBtn, bcaBtn, bbaBtn, btechBtn, bscBtn, mbaBtn;
    private Button doneBtn;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        courseGroup = findViewById(R.id.radio_course);
        genderGroup = findViewById(R.id.radio_gender);
        maleBtn = findViewById(R.id.male_radio);
        femaleBtn = findViewById(R.id.female_radio);
        mcaBtn = findViewById(R.id.mca_radio);
        bcaBtn = findViewById(R.id.bca_radio);
        bbaBtn = findViewById(R.id.bba_radio);
        btechBtn = findViewById(R.id.btech_radio);
        bscBtn = findViewById(R.id.bsc_radio);
        mbaBtn = findViewById(R.id.mba_radio);

        doneBtn = findViewById(R.id.done_btn);

        doneBtn.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                String gender = "None", course = "None";
                if (maleBtn.isChecked()) {
                    gender = "male";
                } else if(femaleBtn.isChecked()) {
                    gender = "female";
                }

                int courseGrpId = courseGroup.getCheckedRadioButtonId();
                RadioButton rbCourse = courseGroup.findViewById(courseGrpId);
                course  = rbCourse.getText().toString();

                String res = "Gender : " + gender + "\nCourse : " + course;

                Toast.makeText(MainActivity.this, res ,
                        Toast.LENGTH_SHORT).show();
            }
        });
    }
}