//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SSOCrypter-Protocol.h"

@class NSString;

@interface SSOBaseCrypter : NSObject <SSOCrypter>
{
}

+ (void)encryptData:(id)arg1 withKey:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)decryptData:(id)arg1 withKey:(id)arg2 andIV:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (id)crypterOperation:(unsigned int)arg1 input:(id)arg2 key:(id)arg3 iv:(id)arg4 algorithm:(unsigned int)arg5 options:(unsigned int)arg6 blockSize:(unsigned long long)arg7;
+ (id)generateRandomData:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
