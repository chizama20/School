import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.layout.VBox;
import javafx.scene.paint.Color;
import javafx.scene.shape.Circle;
import javafx.stage.Stage;

public class TrafficLightSimulation extends Application {
    private int currentLight = 0; 
    private Circle redLight, greenLight, yellowLight;

    @Override
    public void start(Stage primaryStage) {
        VBox root = new VBox(10);
        root.setStyle("-fx-padding: 20; -fx-alignment: center;");

        redLight = createLight(Color.RED);
        greenLight = createLight(Color.GRAY);
        yellowLight = createLight(Color.GRAY);

        Button nextButton = new Button("Next");
        nextButton.setOnAction(e -> changeLight());

        root.getChildren().addAll(redLight, greenLight, yellowLight, nextButton);

        Scene scene = new Scene(root, 200, 250);
        primaryStage.setTitle("Traffic Light Simulation");
        primaryStage.setScene(scene);
        primaryStage.show();
    }

    private Circle createLight(Color color) {
        Circle light = new Circle(50);
        light.setFill(color);
        return light;
    }

    private void changeLight() {
        redLight.setFill(Color.GRAY);
        greenLight.setFill(Color.GRAY);
        yellowLight.setFill(Color.GRAY);

        
        switch (currentLight) {
            case 0: 
                redLight.setFill(Color.RED);
                currentLight = 1; 
                break;
            case 1: 
                greenLight.setFill(Color.GREEN);
                currentLight = 2; 
                break;
            case 2: 
                yellowLight.setFill(Color.YELLOW);
                currentLight = 0; 
                break;
        }
    }

    public static void main(String[] args) {
        launch(args);
    }
}
