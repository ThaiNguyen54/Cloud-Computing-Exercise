#include <mpi.h>
#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv []) {
	int size, rank, namelen;
	char processor_name[MPI_MAX_PROCESSOR_NAME];

	MPI_Init(&argc, &argv);

	MPI_Comm_size(MPI_COMM_WORLD, &size);

	MPI_Comm_rank(MPI_COMM_WORLD, &rank);

	MPI_Get_processor_name(processor_name, &namelen);

	printf("Ich bin Prozess Nr. %d von %d auf %s\n", rank, size, processor_name);

	MPI_Finalize();

	return 0;
}
