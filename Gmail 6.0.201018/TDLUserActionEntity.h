//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, TDLSyncRequest_UserAction;

@interface TDLUserActionEntity : NSObject
{
    NSString *id__;
    NSString *shardId_;
    TDLSyncRequest_UserAction *protoUserAction_;
}

- (void)dealloc;
- (id)toUserAction;
- (id)getProtoUserAction;
- (id)getShardId;
- (id)getId;

@end
