//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Apptentive/ApptentiveRequestOperationDataSource-Protocol.h>
#import <Apptentive/NSURLSessionDelegate-Protocol.h>

@class ApptentiveRetryPolicy, NSOperationQueue, NSString, NSURL, NSURLSession;

@interface ApptentiveClient : NSObject <NSURLSessionDelegate, ApptentiveRequestOperationDataSource>
{
    _Bool _paused;
    NSURLSession *_URLSession;
    NSOperationQueue *_networkQueue;
    NSURL *_baseURL;
    NSString *_apptentiveKey;
    NSString *_apptentiveSignature;
    ApptentiveRetryPolicy *_retryPolicy;
}

+ (id)serverErrorStatusCodes;
+ (id)clientErrorStatusCodes;
+ (id)okStatusCodes;
- (void).cxx_destruct;
@property(retain, nonatomic) ApptentiveRetryPolicy *retryPolicy; // @synthesize retryPolicy=_retryPolicy;
@property(nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
@property(readonly, nonatomic) NSString *apptentiveSignature; // @synthesize apptentiveSignature=_apptentiveSignature;
@property(readonly, nonatomic) NSString *apptentiveKey; // @synthesize apptentiveKey=_apptentiveKey;
@property(readonly, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(readonly, nonatomic) NSOperationQueue *networkQueue; // @synthesize networkQueue=_networkQueue;
@property(readonly, nonatomic) NSURLSession *URLSession; // @synthesize URLSession=_URLSession;
- (id)URLRequestWithRequest:(id)arg1;
- (id)requestOperationWithRequest:(id)arg1 legacyToken:(id)arg2 delegate:(id)arg3;
- (id)requestOperationWithRequest:(id)arg1 token:(id)arg2 delegate:(id)arg3;
- (id)initWithBaseURL:(id)arg1 apptentiveKey:(id)arg2 apptentiveSignature:(id)arg3 delegateQueue:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
