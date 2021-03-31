package code.ripper.experiment3;

import androidx.appcompat.app.AppCompatActivity;
import androidx.constraintlayout.widget.ConstraintLayout;

import android.graphics.Color;
import android.os.Bundle;

import java.util.Random;

public class HomeActivity extends AppCompatActivity {
    ConstraintLayout layout;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_home);

        layout = (ConstraintLayout) findViewById(R.id.home_layout);
        Random r = new Random();
        int color = Color.argb(255 ,r.nextInt(256),r.nextInt(256),r.nextInt(256));

        layout.setBackgroundColor(color);
    }
}