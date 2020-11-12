//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSMutableData.h>

@interface NSMutableData (NSMutableData_APDU)
- (void)ykf_appendUInt64EntryWithTag:(unsigned char)arg1 value:(unsigned long long)arg2;
- (void)ykf_appendUInt32EntryWithTag:(unsigned char)arg1 value:(unsigned int)arg2;
- (void)ykf_appendEntryWithTag:(unsigned char)arg1 headerBytes:(id)arg2 data:(id)arg3;
- (void)ykf_appendEntryWithTag:(unsigned char)arg1 data:(id)arg2;
- (void)ykf_appendByte:(unsigned char)arg1;
- (void)serializeData:(id)arg1;
- (void)serializeString:(id)arg1;
- (void)serializeNum:(int)arg1;
- (_Bool)decryptWithKey:(id)arg1 ccoptions:(unsigned int)arg2;
- (_Bool)decryptCBCWithIV:(id)arg1 key:(id)arg2;
- (_Bool)decryptCBCWithIV:(id)arg1;
- (_Bool)decrypt;
- (_Bool)encryptWithKey:(id)arg1 output:(id)arg2 ccoptions:(unsigned int)arg3;
- (_Bool)encryptWithIV:(id)arg1 key:(id)arg2 output:(id)arg3;
- (_Bool)encryptWithIV:(id)arg1 output:(id)arg2;
- (_Bool)encrypt:(id)arg1;
- (id)lpenc_data;
@end
