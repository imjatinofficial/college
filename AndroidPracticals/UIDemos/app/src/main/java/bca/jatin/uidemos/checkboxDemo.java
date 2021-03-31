package bca.jatin.uidemos;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.CheckBox;
import android.widget.Toast;

public class checkboxDemo extends AppCompatActivity {

    private Button doneChkBtn;
    private CheckBox networking, dataScience, cloudComputing, programmingLanguages, iot;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_checkbox_demo);

        doneChkBtn = findViewById(R.id.chk_done_btn);

        networking = findViewById(R.id.networking);
        dataScience = findViewById(R.id.data_science);
        cloudComputing = findViewById(R.id.cloud_computing);
        programmingLanguages = findViewById(R.id.programming_languages);
        iot = findViewById(R.id.iot);

        networking.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                if (networking.isChecked()) {
                    networking.setTextColor(getResources().getColor(R.color.purple_200));
                }
                else {
                    networking.setTextColor(getResources().getColor(R.color.design_default_color_error));
                }
            }
        });

        doneChkBtn.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                String  checked= "";
                if (networking.isChecked()) {
                    checked = checked + "Networking";
                }
                if (dataScience.isChecked()) {
                    checked = checked + "\nData Science";
                }
                if (cloudComputing.isChecked()) {
                    checked = checked + "\nCloud Computing";
                }
                if (programmingLanguages.isChecked()) {
                    checked = checked + "\nProgramming Languages";
                }
                if (iot.isChecked()) {
                    checked = checked + "\nIOT";
                }

                Toast.makeText(checkboxDemo.this, checked, Toast.LENGTH_SHORT).show();
            }
        });

    }
}