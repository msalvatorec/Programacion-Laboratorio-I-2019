#define EXIT_ERROR -1

int getInt(	int *resultado,
			char *mensaje,
			char *mensajeError,
			int minimo,
			int maximo,
			int reintentos);

int getFloat(	float *resultado,
				char *mensaje,
				char *mensajeError,
				float minimo,
				float maximo,
				int reintentos);

int getCharacter(	char *resultado,
					char *mensaje,
					char *mensajeError,
					char minimo,
					char maximo,
					int reintentos);

int getCharacterChain(	char *resultado,
						char *mensaje,
						char *mensajeError,
						char *minimo,
						char *maximo,
						int reintentos);

