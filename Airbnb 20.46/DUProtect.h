//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DUProtect : NSObject
{
    NSString *_keyStr;
}

+ (id)AESDecrypt:(id)arg1;
+ (id)AESDecrypt:(id)arg1:(id)arg2;
+ (id)AESEncrypt:(id)arg1:(id)arg2;
@property(copy, nonatomic) NSString *keyStr; // @synthesize keyStr=_keyStr;
- (void).cxx_destruct;
- (id)tripleDESEncryptHex:(id)arg1:(id)arg2;
- (id)tripleDESEncrypt:(id)arg1:(id)arg2;
- (id)zlibUncompress:(id)arg1;
- (id)zlibCompress:(id)arg1;
- (id)gzipInflate:(id)arg1;
- (id)gzipDeflate:(id)arg1;
- (id)AESDecryptHex:(id)arg1:(id)arg2;
- (id)AESEncryptHex:(id)arg1:(id)arg2;

@end
