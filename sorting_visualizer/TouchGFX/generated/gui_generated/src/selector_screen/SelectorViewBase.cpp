/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/selector_screen/SelectorViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <images/BitmapDatabase.hpp>

SelectorViewBase::SelectorViewBase() :
    buttonCallback(this, &SelectorViewBase::buttonCallbackHandler)
{
    __background.setPosition(0, 0, 480, 272);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    bg.setPosition(0, 0, 480, 272);
    bg.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(bg);

    swipeContainer1.setXY(14, 10);
    swipeContainer1.setPageIndicatorBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_SWIPECONTAINER_MEDIUM_OFF_NORMAL_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_SWIPECONTAINER_MEDIUM_ON_ACTIVE_ID));
    swipeContainer1.setPageIndicatorXY(0, 0);
    swipeContainer1.setSwipeCutoff(50);
    swipeContainer1.setEndSwipeElasticWidth(50);

    MergeSort.setWidth(454);
    MergeSort.setHeight(250);
    MergeSortIcon.setXY(39, 61);
    MergeSortIcon.setBitmap(touchgfx::Bitmap(BITMAP_CONSOLIDATE_ID));
    MergeSort.add(MergeSortIcon);

    swipeContainer1.add(MergeSort);

    BubbleSort.setWidth(454);
    BubbleSort.setHeight(250);
    BubbleSortIcon.setXY(39, 62);
    BubbleSortIcon.setBitmap(touchgfx::Bitmap(BITMAP_BUBBLES_ID));
    BubbleSort.add(BubbleSortIcon);

    swipeContainer1.add(BubbleSort);

    QuickSort.setWidth(454);
    QuickSort.setHeight(250);
    QuickSortIcon.setXY(39, 61);
    QuickSortIcon.setBitmap(touchgfx::Bitmap(BITMAP_FAST_TIME_ID));
    QuickSort.add(QuickSortIcon);

    swipeContainer1.add(QuickSort);

    swipeContainer1.setSelectedPage(2);
    add(swipeContainer1);

    select.setXY(404, 196);
    select.setBitmaps(touchgfx::Bitmap(BITMAP_CHECK_MARK_GREY_ID), touchgfx::Bitmap(BITMAP_CHECK_MARK_ID));
    add(select);

    back_to_main.setXY(404, 10);
    back_to_main.setBitmaps(touchgfx::Bitmap(BITMAP_RETURN_ID), touchgfx::Bitmap(BITMAP_RETURN_ID));
    back_to_main.setAction(buttonCallback);
    add(back_to_main);
}

SelectorViewBase::~SelectorViewBase()
{

}

void SelectorViewBase::setupScreen()
{

}

void SelectorViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &back_to_main)
    {
        //interaction_return_to_main
        //When back_to_main clicked change screen to Main
        //Go to Main with screen transition towards West
        application().gotoMainScreenSlideTransitionWest();
    }
}
