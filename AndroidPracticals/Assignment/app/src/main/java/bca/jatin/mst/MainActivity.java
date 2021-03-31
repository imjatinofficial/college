package bca.jatin.mst;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;
import android.widget.Toast;

import static android.text.TextUtils.isEmpty;

public class MainActivity extends AppCompatActivity {
    private EditText ageEditText;
    private TextView resultTextView;
    private Button checkBtn;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        ageEditText = (EditText) findViewById(R.id.ageEditText);
        resultTextView = (TextView) findViewById(R.id.resultTextView);
        checkBtn = (Button) findViewById(R.id.checkBtn);

        checkBtn.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                if(isEmpty(ageEditText.getText().toString())) {
                    Toast.makeText(MainActivity.this, "You must enter Age!", Toast.LENGTH_SHORT).show();
                    return;
                }
                Integer age = Integer.parseInt(ageEditText.getText().toString());
                Intent intent = new Intent(MainActivity.this, ResultActivity.class);
                if (age > 110) {
                    intent.putExtra("result", "Age Out of Limit");
                    startActivity(intent);
                } else if (age < 1) {
                    intent.putExtra("result", "Age Under Limit");
                    startActivity(intent);
                } else if (age > 1 && age < 3) {
                    intent.putExtra("result","Toddlers are not eligible");
                    startActivity(intent);
                } else if (age > 3 && age < 6) {
                    intent.putExtra("result", "Pre-schooler are not eligible");
                    startActivity(intent);
                } else if (age > 6 && age < 10) {
                    intent.putExtra("result", "Child are not eligible");
                    startActivity(intent);
                } else if (age > 9 && age < 13) {
                    intent.putExtra("result", "Pre-teen are not eligible");
                    startActivity(intent);
                } else if (age > 12 && age < 18) {
                    intent.putExtra("result", "Teenager are not eligible");
                    startActivity(intent);
                } else if (age > 17) {
                    intent.putExtra("result","You are Eligible to vote.\nCongrats...");
                    startActivity(intent);
                }

            }
        });
    }
}