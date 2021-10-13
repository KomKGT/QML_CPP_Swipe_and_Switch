import QtQuick 2.0
import QtQuick.Controls 2.13

Rectangle {
        id: rec0
        width: 400
        height: 400
        signal checker(bool checked);
        signal btnPress(bool checked);
        SwipeView {
            id: swipeView
            x: 0
            y: 0
            width: 400
            height: 400
            currentIndex: 0

            Item {
                width: 400
                height: 400
                Rectangle{
                    id: rec01
                    width: 400
                    height: 400

                    Switch {
                        id: sw01
                        x: 145
                        y: 180
                        text: "OFF"
                        onCheckedChanged: {
                            sw01.text = sw01.checked ? "ON" : "OFF";
                            if(sw01.text == "ON")
                                rec0.checker(true)
                            else
                               rec0.checker(false)
                        }

                    }

                }
            }

            Item {
                width: 400
                height: 400
                Rectangle{
                    id: rec02
                    width: 400
                    height: 400
                    anchors.fill: parent

                    Button {
                        id: button01
                        x: 150
                        y: 180
                        text: "OFF"
                        checked: false
                        checkable: true
                        onCheckedChanged: {
                            button01.text = button01.checked ? "ON" : "OFF";
                            if(button01.text == "ON")
                                rec0.btnPress(true);

                            else
                                rec0.btnPress(false);
                        }
                    }

                }

            }
        }
        PageIndicator {
            id: indicator

            count: swipeView.count
            currentIndex: swipeView.currentIndex

            anchors.bottom: swipeView.bottom
            anchors.horizontalCenter: swipeView.horizontalCenter
        }
}
