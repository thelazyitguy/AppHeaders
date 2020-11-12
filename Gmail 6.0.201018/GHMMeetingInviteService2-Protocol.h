//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GHMBatchCreateMeetingInvitesRequest, GHMCancelMeetingInviteRequest, GHMCreateChatGroupMeetingInvitesRequest, GHMCreateMeetingInviteRequest, GHMDeclineMeetingInviteRequest, GHMGetMeetingInviteRequest, GHMListMeetingInvitesRequest, GHMLogEventRequest, GRPCCallOptions, GRPCUnaryProtoCall;
@protocol GRPCProtoResponseHandler;

@protocol GHMMeetingInviteService2 <NSObject>
- (GRPCUnaryProtoCall *)logEventWithMessage:(GHMLogEventRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
- (GRPCUnaryProtoCall *)declineMeetingInviteWithMessage:(GHMDeclineMeetingInviteRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
- (GRPCUnaryProtoCall *)cancelMeetingInviteWithMessage:(GHMCancelMeetingInviteRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
- (GRPCUnaryProtoCall *)listMeetingInvitesWithMessage:(GHMListMeetingInvitesRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
- (GRPCUnaryProtoCall *)getMeetingInviteWithMessage:(GHMGetMeetingInviteRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
- (GRPCUnaryProtoCall *)createChatGroupMeetingInvitesWithMessage:(GHMCreateChatGroupMeetingInvitesRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
- (GRPCUnaryProtoCall *)batchCreateMeetingInvitesWithMessage:(GHMBatchCreateMeetingInvitesRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
- (GRPCUnaryProtoCall *)createMeetingInviteWithMessage:(GHMCreateMeetingInviteRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
@end
