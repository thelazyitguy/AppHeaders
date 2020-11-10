//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "_TtP8ArgoCore15ACFSubscription_-Protocol.h"

@class NSDictionary, NSOperation, NSString, NSURL, NSURLSessionTask;
@protocol HTTPSessionManagerProtocol;

@interface HTTPRequestTask : NSObject <_TtP8ArgoCore15ACFSubscription_>
{
    id <HTTPSessionManagerProtocol> _sessionManager;
    NSDictionary *_sessionParameters;
    NSURLSessionTask *_sessionTask;
    NSOperation *_requestOperation;
    id _visualIdentifier;
    CDUnknownBlockType _validationHandler;
    CDUnknownBlockType _completionHandler;
    NSString *_originalRequestURLString;
    NSURL *_localFileURL;
}

+ (id)requestTaskWithSessionManager:(id)arg1 URLString:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *localFileURL; // @synthesize localFileURL=_localFileURL;
@property(copy, nonatomic) NSString *originalRequestURLString; // @synthesize originalRequestURLString=_originalRequestURLString;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) CDUnknownBlockType validationHandler; // @synthesize validationHandler=_validationHandler;
@property(nonatomic) __weak id visualIdentifier; // @synthesize visualIdentifier=_visualIdentifier;
@property(retain, nonatomic) NSOperation *requestOperation; // @synthesize requestOperation=_requestOperation;
@property(retain, nonatomic) NSURLSessionTask *sessionTask; // @synthesize sessionTask=_sessionTask;
@property(retain, nonatomic) NSDictionary *sessionParameters; // @synthesize sessionParameters=_sessionParameters;
@property(nonatomic) __weak id <HTTPSessionManagerProtocol> sessionManager; // @synthesize sessionManager=_sessionManager;
- (_Bool)isRunning;
- (void)invalidate;
- (void)cancel;

@end
