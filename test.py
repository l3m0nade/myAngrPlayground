import idaapi 
import idautils
import idc
import time

def Wall():
    print('==' * 20)

def main():
    ea = idc.get_screen_ea()
    '''
    # get some addrs
    Wall()
    start = 0x8FB0C6A4
    end = 0x8FB0C880
    p = start
    print((end-start)//4)
    for i in range((end-start)//4):
        idc.create_dword(p)
        p += 4

    # get some strings
    Wall()
    start = 0x8FB65E72
    end = 0x8FB7FC67
    while start < end:
        idc.create_strlit(start,endea=idc.BADADDR)
        start += 1
    '''

    '''
    # get some string 2
    Wall()
    start = 0x805E9200
    #end = 0x80668E00
    end = 0x8076F14F + 1
    while start < end:
        idc.create_strlit(start,endea=idc.BADADDR)
        content = idc.get_strlit_contents(start)
        if content != None:
            lens = len(content)
            start += lens
            #print(f"[-] next:{hex(start + 1)}: {content} ,length={lens}\n")
        else:
            start += 1
    '''
    
    # get some .text code
    Wall()
    start = 0x80000A9C
    end = 0x80000afc
    #while start != end:
    nextaddr = idaapi.get_func(ea).end_ea
    try:
        idaapi.add_func(start,idc.BADADDR)
    except:
        print("wrong:",hex(start))
        exit(-1)
    start = nextaddr
    print(hex(start)) 

    '''

    #print(idaapi.is_dword(ea))
    #idc.set_name(ea,"addrTable1")
    #data = idc.get_strlit_contents(0x8FB0C84C)
    #idc.create_dword(ea)
    
    #idc.create_dword(ea)
    #print(ea,hex(ea),hex(idc.get_wide_dword(ea)))
    
    '''
'''
# print current file path
print(idc.get_input_file_path() + '\n')

# wait for auto-analysis to complete
idc.auto_wait()

# count functions
print( 'count %d\n' % len(list(idautils.Functions())) )

# print function name and addresses
for ea in idautils.Functions():
    if idc.get_func_flags(ea) & (idc.FUNC_LIB | idc.FUNC_THUNK): continue
    print( hex(ea) + ' ' + idc.get_func_name(ea)  + '\n' )
'''
main()
'''
d0 5f

base addr 分析 应该是0x80000000
02 88 0F 0C                                                     jal     0x803E2008
0000 0010 1000 1000 0000 1111 0000 1100
0000 1010 0010 0000 0011 1100 0011 0000
0A203C30

0000 1100 0000 1111 1000 1000 0000 0010
0000 0000 0011 1110 0010 0000 0000 1000
003e2008
F0 B9 84 24                                                     li      $a0, 0x8065B9F0
74 80 04 3C                                                     lui     $a0, 0x8074
BE 69 0F 0C                                                     jal     0x803DA6F8
1011 1110 0110 1001 0000 1111 0000 1100
0000 1100 0000 1111 0110 1001 1011 1110
0000 0000 0011 1101 1010 0110 1111 1000
003da6f8
'''