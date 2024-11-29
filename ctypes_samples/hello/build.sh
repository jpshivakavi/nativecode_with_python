# Run the make file for hello sample
set saved_cur_dir = `pwd`

echo
echo "Building the hello sample..."
cd hello
make clean
make all

# Copy the .so file to packages/hello folder
cp libhello.so ../../packages/hello/src/hello/.

# Run the make file for hellocpp sample
echo
echo "Building the hellocpp sample...\n"
cd ../hellocpp
make clean
make all

# Copy the .so file to package/hellocpp folder
cp libhellocpp.so ../../packages/hellocpp/src/hellocpp/.

# Run the make file for student sample
echo
echo "Building the student sample...\n"
cd ../student
make clean
make all

# Copy the .so file to package/hellocpp folder
cp libstudent.so ../../packages/student/src/student/.

cd $saved_cur_dir
