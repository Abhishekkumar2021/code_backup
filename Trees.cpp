#include<bits/stdc++.h>
using namespace std;
template <typename T>
class TreeNode{
public:
   T data;
   vector<TreeNode<T>*> children;
   TreeNode(T data){
   	this->data = data;
   }
};

TreeNode<int>* takeInput_better(){
	int RootData ;
	cout<<"Enter Root Data : ";
	cin>>RootData;
	TreeNode<int> *root = new TreeNode<int>(RootData);
	queue<TreeNode<int>*> pendingNodes;
	pendingNodes.push(root);
	while(pendingNodes.size()!=0){
		TreeNode<int> *front =  pendingNodes.front();
		pendingNodes.pop();
		cout<<"Enter the number of childrens you want to have for "<<front->data<<" : ";
		int n;
		cin>>n;
		for(int i=0; i<n; i++){
			int childData;
			cout<<"Enter the child number -> "<<i+1<<" of "<<front->data<<" : ";
			cin>>childData;
			TreeNode<int> *child = new TreeNode<int>(childData);
			front->children.push_back(child);
			pendingNodes.push(child);
		}
	}
	return root;

}

void print_better(TreeNode<int> *root){
	queue<TreeNode<int>*> pendingNodes;
	pendingNodes.push(root);
	while(pendingNodes.size()!=0){
		TreeNode<int> *front =  pendingNodes.front();
		pendingNodes.pop();
		cout<<front->data<<" : ";
		for(int i=0; i<front->children.size(); i++){
			cout<<front->children[i]->data<<" ";
			pendingNodes.push(front->children[i]);

		}
		cout<<"\n";
	}
}

TreeNode<int>* takeInput(){
	int RootData ;
	cout<<"Enter Data : ";
	cin>>RootData;
	TreeNode<int> *root = new TreeNode<int>(RootData);
	int n;
	cout<<"Enter the number of childrens you want to have for "<<RootData<<" :"<<endl;
	cin>>n;
	for(int i=0; i<n; i++){
		TreeNode<int> *child = takeInput();
		root->children.push_back(child);
	}
	return root;
}

void printTree(TreeNode<int>* root){
	if(root == NULL){
		return;
	}
	cout<<root->data<<" : " ;
	for(int i=0; i<root->children.size(); i++){
		cout<<root->children[i]->data<<" ";
	}
	cout<<endl;
	for(int i=0; i<root->children.size(); i++){
		printTree(root->children[i]);
	}
}

int numNodes(TreeNode<int> * root){
	int ans = 1;
	for(int i=0; i<root->children.size(); i++){
		ans+=numNodes(root->children[i]);
	}
	return ans;
}
 

void printLevel_K(TreeNode<int> * root,int level){
	if(level == 1){
		cout<< root->data<<" ";
	}
	for(int i=0; i<root->children.size(); i++){
       printLevel_K(root->children[i],level-1);
	}
}

int height_tree(TreeNode<int> * root){
	int max = 0;
	int *arr = new int[root->children.size()];
	for(int i=0; i<root->children.size(); i++){
       arr[i] = height_tree(root->children[i]);
       if(arr[i]>max)
       	max = arr[i];
	}
	return max+1;
}

int num_leafnode(TreeNode<int> * root){

	if(root->children.size() == 0)
		return 1;
	int sum = 0;
	for(int i=0; i<root->children.size(); i++){
		sum+=num_leafnode(root->children[i]);
	}
	return sum;

}



int main(){
	freopen("input.txt", "r",stdin);
	freopen("output.txt", "w",stdout);
	TreeNode<int> *root = takeInput_better();

   print_better(root);
   cout<<"height : "<<height_tree(root)<<endl;
   cout<<"Number of nodes : "<<numNodes(root);
   printLevel_K(root,2);
   cout<<"\nnumber of leaf nodes : "<<num_leafnode(root);
}
