//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class DYNProtoDndState_State, DYNProtoRequestHeader, DYNProtoSetDndDurationRequest_DndExpiryCase;

@protocol DYNProtoSetDndDurationRequestOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (DYNProtoSetDndDurationRequest_DndExpiryCase *)getDndExpiryCase;
- (long long)getDndExpiryTimestampUsec;
- (_Bool)hasDndExpiryTimestampUsec;
- (long long)getNewDndDurationUsec;
- (_Bool)hasNewDndDurationUsec;
- (DYNProtoDndState_State *)getCurrentDndState;
- (_Bool)hasCurrentDndState;
- (DYNProtoRequestHeader *)getRequestHeader;
- (_Bool)hasRequestHeader;
@end
