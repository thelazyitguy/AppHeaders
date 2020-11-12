//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSNumber, NSString;

@interface MPUploadBuilder : NSObject
{
    NSMutableDictionary *uploadDictionary;
    _Bool containsOptOutMessage;
    NSString *dPId;
    NSNumber *dPVersion;
    NSNumber *_sessionId;
    NSMutableArray *_preparedMessageIds;
}

+ (id)newBuilderWithMpid:(id)arg1 sessionId:(id)arg2 messages:(id)arg3 sessionTimeout:(double)arg4 uploadInterval:(double)arg5 dataPlanId:(id)arg6 dataPlanVersion:(id)arg7;
+ (id)newBuilderWithMpid:(id)arg1 messages:(id)arg2 uploadInterval:(double)arg3 dataPlanId:(id)arg4 dataPlanVersion:(id)arg5;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableArray *preparedMessageIds; // @synthesize preparedMessageIds=_preparedMessageIds;
@property(readonly, nonatomic) NSNumber *sessionId; // @synthesize sessionId=_sessionId;
- (id)withUserIdentities:(id)arg1;
- (id)withUserAttributes:(id)arg1 deletedUserAttributes:(id)arg2;
- (void)build:(CDUnknownBlockType)arg1;
- (id)description;
- (id)initWithMpid:(id)arg1 sessionId:(id)arg2 messages:(id)arg3 sessionTimeout:(double)arg4 uploadInterval:(double)arg5 dataPlanId:(id)arg6 dataPlanVersion:(id)arg7;

@end
