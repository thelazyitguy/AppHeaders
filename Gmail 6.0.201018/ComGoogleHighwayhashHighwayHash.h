//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IOSLongArray;

@interface ComGoogleHighwayhashHighwayHash : NSObject
{
    IOSLongArray *v0_;
    IOSLongArray *v1_;
    IOSLongArray *mul0_;
    IOSLongArray *mul1_;
    _Bool done_;
}

- (void)dealloc;
- (id)finalize256;
- (id)finalize128;
- (long long)finalize64;
- (void)updateRemainderWithByteArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (void)updateWithLong:(long long)arg1 withLong:(long long)arg2 withLong:(long long)arg3 withLong:(long long)arg4;
- (void)updatePacketWithByteArray:(id)arg1 withInt:(int)arg2;

@end
