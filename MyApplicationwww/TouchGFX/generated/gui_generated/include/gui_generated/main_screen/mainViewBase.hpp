/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef MAINVIEWBASE_HPP
#define MAINVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/main_screen/mainPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/Button.hpp>
#include <touchgfx/widgets/Image.hpp>

class mainViewBase : public touchgfx::View<mainPresenter>
{
public:
    mainViewBase();
    virtual ~mainViewBase();
    virtual void setupScreen();
    virtual void handleTickEvent();

    /*
     * Virtual Action Handlers
     */
    virtual void buttonUpClicked()
    {
        // Override and implement this function in main
    }
    virtual void buttonDownClicked()
    {
        // Override and implement this function in main
    }
    virtual void updateLockState()
    {
        // Override and implement this function in main
    }

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::Button button1;
    touchgfx::Button button2;
    touchgfx::Image image1;
    touchgfx::Image image2;

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<mainViewBase, const touchgfx::AbstractButton&> buttonCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);

    /*
     * Tick Counter Declarations
     */
    static const uint32_t TICK_INTERACTION3_INTERVAL = 50;
    uint32_t frameCountInteraction3Interval;

};

#endif // MAINVIEWBASE_HPP
