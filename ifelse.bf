//

>[-]>[-]<<					Mise à zero des 2 variables suivantes (facultatif si connues pour être nulles)
[>+>+<<-]					Double copie
>>[-<<+>>]<					Restauration de la variable initiale / retour sur la copie de la variable
	>[-]+					Initialisation du témoin
		<					Retour sur la (copie de la) variable
	[						Si la (copie de la) variable = true

		code_if

	[-]>-<]					Destruction de la (copie de la) variable / destruction du témoin
	>						Déplacement sur le témoin
	[<						Si le block if ne s'est pas exécuté (témoin = 1) / Retour sur la (copie de la) variable

		code_else

	>-]						Destruction du témoin (dans ce cas (la copie de) la variable est déjà nulle)
<							Retour sur la (copie de la) variable détruite
