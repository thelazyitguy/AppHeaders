//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JavaIoSerializable-Protocol.h"

@class NSString;

@interface ComGoogleCommonCollectCount : NSObject <JavaIoSerializable>
{
    int value_;
}

@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (int)getAndSetWithInt:(int)arg1;
- (void)setWithInt:(int)arg1;
- (int)addAndGetWithInt:(int)arg1;
- (void)addWithInt:(int)arg1;
- (int)get;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
