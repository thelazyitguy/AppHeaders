//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

#import "NSURLSessionDataDelegate-Protocol.h"

@class LLVideoPlayerCacheFile, NSString, NSURLCredential, NSURLRequest, NSURLSession, NSURLSessionDataTask;
@protocol LLVideoPlayerOperationDelegate;

@interface LLVideoPlayerRemoteOperation : NSOperation <NSURLSessionDataDelegate>
{
    _Bool _executing;
    _Bool _finished;
    id <LLVideoPlayerOperationDelegate> _delegate;
    NSURLRequest *_request;
    LLVideoPlayerCacheFile *_cacheFile;
    NSURLCredential *_credential;
    NSURLSession *_unownedSession;
    NSURLSession *_ownedSession;
    NSURLSessionDataTask *_dataTask;
    unsigned long long _options;
    unsigned long long _offset;
}

@property(nonatomic) unsigned long long offset; // @synthesize offset=_offset;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(retain, nonatomic) NSURLSessionDataTask *dataTask; // @synthesize dataTask=_dataTask;
@property(retain, nonatomic) NSURLSession *ownedSession; // @synthesize ownedSession=_ownedSession;
@property(nonatomic) __weak NSURLSession *unownedSession; // @synthesize unownedSession=_unownedSession;
@property(retain, nonatomic) NSURLCredential *credential; // @synthesize credential=_credential;
@property(retain, nonatomic) LLVideoPlayerCacheFile *cacheFile; // @synthesize cacheFile=_cacheFile;
@property(retain, nonatomic) NSURLRequest *request; // @synthesize request=_request;
@property(nonatomic) __weak id <LLVideoPlayerOperationDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isFinished) _Bool finished; // @synthesize finished=_finished;
@property(nonatomic, getter=isExecuting) _Bool executing; // @synthesize executing=_executing;
- (void).cxx_destruct;
- (_Bool)isAsynchronous;
- (_Bool)isConcurrent;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)cancel;
- (void)start;
- (void)finish;
- (void)reset;
- (id)initWithRequest:(id)arg1 cacheFile:(id)arg2;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

