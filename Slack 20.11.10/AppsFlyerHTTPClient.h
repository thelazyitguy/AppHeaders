//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AFSDKHTTPClientProtocol-Protocol.h"
#import "NSURLSessionDelegate-Protocol.h"
#import "NSURLSessionDownloadDelegate-Protocol.h"
#import "NSURLSessionTaskDelegate-Protocol.h"

@class NSString, NSURLSession;

@interface AppsFlyerHTTPClient : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDownloadDelegate, AFSDKHTTPClientProtocol>
{
    NSURLSession *_bgSession;
    NSURLSession *_genericSession;
}

@property(readonly, nonatomic) NSURLSession *genericSession; // @synthesize genericSession=_genericSession;
@property(retain, nonatomic) NSURLSession *bgSession; // @synthesize bgSession=_bgSession;
- (void).cxx_destruct;
- (id)createOneLink:(id)arg1 ttl:(long long)arg2 brandDomain:(id)arg3 devKey:(id)arg4 parameters:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (id)getOneLink:(id)arg1 devKey:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)backgroundCallWithRequest:(id)arg1;
- (void)sendRequestWithConfiguration:(id)arg1 data:(id)arg2;
- (void)sendRequestEventToServer:(id)arg1 isRequestFromCache:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)requestWithURL:(CDUnknownBlockType)arg1 URLRequest:(CDUnknownBlockType)arg2 HTTPMethod:(id)arg3 dictionary:(id)arg4 retries:(long long)arg5 isReturnJSON:(_Bool)arg6 isSharedSession:(_Bool)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
