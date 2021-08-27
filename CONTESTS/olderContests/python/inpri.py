from math import log2
import queue

def pre_to_level(arr):
    que = queue.Queue()
    que.put((0,len(arr)))
    ans = [] #this will be answer
    while not que.empty():
        iroot,size = que.get() #index of root and size of subtree
        if iroot>=len(arr) or size==0: continue ##nodes at iroot don't exist
        else : ans.append(arr[iroot]) #append to back of output array
        sz_of_left = left_tree_size(size) 
        que.put((iroot+1,sz_of_left)) #insert left sub-tree info to que
        que.put((iroot+1+sz_of_left,size-sz_of_left-1)) #right sub-tree info 

    return ans

def left_tree_size(n):
    if n<=1: return 0
    l = int(log2(n+1)) #l = no of completely filled levels
    ans = 2**(l-1)
    last_level_nodes = min(n-2**l+1,ans)
    return ans + last_level_nodes -1