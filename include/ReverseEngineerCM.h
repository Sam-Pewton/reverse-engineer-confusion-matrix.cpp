/*
 * Header file for reverse_engineer module
 */
#pragma once

void reverse_engineer_confusion_matrices(int, int, int,
		double, double, double, double, double);

int * find_positives_vs_negatives(int, double, int);
double round_dp(double,int);

void find_matrices(int, int, int *, double, double,
		double, double, double, int);

bool check_metric(double, double, double, double, double, double, double,
		double, int);
