/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/main_screen/MainViewBase.hpp>
#include <touchgfx/canvas_widget_renderer/CanvasWidgetRenderer.hpp>
#include <touchgfx/Color.hpp>
#include <images/BitmapDatabase.hpp>

MainViewBase::MainViewBase() :
    buttonCallback(this, &MainViewBase::buttonCallbackHandler)
{
    touchgfx::CanvasWidgetRenderer::setupBuffer(canvasBuffer, CANVAS_BUFFER_SIZE);
    
    __background.setPosition(0, 0, 480, 272);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    bg.setPosition(0, 0, 480, 272);
    bg.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(bg);

    button_select_algo.setXY(397, 50);
    button_select_algo.setBitmaps(touchgfx::Bitmap(BITMAP_ALGORITHM_ID), touchgfx::Bitmap(BITMAP_ALGORITHM_ID));
    button_select_algo.setAction(buttonCallback);
    add(button_select_algo);

    button_randomize.setXY(397, 159);
    button_randomize.setBitmaps(touchgfx::Bitmap(BITMAP_RANDOM_ID), touchgfx::Bitmap(BITMAP_RANDOM_ID));
    button_randomize.setAction(buttonCallback);
    add(button_randomize);

    histogram.setPosition(21, 11, 356, 226);
    histogram.setScaleX(1);
    histogram.setScaleY(1);
    histogram.setGraphAreaMargin(0, 0, 0, 0);
    histogram.setGraphAreaPadding(0, 0, 0, 0);
    histogram.setGraphRangeX(0, 256);
    histogram.setGraphRangeY(0, 256);
    histogramHistogram1.setColor(touchgfx::Color::getColorFromRGB(20, 151, 197));
    histogramHistogram1.setBarWidth(1);
    histogramHistogram1.setBaseline(0);
    histogram.addGraphElement(histogramHistogram1);


    histogram.addDataPoint(0, 3);
    histogram.addDataPoint(1, 4);
    histogram.addDataPoint(2, 8);
    histogram.addDataPoint(3, 15);
    histogram.addDataPoint(4, 24);
    histogram.addDataPoint(5, 35);
    histogram.addDataPoint(6, 47);
    histogram.addDataPoint(7, 61);
    histogram.addDataPoint(8, 76);
    histogram.addDataPoint(9, 90);
    histogram.addDataPoint(10, 104);
    histogram.addDataPoint(11, 117);
    histogram.addDataPoint(12, 126);
    histogram.addDataPoint(13, 137);
    histogram.addDataPoint(14, 145);
    histogram.addDataPoint(15, 152);
    histogram.addDataPoint(16, 156);
    histogram.addDataPoint(19, 155);
    histogram.addDataPoint(20, 151);
    histogram.addDataPoint(21, 145);
    histogram.addDataPoint(22, 140);
    histogram.addDataPoint(23, 133);
    histogram.addDataPoint(24, 125);
    histogram.addDataPoint(25, 118);
    histogram.addDataPoint(26, 111);
    histogram.addDataPoint(27, 105);
    histogram.addDataPoint(28, 101);
    histogram.addDataPoint(29, 98);
    histogram.addDataPoint(31, 100);
    histogram.addDataPoint(32, 104);
    histogram.addDataPoint(33, 109);
    histogram.addDataPoint(34, 117);
    histogram.addDataPoint(35, 127);
    histogram.addDataPoint(36, 139);
    histogram.addDataPoint(37, 152);
    histogram.addDataPoint(38, 166);
    histogram.addDataPoint(39, 181);
    histogram.addDataPoint(40, 195);
    histogram.addDataPoint(41, 209);
    histogram.addDataPoint(42, 221);
    histogram.addDataPoint(43, 232);
    histogram.addDataPoint(44, 239);
    histogram.addDataPoint(45, 247);
    histogram.addDataPoint(46, 251);
    histogram.addDataPoint(48, 252);
    histogram.addDataPoint(49, 248);
    histogram.addDataPoint(50, 241);
    histogram.addDataPoint(51, 232);
    histogram.addDataPoint(52, 220);
    histogram.addDataPoint(53, 206);
    histogram.addDataPoint(54, 195);
    histogram.addDataPoint(55, 179);
    histogram.addDataPoint(56, 162);
    histogram.addDataPoint(57, 145);
    histogram.addDataPoint(58, 128);
    histogram.addDataPoint(59, 113);
    histogram.addDataPoint(60, 99);
    histogram.addDataPoint(61, 86);
    histogram.addDataPoint(62, 76);
    histogram.addDataPoint(63, 68);
    histogram.addDataPoint(64, 62);
    histogram.addDataPoint(65, 60);
    histogram.addDataPoint(68, 64);
    histogram.addDataPoint(69, 69);
    histogram.addDataPoint(70, 76);
    histogram.addDataPoint(71, 84);
    histogram.addDataPoint(72, 93);
    histogram.addDataPoint(73, 101);
    histogram.addDataPoint(74, 110);
    histogram.addDataPoint(75, 117);
    histogram.addDataPoint(76, 122);
    histogram.addDataPoint(77, 127);
    histogram.addDataPoint(81, 128);
    histogram.addDataPoint(82, 123);
    histogram.addDataPoint(83, 116);
    histogram.addDataPoint(84, 107);
    histogram.addDataPoint(85, 97);
    histogram.addDataPoint(86, 89);
    histogram.addDataPoint(87, 78);
    histogram.addDataPoint(88, 67);
    histogram.addDataPoint(89, 56);
    histogram.addDataPoint(90, 46);
    histogram.addDataPoint(91, 37);
    histogram.addDataPoint(92, 30);
    histogram.addDataPoint(93, 26);
    histogram.addDataPoint(94, 23);
    histogram.addDataPoint(96, 27);
    histogram.addDataPoint(97, 32);
    histogram.addDataPoint(98, 40);
    histogram.addDataPoint(99, 50);
    histogram.addDataPoint(100, 63);
    histogram.addDataPoint(101, 78);
    histogram.addDataPoint(102, 94);
    histogram.addDataPoint(103, 112);
    histogram.addDataPoint(104, 130);
    histogram.addDataPoint(105, 147);
    histogram.addDataPoint(106, 165);
    histogram.addDataPoint(107, 181);
    histogram.addDataPoint(108, 192);
    histogram.addDataPoint(109, 205);
    histogram.addDataPoint(110, 216);
    histogram.addDataPoint(111, 224);
    histogram.addDataPoint(112, 230);
    histogram.addDataPoint(114, 232);
    histogram.addDataPoint(115, 230);
    histogram.addDataPoint(116, 225);
    histogram.addDataPoint(117, 217);
    histogram.addDataPoint(118, 211);
    histogram.addDataPoint(119, 201);
    histogram.addDataPoint(120, 190);
    histogram.addDataPoint(121, 179);
    histogram.addDataPoint(122, 168);
    histogram.addDataPoint(123, 157);
    histogram.addDataPoint(124, 147);
    histogram.addDataPoint(125, 139);
    histogram.addDataPoint(126, 132);
    histogram.addDataPoint(127, 127);
    histogram.addDataPoint(131, 129);
    histogram.addDataPoint(132, 134);
    histogram.addDataPoint(133, 140);
    histogram.addDataPoint(134, 148);
    histogram.addDataPoint(135, 156);
    histogram.addDataPoint(136, 165);
    histogram.addDataPoint(137, 173);
    histogram.addDataPoint(138, 181);
    histogram.addDataPoint(139, 188);
    histogram.addDataPoint(140, 192);
    histogram.addDataPoint(141, 196);
    histogram.addDataPoint(143, 196);
    histogram.addDataPoint(144, 193);
    histogram.addDataPoint(145, 187);
    histogram.addDataPoint(146, 179);
    histogram.addDataPoint(147, 168);
    histogram.addDataPoint(148, 155);
    histogram.addDataPoint(149, 140);
    histogram.addDataPoint(150, 129);
    histogram.addDataPoint(151, 112);
    histogram.addDataPoint(152, 95);
    histogram.addDataPoint(153, 78);
    histogram.addDataPoint(154, 62);
    histogram.addDataPoint(155, 47);
    histogram.addDataPoint(156, 34);
    histogram.addDataPoint(157, 22);
    histogram.addDataPoint(158, 13);
    histogram.addDataPoint(159, 7);
    histogram.addDataPoint(160, 3);
    histogram.addDataPoint(163, 9);
    histogram.addDataPoint(164, 16);
    histogram.addDataPoint(165, 25);
    histogram.addDataPoint(166, 37);
    histogram.addDataPoint(167, 50);
    histogram.addDataPoint(168, 64);
    histogram.addDataPoint(169, 78);
    histogram.addDataPoint(170, 93);
    histogram.addDataPoint(171, 106);
    histogram.addDataPoint(172, 116);
    histogram.addDataPoint(173, 128);
    histogram.addDataPoint(174, 138);
    histogram.addDataPoint(175, 147);
    histogram.addDataPoint(176, 153);
    histogram.addDataPoint(177, 157);
    histogram.addDataPoint(179, 157);
    histogram.addDataPoint(181, 150);
    histogram.addDataPoint(182, 146);
    histogram.addDataPoint(183, 139);
    histogram.addDataPoint(184, 131);
    histogram.addDataPoint(185, 124);
    histogram.addDataPoint(186, 116);
    histogram.addDataPoint(187, 110);
    histogram.addDataPoint(188, 104);
    histogram.addDataPoint(189, 100);
    histogram.addDataPoint(193, 104);
    histogram.addDataPoint(194, 110);
    histogram.addDataPoint(195, 118);
    histogram.addDataPoint(196, 129);
    histogram.addDataPoint(197, 141);
    histogram.addDataPoint(198, 154);
    histogram.addDataPoint(199, 168);
    histogram.addDataPoint(200, 183);
    histogram.addDataPoint(201, 197);
    histogram.addDataPoint(202, 211);
    histogram.addDataPoint(203, 223);
    histogram.addDataPoint(204, 232);
    histogram.addDataPoint(205, 241);
    histogram.addDataPoint(206, 248);
    histogram.addDataPoint(207, 252);
    histogram.addDataPoint(210, 247);
    histogram.addDataPoint(211, 240);
    histogram.addDataPoint(212, 230);
    histogram.addDataPoint(213, 218);
    histogram.addDataPoint(214, 208);
    histogram.addDataPoint(215, 192);
    histogram.addDataPoint(216, 176);
    histogram.addDataPoint(217, 159);
    histogram.addDataPoint(218, 142);
    histogram.addDataPoint(219, 126);
    histogram.addDataPoint(220, 110);
    histogram.addDataPoint(221, 96);
    histogram.addDataPoint(222, 84);
    histogram.addDataPoint(223, 74);
    histogram.addDataPoint(224, 67);
    histogram.addDataPoint(225, 63);
    histogram.addDataPoint(228, 61);
    histogram.addDataPoint(229, 65);
    histogram.addDataPoint(230, 70);
    histogram.addDataPoint(231, 77);
    histogram.addDataPoint(232, 85);
    histogram.addDataPoint(233, 94);
    histogram.addDataPoint(234, 103);
    histogram.addDataPoint(235, 111);
    histogram.addDataPoint(236, 117);
    histogram.addDataPoint(237, 123);
    histogram.addDataPoint(238, 128);
    histogram.addDataPoint(239, 131);
    histogram.addDataPoint(242, 127);
    histogram.addDataPoint(243, 122);
    histogram.addDataPoint(244, 114);
    histogram.addDataPoint(245, 106);
    histogram.addDataPoint(246, 98);
    histogram.addDataPoint(247, 87);
    histogram.addDataPoint(248, 76);
    histogram.addDataPoint(249, 65);
    histogram.addDataPoint(250, 54);
    histogram.addDataPoint(251, 44);
    histogram.addDataPoint(252, 36);
    histogram.addDataPoint(253, 29);
    histogram.addDataPoint(254, 25);
    histogram.addDataPoint(255, 23);
    add(histogram);

    line1.setPosition(21, 237, 356, 35);
    line1Painter.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    line1.setPainter(line1Painter);
    line1.setStart(5, 10);
    line1.setEnd(350, 10);
    line1.setLineWidth(10);
    line1.setLineEndingStyle(touchgfx::Line::ROUND_CAP_ENDING);
    add(line1);
}

MainViewBase::~MainViewBase()
{
    touchgfx::CanvasWidgetRenderer::resetBuffer();
}

void MainViewBase::setupScreen()
{

}

void MainViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &button_select_algo)
    {
        //interaction_navigate_to_select
        //When button_select_algo clicked change screen to Selector
        //Go to Selector with screen transition towards East
        application().gotoSelectorScreenSlideTransitionEast();
    }
    if (&src == &button_randomize)
    {
        //Interaction_randomize
        //When button_randomize clicked call virtual function
        //Call randomizeGraph
        randomizeGraph();
    }
}
