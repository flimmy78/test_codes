
import os
import sys

current_path = os.getcwd()
path_split_char = "\\"

def list_s_files(dir_path, name_like):
	files = os.listdir(dir_path)
	for x in files:
		full_x = dir_path + path_split_char + x
		if os.path.isfile(full_x):
			r, e = os.path.splitext(full_x)
			if(e in name_like):
				print "name_like file:", full_x
			continue
			
		else: 
			list_s_files(full_x, name_like)

def clear_all_debug_release_dir(dir_path):

	#print "now path:", dir_path
	files = os.listdir(dir_path)
	#print "\n".join(files)
	
	for x in files:
		full_x = dir_path + path_split_char + x
		if os.path.isfile(full_x):
			r, e = os.path.splitext(full_x)
			if(".ncb" == e):
				os.remove(full_x)
				print "removed file:", full_x
			continue
			
		if ("Debug" == x or "Release" == x or "debug" == x):
			cmd = 'rmdir /s /q "' + full_x + '"'
			os.system(cmd)
			print "os.system:", cmd
			print "removed dir:", full_x
		else:
			clear_all_debug_release_dir(full_x)
				

if __name__=="__main__":
	print 'start...'
	print "current_path", current_path
	clear_all_debug_release_dir(current_path)
	list_s_files(current_path, [".lib", ".dll"])
	print 'end'
	