//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PeriscopeSDK/NSURLSessionDelegate-Protocol.h>
#import <PeriscopeSDK/NSURLSessionTaskDelegate-Protocol.h>
#import <PeriscopeSDK/PTVModelSession-Protocol.h>

@class NSString, NSURLSession;

@interface PTVModelSessionInternal : NSObject <PTVModelSession, NSURLSessionDelegate, NSURLSessionTaskDelegate>
{
    unsigned long long _sessionCounters[3];
    NSURLSession *_sessions[3];
}

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)ptv_taskWithMode:(long long)arg1 context:(id)arg2;
- (void)ptv_decrementMode:(long long)arg1;
- (void)ptv_incrementMode:(long long)arg1;
- (id)sessionForMode:(long long)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

