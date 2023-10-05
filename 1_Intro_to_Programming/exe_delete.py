import os

def delete_exes(directory):
    # Traverse the directory structure
    for root, dirs, files in os.walk(directory):
        for file in files:
            # Check if the file has a .exe extension
            if file.endswith('.exe'):
                full_path = os.path.join(root, file)
                try:
                    os.remove(full_path)
                    print(f"Deleted {full_path}")
                except Exception as e:
                    print(f"Error deleting {full_path}: {e}")

if __name__ == '__main__':
    folder_path = "1_Intro_to_Programming"
    delete_exes(folder_path)
