//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HUBChannel.h"

#import "HUBChannel-Protocol.h"

@class NSString;

@interface HUBBlockChannel : HUBChannel <HUBChannel>
{
    CDUnknownBlockType _block;
}

+ (id)mainQueueDeliveryChannelWithBlock:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (void)deliverMessage:(id)arg1;
- (id)initWithDeliveryQueue:(id)arg1 block:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, getter=isInvalidated) _Bool invalidated;
@property(readonly) Class superclass;

@end

