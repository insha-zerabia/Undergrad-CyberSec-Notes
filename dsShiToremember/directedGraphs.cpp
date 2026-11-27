#include <iostream>
using namespace std;

//Adjacency Matrix
const int v = 4;

void setVertices(int gph[v][v],int a,int b) {
		gph[a][b] = 1;
}

void displayGraph(int graph[v][v]) {
		for (int i = 0; i < v; i++) {
				for (int j = 0; j < v; j++) {
						cout << graph[i][j] << " ";
				}
				cout << endl;
		}
}

//Adjacency List
const int u = 4;

struct Node {
		int dest;
		Node* next;
		Node(int a) : dest(a), next(nullptr) {}
};

void displayList(Node* arr[]) {
		for (int i = 0; i < u; i++) {

				cout << i << " -> ";
				Node* temp = arr[i];
				while (temp) {
						cout << temp->dest << " -> ";
						temp = temp->next;
				}
				cout << "NULL \n";
		}
}

void addConnection(Node* arr[],int Vertex, int directCon) {

		Node* newNode = new Node(directCon);

		if (arr[Vertex] == NULL) {
				arr[Vertex] = newNode;
		}

		else {
				newNode->next = arr[Vertex];
				arr[Vertex] = newNode;
		}

}


int main() {

		//Adjacency Matrix
		int graph[v][v] = { 0 };
		
		setVertices(graph, 0, 1);
		setVertices(graph, 0, 3);
		setVertices(graph, 1, 2);
		setVertices(graph, 1, 3);
		setVertices(graph, 2, 1);
		setVertices(graph, 3, 2);

		//displayGraph(graph);

		//Adjacency List
		Node* arr[u] = { 0};

		addConnection(arr, 0, 1);
		addConnection(arr, 0, 3);
		addConnection(arr, 1, 2);
		addConnection(arr, 1, 3);
		addConnection(arr, 2, 1);
		addConnection(arr, 3, 2);
		

		displayList(arr);

	
}

