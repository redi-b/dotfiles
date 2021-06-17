import os

home_dir = os.path.expanduser("~")
sort_dir = "wallpapers"   # directory to be sorted
main_dir = os.path.join(home_dir, sort_dir)

# files should be formatted as
# prefix + index + extension
prefix = "wall"
extension = ".jpg"
prefix_len = len(prefix)    # this is the where the 'index' begins

# example {"wall4.jpg": "wall3.jpg"}
# means ""wall4.jpg" should be renamed
# to "wall3.jpg"
changes = {}

def checkChanges():
    filenames = os.listdir(main_dir)
    # First, we split the file extension (jpg).
    # Then we sort the list by the 'index' which starts
    # from the 'prefix_len'th index.
    filenames.sort(key=lambda x: int(x.split(".")[0][prefix_len:]))

    # store the index of each file
    fileidx = []
    for i in filenames:
        fileidx.append(int(i.split(".")[0][prefix_len:]))

    if fileidx[0] != 1:
        os.system(f"mv -v {main_dir}/{filenames[0]} {main_dir}/{prefix}1{extension}")

    for idx, item in enumerate(fileidx):
        # making sure the index isn't out of bounds
        if idx < (len(fileidx) - 1):
            if (item + 1) == fileidx[idx + 1]:
                continue
            # add to changes if the file should be renamed ( {"current_filename": "new_filename"} )
            # changes[prefix + str(fileidx[idx + 1]) + extension] = prefix = str(item + 1) + extension
            changes[f"{prefix}{str(fileidx[idx + 1])}{extension}"] = f"{prefix}{str(item + 1)}{extension}"

# check for changes and start a loop that
# applies the first changes, then clears it and
# checks for changes again. It will continue
# until no more changes are found
checkChanges()
while changes:

    for key, item in changes.items():
        os.system(f"mv -v {main_dir}/{key} {main_dir}/{item}")

    changes.clear() 
    checkChanges()
