//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleCommonHashHashCode.h"

#import "JavaIoSerializable-Protocol.h"

@class NSString;

@interface ComGoogleCommonHashHashCode_LongHashCode : ComGoogleCommonHashHashCode <JavaIoSerializable>
{
    long long hash__;
}

- (_Bool)equalsSameBitsWithComGoogleCommonHashHashCode:(id)arg1;
- (void)writeBytesToImplWithByteArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (long long)padToLong;
- (long long)asLong;
- (int)asInt;
- (id)asBytes;
- (int)bits;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
