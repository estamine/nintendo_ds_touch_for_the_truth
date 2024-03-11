#include <nds.h>
#include <stdio.h>


//---------------------------------------------------------------------------------
int main(void) {
//---------------------------------------------------------------------------------
	touchPosition touchXY;

	irqInit();
	irqEnable(IRQ_VBLANK);

	consoleDemoInit();

	iprintf("\n\n\tToque para a verdade!\n");

	while(1)
	{

		touchXY=touchReadXY();
		if (touchXY.x > 0) { iprintf("\x1b[8;0HSilvia mega-gorda!    "); } else { iprintf("\x1b[8;0H                  ");};

		swiWaitForVBlank();
	}

	return 0;
}
