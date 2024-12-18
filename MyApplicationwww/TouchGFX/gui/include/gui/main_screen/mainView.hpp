#ifndef MAINVIEW_HPP
#define MAINVIEW_HPP

#include <gui_generated/main_screen/mainViewBase.hpp>

class mainView : public mainViewBase
{
public:
    mainView();
    virtual ~mainView() {}

    virtual void setupScreen();
    virtual void tearDownScreen();

    virtual void buttonUpClicked();   // Interaction pour le bouton 1
    virtual void buttonDownClicked(); // Interaction pour le bouton 2
    virtual void updateLockState();
};

#endif // MAINVIEW_HPP
