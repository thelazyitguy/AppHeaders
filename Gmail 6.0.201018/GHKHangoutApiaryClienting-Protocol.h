//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CPBClientRequestHeader, GPBMessage, NSString;
@protocol GHKApiaryClientDelegate;

@protocol GHKHangoutApiaryClienting <NSObject>
- (void)issueApiaryRequest:(GPBMessage *)arg1 onPath:(NSString *)arg2 responseClass:(Class)arg3 logRequest:(_Bool)arg4 completionHandler:(void (^)(unsigned long long, GPBMessage *))arg5;
- (void)issueApiaryRequest:(GPBMessage *)arg1 onPath:(NSString *)arg2 responseClass:(Class)arg3 completionHandler:(void (^)(unsigned long long, GPBMessage *))arg4;
- (void)ackHangoutInviteRequestForHangoutID:(NSString *)arg1 inviteId:(NSString *)arg2 userAction:(int)arg3 indirectUserAction:(int)arg4 completionHandler:(void (^)(unsigned long long, HOPBHangoutInvitationAckResponse *))arg5;
- (NSString *)clientResource;
- (CPBClientRequestHeader *)requestHeader;
@property(nonatomic, readonly) id <GHKApiaryClientDelegate> delegate;
@end
