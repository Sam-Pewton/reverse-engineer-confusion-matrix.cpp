#include <iostream>
#include <cassert>
#include "include/ReverseEngineerCM.h"

/**
 * Main method
 *
 * Adjust the values in the modifiers to your target
 */
int main(){
	////////////// MODIFIERS//////////////
	const int DECIMAL_PLACES = 2;
	const int CLASS_A_COUNT = 981;
	const int CLASS_B_COUNT = 981;
	const double TARGET_ACCURACY = 0.75;

	// Optional modifiers - set to -1 if not needed.
	const double TARGET_SENSITIVITY = 0.86;
	const double TARGET_SPECIFICITY = 0.64;
	const double TARGET_F1 = 0.77;
	const double TARGET_PRECISION = 0.71;
	//////////////////////////////////////

	// Assertions..
	assert(DECIMAL_PLACES >= 0);
	assert(CLASS_A_COUNT && CLASS_B_COUNT > 0);
	assert(TARGET_ACCURACY >= 0 && TARGET_ACCURACY <= 1);
	assert((TARGET_SENSITIVITY >= 0 && TARGET_SENSITIVITY <= 1) ||
			TARGET_SENSITIVITY == -1);
	assert((TARGET_SPECIFICITY >= 0 && TARGET_SPECIFICITY <= 1) ||
			TARGET_SPECIFICITY == -1);
	assert((TARGET_F1 >= 0 && TARGET_F1 <= 1) || TARGET_F1 == -1);
	assert((TARGET_PRECISION >= 0 && TARGET_PRECISION <= 1) ||
			TARGET_PRECISION == -1);

	// Trigger main workload
	reverse_engineer_confusion_matrices(
			CLASS_A_COUNT,
			CLASS_B_COUNT,
			DECIMAL_PLACES,
			TARGET_ACCURACY,
			TARGET_SENSITIVITY,
			TARGET_SPECIFICITY,
			TARGET_F1,
			TARGET_PRECISION);

	return(0);
}
