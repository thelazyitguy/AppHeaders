//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSURLSessionDataTask.h>

#import <NFURLSession/NFURLSessionTask-Protocol.h>

@class NFAddressTranslationHistory, NFURLSessionTaskStateWrapper, NSString, NSURL, NSURLRequest, NSURLResponse;

@interface NFURLSessionDataTask : NSURLSessionDataTask <NFURLSessionTask>
{
    CDUnknownBlockType retryDecisionBlock;
    NFURLSessionTaskStateWrapper *_stateWrapper;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NFURLSessionTaskStateWrapper *stateWrapper; // @synthesize stateWrapper=_stateWrapper;
@property(copy, nonatomic) CDUnknownBlockType retryDecisionBlock; // @synthesize retryDecisionBlock;
- (id)_newestRealTask;
@property(readonly, nonatomic) NSURL *untranslatedURL;
@property(readonly, nonatomic) NFAddressTranslationHistory *addressTranslationHistory;
@property(nonatomic) float priority;
- (void)resume;
- (void)suspend;
- (id)error;
@property(readonly) long long state;
- (void)cancel;
@property(copy) NSString *taskDescription;
- (long long)countOfBytesExpectedToReceive;
- (long long)countOfBytesExpectedToSend;
- (long long)countOfBytesSent;
- (long long)countOfBytesReceived;
@property(readonly, copy) NSURLResponse *response;
@property(readonly, copy) NSURLRequest *currentRequest;
@property(readonly, copy) NSURLRequest *originalRequest;
- (unsigned long long)retryTaskIdentifier;
@property(readonly) unsigned long long taskIdentifier;
- (void)setRetryTask:(id)arg1;
- (id)initWithSessionTask:(id)arg1 translationHistory:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

