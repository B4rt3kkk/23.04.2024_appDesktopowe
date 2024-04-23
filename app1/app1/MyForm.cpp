#include "MyForm.h"
using namespace app1;
[STAThreadAttribute]
int main() {
	MyForm app;
	app.ShowDialog();
	return 0;
}

