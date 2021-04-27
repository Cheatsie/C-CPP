#include <filesystem>
#include <iostream>
#include <fstream>
//NOTES:
// Use "skip option" instead of throwing an exception
// CHANGE PROJECT TO C17
// It's C++17
// isdirectory to check if it's a folder
// status to see what it is
// Get size of every file , recursive does it, but group by the first level of the folder
// Recursive iterator after first folder?

using namespace std;
using namespace std::filesystem;


int main() {
	path currentPath = "."; // Path object knows the right kind of string
	path rootPath = L"c:\\";
	
	cout << "Root Folder = " << rootPath << endl;
	cout << "Root folder (as String) = " << rootPath.string() << endl;
	cout << "Absolute path = " << absolute(currentPath).string() << endl; // Get it done
		//Canon is same as absolute, but no /.../ in the middle
		// Quickest result that will produce absolute path.
	cout << "Canonical path = " << canonical(currentPath).string() << endl; // Do it right

	cout << endl;
	cout << "current: " << current_path().string() << endl; // Works on strange operating systems
	path parentPath = current_path().parent_path(); // Give me path to parent folder 
	cout << "Parent: " << parentPath.string() << endl; 
	
	// is the file/folder there | do I have a command line argument, is it a folder, is the folder there?
	if (exists(parentPath))
		cout << "All OK  - file exists" << endl;

	// Create a folder named sub---------------------------
	//create_directory("sub");				// Creates in your current working directory
	// create_directories("sub/sub1");		//nested folders
	// create_directory("\\sub");			// Create at root level
	// create_directory("c:\\sub");			// create at harddrive level

	// make txt file inside----------------------
	/*path sampleFile = "sub/test.txt";
	ofstream out(sampleFile);
	out << "sample data";					// put data in txt file like -cout <<-
	out.close();*/
	
	// Copy files-------------------------
	//copy_file(path("sub/test.txt"), path("sub2/test.txt"));
		// Direction of copy left to right. source --> destination
	
	// Remove folders one at a time-----------------------------
	// Place in path object
	//remove(path("sub/test.txt"));			// remove file
	//remove(path("sub"));					// remove folder
	//remove everything------
	//remove_all("sub2");					// recursively delete everything DO NOT USE
	
	// How much free space----------------------------------------------+
	cout.imbue(locale("")); // Dunno what this does
	error_code spaceError; // space error object	  // Free vs Available, what can be used - permissions		
	cout << "Free Space: " << space("C:", spaceError).available 
		<< " of " << space("C:", spaceError).capacity ;
	if (spaceError)
		cout << "Error:" << spaceError.message() << endl;

	// make my own file name - contactonate path elementes
	path myFile = currentPath / "sub" / "myfile.txt"; // automatically handles operations
	cout << endl;
	
	//scan a folder
	//void scan(path const&);
	//scan("..");

	// Recurisve scans
	//void rscan(path const&);
	//rscan("..");
	
	void rscan3(path const&, unsigned i = 0);
	rscan3("..");
	
	// count files in c
	uint64_t fileCount = 0;
	// Errors when there are files you can't access | \\ is go from root
	/*for (auto e : recursive_directory_iterator("\\", directory_options::skip_permission_denied))
		++fileCount;
	cout << "Filecount: " << fileCount << endl;*/ //Filecount: 1,152,009
	error_code e;
	auto nSize = file_size("c:", e);
	// make sure I get error codes for ones I cant open
	if (e) {
		cout << "Error[" << e.value() << "]:" << e.message() << endl;
		cout << "Category = " << e.category().name() << endl;
	}
	cout << nSize << endl;
}
// Scan a single folder
void scan(path const& f) {
	directory_iterator d(f); // Create a director iterator called d, it takes reference to f
	directory_iterator e; // virtal match to the end of any folder
						  // Ternary to see if it is dir
	while (d != e) {
		cout << d->path().string() << (is_directory(d->status()) ? " [dir]" : "") <<
			" ext= " << d->path().extension().string() << endl;
	++d;
	}
}
// Recursive scan, could also use a while loop, 
void rscan(path const& f) {
	cout << "\n"; // just to see
	// D initialize to the folder,  e for ending
	
	for (recursive_directory_iterator d(f), e; d != e; ++d) {
		cout << d->path().string() << (is_directory(d->status()) ? " [dir]" : "") <<
			" ext= " << d->path().extension().string() << endl;
	}
}
void rscan2(path const& f) {
	cout << "\n\n Folder = " << absolute(f) << endl;
	// Use dot operation instead, also ranged for
	for (auto d : recursive_directory_iterator(f)) {
		cout << d.path().string() << (is_directory(d.status()) ? " [dir]" : "") <<
			" ext= " << d.path().extension().string() << endl;
	}
}
void rscan3(path const& f, unsigned i) {
	string indent(i, ' ');
	cout << indent << "folder = "<< absolute(f) << endl;
	for (auto d : directory_iterator(f)) {
		cout << indent <<  d.path().string() << (is_directory(d.status()) ? " [dir]" : "") <<
			" ext= " << d.path().extension().string() << endl;
		if (is_directory(d.status()))
			rscan3(d.path(), i + 2);
	}

}