// Copyright Epic Games, Inc. All Rights Reserved.

#include "LAB0103GameModeBase.h"

void ALAB0103GameModeBase::BeginPlay()
{
	Super::BeginPlay();

	// We started to generate the biography
	GEngine->AddOnScreenDebugMessage(-1, 13.f, FColor::Red, TEXT(" BIOGRAFIA "));
	GEngine->AddOnScreenDebugMessage(1, 14.f, FColor::Black, TEXT(" Mi nombre es Eddy Navia Condori. "));
	GEngine->AddOnScreenDebugMessage(2, 15.f, FColor::Black, TEXT(" Tengo 19 años, naci el 25 de mayo del 2003. "));
	GEngine->AddOnScreenDebugMessage(3, 16.f, FColor::Black, TEXT(" Soy de la Carrera Ing. de Sistemas. "));
	GEngine->AddOnScreenDebugMessage(4, 17.f, FColor::Black, TEXT(" Egrese del Colegio Nacional Junin. "));
	GEngine->AddOnScreenDebugMessage(5, 18.f, FColor::Black, TEXT(" Tengo conocientos basicos sobre lo que es la soldadura de metales y electronica "));
	GEngine->AddOnScreenDebugMessage(6, 19.f, FColor::Black, TEXT(" Hago mantenimiento de laptops y computadoras de escritorio "));
	GEngine->AddOnScreenDebugMessage(7, 20.f, FColor::Black, TEXT(" Doy clases de matematica escolar. "));

}
