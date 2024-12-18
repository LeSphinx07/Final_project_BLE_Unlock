#include <gui/main_screen/mainView.hpp>
#include "stm32f7xx_hal.h"      // Pour accéder aux GPIO
volatile uint8_t pinSoso = 0;
GPIO_PinState pinState = HAL_GPIO_ReadPin(GPIOI, GPIO_PIN_3);
mainView::mainView()
{

}

void mainView::setupScreen()
{
    mainViewBase::setupScreen();

    // Cache both images initially
    image1.setVisible(false);
    image2.setVisible(false);

    image1.invalidate();
    image2.invalidate();
}

void mainView::tearDownScreen()
{
    mainViewBase::tearDownScreen();
}

void mainView::buttonUpClicked()
{
    // Show image1 and hide image2
    image1.setVisible(true);
    image2.setVisible(false);

    // Redraw images to reflect changes
    image1.invalidate();
    image2.invalidate();
}

void mainView::buttonDownClicked()
{
    // Show image2 and hide image1
    image1.setVisible(false);
    image2.setVisible(true);

    // Redraw images to reflect changes
    image1.invalidate();
    image2.invalidate();
}

void mainView::updateLockState()
{
	pinSoso = HAL_GPIO_ReadPin(GPIOI, GPIO_PIN_3);

	if (pinSoso == GPIO_PIN_SET) // Signal = 1 : cadenas ouvert
	{
		// Show image2 and hide image1
		image1.setVisible(false);
		image2.setVisible(true);

		// Redraw images to reflect changes
		image1.invalidate();
		image2.invalidate();
	}
	else
	{
		// Show image2 and hide image1
		image1.setVisible(true);
		image2.setVisible(false);

		// Redraw images to reflect changes
		image1.invalidate();
		image2.invalidate();
	}

}
