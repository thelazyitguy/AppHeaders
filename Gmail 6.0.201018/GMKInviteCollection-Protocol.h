//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMKCollection-Protocol.h"

@class FBLPromise, NSArray, NSDictionary, NSString;

@protocol GMKInviteCollection <GMKCollection>
- (FBLPromise *)cancelInviteWithID:(NSString *)arg1;
- (FBLPromise *)inviteChatGroupWithID:(NSString *)arg1 ringTargets:(NSArray *)arg2;
- (FBLPromise *)inviteUserWithID:(NSString *)arg1;
@property(nonatomic, readonly) NSDictionary *resources;
@end
