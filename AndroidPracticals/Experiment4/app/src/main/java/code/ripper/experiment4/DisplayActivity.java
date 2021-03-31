package code.ripper.experiment4;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.widget.TextView;
import android.widget.Toast;

public class DisplayActivity extends AppCompatActivity {

    private TextView resultTextView;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_display);

        resultTextView = (TextView) findViewById(R.id.result_text_view);

        Intent intent = getIntent();

        String name = intent.getStringExtra("name");
        String studentClass = intent.getStringExtra("studentClass");
        String marks = intent.getStringExtra("marks");

       resultTextView.setText(name + "\n" + studentClass + "\n" + marks);

    }
    @Override
    public void finish(){
        Intent i = new Intent();
        i.putExtra("returnString", "Back to Home");
        setResult(RESULT_OK, i);
        super.finish();
    }
}