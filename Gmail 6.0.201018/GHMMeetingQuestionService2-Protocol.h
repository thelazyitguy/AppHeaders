//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GHMCastQuestionVoteRequest, GHMClearQuestionsRequest, GHMCreateQuestionRequest, GHMDeleteQuestionRequest, GHMListQuestionSeriesMetadataRequest, GHMListQuestionsRequest, GHMUpdateQuestionRequest, GHMUpdateQuestionSeriesMetadataRequest, GRPCCallOptions, GRPCUnaryProtoCall;
@protocol GRPCProtoResponseHandler;

@protocol GHMMeetingQuestionService2 <NSObject>
- (GRPCUnaryProtoCall *)castQuestionVoteWithMessage:(GHMCastQuestionVoteRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
- (GRPCUnaryProtoCall *)clearQuestionsWithMessage:(GHMClearQuestionsRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
- (GRPCUnaryProtoCall *)deleteQuestionWithMessage:(GHMDeleteQuestionRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
- (GRPCUnaryProtoCall *)updateQuestionWithMessage:(GHMUpdateQuestionRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
- (GRPCUnaryProtoCall *)listQuestionsWithMessage:(GHMListQuestionsRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
- (GRPCUnaryProtoCall *)createQuestionWithMessage:(GHMCreateQuestionRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
- (GRPCUnaryProtoCall *)updateQuestionSeriesMetadataWithMessage:(GHMUpdateQuestionSeriesMetadataRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
- (GRPCUnaryProtoCall *)listQuestionSeriesMetadataWithMessage:(GHMListQuestionSeriesMetadataRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
@end

