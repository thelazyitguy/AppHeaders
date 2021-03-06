//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GHMBatchCreateMeetingInvitesRequest, GHMCancelMeetingInviteRequest, GHMCreateChatGroupMeetingInvitesRequest, GHMCreateMeetingInviteRequest, GHMDeclineMeetingInviteRequest, GHMGetMeetingInviteRequest, GHMListMeetingInvitesRequest, GHMLogEventRequest, GRPCProtoCall;

@protocol GHMMeetingInviteService <NSObject>
- (GRPCProtoCall *)RPCToLogEventWithRequest:(GHMLogEventRequest *)arg1 handler:(void (^)(GPBEmpty *, NSError *))arg2;
- (void)logEventWithRequest:(GHMLogEventRequest *)arg1 handler:(void (^)(GPBEmpty *, NSError *))arg2;
- (GRPCProtoCall *)RPCToDeclineMeetingInviteWithRequest:(GHMDeclineMeetingInviteRequest *)arg1 handler:(void (^)(GPBEmpty *, NSError *))arg2;
- (void)declineMeetingInviteWithRequest:(GHMDeclineMeetingInviteRequest *)arg1 handler:(void (^)(GPBEmpty *, NSError *))arg2;
- (GRPCProtoCall *)RPCToCancelMeetingInviteWithRequest:(GHMCancelMeetingInviteRequest *)arg1 handler:(void (^)(GPBEmpty *, NSError *))arg2;
- (void)cancelMeetingInviteWithRequest:(GHMCancelMeetingInviteRequest *)arg1 handler:(void (^)(GPBEmpty *, NSError *))arg2;
- (GRPCProtoCall *)RPCToListMeetingInvitesWithRequest:(GHMListMeetingInvitesRequest *)arg1 handler:(void (^)(GHMListMeetingInvitesResponse *, NSError *))arg2;
- (void)listMeetingInvitesWithRequest:(GHMListMeetingInvitesRequest *)arg1 handler:(void (^)(GHMListMeetingInvitesResponse *, NSError *))arg2;
- (GRPCProtoCall *)RPCToGetMeetingInviteWithRequest:(GHMGetMeetingInviteRequest *)arg1 handler:(void (^)(GHMMeetingInvite *, NSError *))arg2;
- (void)getMeetingInviteWithRequest:(GHMGetMeetingInviteRequest *)arg1 handler:(void (^)(GHMMeetingInvite *, NSError *))arg2;
- (GRPCProtoCall *)RPCToCreateChatGroupMeetingInvitesWithRequest:(GHMCreateChatGroupMeetingInvitesRequest *)arg1 handler:(void (^)(GHMCreateChatGroupMeetingInvitesResponse *, NSError *))arg2;
- (void)createChatGroupMeetingInvitesWithRequest:(GHMCreateChatGroupMeetingInvitesRequest *)arg1 handler:(void (^)(GHMCreateChatGroupMeetingInvitesResponse *, NSError *))arg2;
- (GRPCProtoCall *)RPCToBatchCreateMeetingInvitesWithRequest:(GHMBatchCreateMeetingInvitesRequest *)arg1 handler:(void (^)(GHMBatchCreateMeetingInvitesResponse *, NSError *))arg2;
- (void)batchCreateMeetingInvitesWithRequest:(GHMBatchCreateMeetingInvitesRequest *)arg1 handler:(void (^)(GHMBatchCreateMeetingInvitesResponse *, NSError *))arg2;
- (GRPCProtoCall *)RPCToCreateMeetingInviteWithRequest:(GHMCreateMeetingInviteRequest *)arg1 handler:(void (^)(GHMMeetingInvite *, NSError *))arg2;
- (void)createMeetingInviteWithRequest:(GHMCreateMeetingInviteRequest *)arg1 handler:(void (^)(GHMMeetingInvite *, NSError *))arg2;
@end

