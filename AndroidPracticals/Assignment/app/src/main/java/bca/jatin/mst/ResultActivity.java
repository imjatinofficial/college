package bca.jatin.mst;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.widget.TextView;

public class ResultActivity extends AppCompatActivity {

    private TextView resultTextView;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_result);

        resultTextView = (TextView) findViewById(R.id.resultTextView);

        Intent intent = getIntent();
        if (intent.hasExtra("result")){
            String result = intent.getStringExtra("result").toString();
            resultTextView.setText(result);
        }
        else {
            resultTextView.setText("Oops! Didn't get any Age to check.");
        }
    }
}