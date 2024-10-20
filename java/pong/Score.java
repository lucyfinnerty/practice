import java.util.*;
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class Score extends Rectangle{
    
    static int GAME_WIDTH;
    static int GAME_HEIGHT;
    int player1;
    int player2;

    Score(int GAME_WIDTH, int GAME_HEIGHT) {

    }
    public void draw(Graphics g) {
        g.setColor(Color.WHITE);
        g.setFont(new Font("Monospace",0, 20));
    }
}
