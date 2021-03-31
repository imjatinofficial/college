package bca.jatin.uidemos;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.TextView;
import android.widget.ToggleButton;

public class toggleDemo extends AppCompatActivity {

    private ToggleButton toggleButton;
    private TextView textView;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_toggle_demo);

        toggleButton = findViewById(R.id.toggle_btn);
        textView = findViewById(R.id.text_toggle);

        toggleButton.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                if (toggleButton.isChecked()) {
                    textView.setText("This is checked");
                }
                else {
                    textView.setText("Not checked");
                }
            }
        });
    }
}