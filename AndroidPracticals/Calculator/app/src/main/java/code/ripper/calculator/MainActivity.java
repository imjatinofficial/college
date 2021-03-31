package code.ripper.calculator;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {
    private EditText numA;
    private EditText numB;
    private TextView result;
    private Button addBtn, subBtn, divBtn, mulBtn, modBtn, clrBtn;
    private double a, b, res;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        numA = (EditText) findViewById(R.id.numA);
        numB = (EditText) findViewById(R.id.numB);
        result =  (TextView) findViewById(R.id.resultTextView);
        addBtn = (Button) findViewById(R.id.addBtn);
        subBtn = (Button) findViewById(R.id.subBtn);
        divBtn = (Button) findViewById(R.id.divBtn);
        mulBtn = (Button) findViewById(R.id.mulBtn);
        modBtn = (Button) findViewById(R.id.modBtn);
        clrBtn = (Button) findViewById(R.id.clearBtn);

        addBtn.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                a = Double.parseDouble(numA.getText().toString());
                b = Double.parseDouble(numB.getText().toString());
                res = a + b;
                result.setText(a + " + " + b + " = " + res);
            }
        });



        subBtn.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                a = Double.parseDouble(numA.getText().toString());
                b = Double.parseDouble(numB.getText().toString());
                res = a - b;
                result.setText(a + " - " + b + " = " + res);
            }
        });

        mulBtn.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                a = Double.parseDouble(numA.getText().toString());
                b = Double.parseDouble(numB.getText().toString());
                res = a * b;
                result.setText(a + " * " + b + " = " + res);
            }
        });

        divBtn.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                a = Double.parseDouble(numA.getText().toString());
                b = Double.parseDouble(numB.getText().toString());
                if (b == 0) {
                    result.setText("Can't Divide by ZERO");
                    return;
                }
                res = a / b;
                result.setText(a + " / " + b + " = " + res);
            }
        });

        modBtn.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                a = Double.parseDouble(numA.getText().toString());
                b = Double.parseDouble(numB.getText().toString());
                if (b == 0) {
                    result.setText("Can't Divide by ZERO");
                    return;
                }
                res = a % b;
                result.setText(a + " %  " + b + " = " + res);
            }
        });

        clrBtn.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                numA.setText("");
                numB.setText("");
                result.setText("");
            }
        });
    }
}