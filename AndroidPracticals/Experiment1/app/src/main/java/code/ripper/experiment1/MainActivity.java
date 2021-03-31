package code.ripper.experiment1;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity {

    private EditText numberEditText;
    private TextView resultTextView;
    private Button generateButton, clearButton;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        numberEditText = (EditText) findViewById(R.id.number);
        resultTextView = (TextView) findViewById(R.id.result);
        generateButton = (Button) findViewById(R.id.generate);
        clearButton = (Button) findViewById(R.id.clear);

        generateButton.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Integer num = Integer.parseInt(numberEditText.getText().toString());
                Integer res;
                if(num == 0 || num == 1){
                    resultTextView.setText("Factorial (" + num + ") = 1\nSquare (" + num + ") = " + num);
                    return;
                }else if (num < 13) {
                    res = calcFactorial(num);
                    resultTextView.setText("Factorial (" + num + ") = " + res);
                } else {
                    resultTextView.setText("Factorial of " + num + " is too large for 32 bit Integer.");
                }
                res = calcSquare(num);
                resultTextView.append("\nSquare (" + num + ") = " + res);

            }
        });


        clearButton.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                numberEditText.setText("");
                resultTextView.setText("");
            }
        });
    }

    public Integer calcFactorial(Integer num) {
        if (num == 1) return num;
        return num * calcFactorial(num-1);
    }

    public Integer calcSquare(Integer num) {
        return num * num;
    }
}