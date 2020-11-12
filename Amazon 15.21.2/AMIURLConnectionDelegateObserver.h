//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AMINetworkEventProvider-Protocol.h"
#import "NSURLConnectionDataDelegate-Protocol.h"

@class NSError, NSHTTPURLResponse, NSMutableData, NSString, NSURLRequest;

@interface AMIURLConnectionDelegateObserver : NSObject <NSURLConnectionDataDelegate, AMINetworkEventProvider>
{
    CDUnknownBlockType _completionHandler;
    NSHTTPURLResponse *_response;
    unsigned long long _totalBytesDownloaded;
    unsigned long long _totalBytesUploaded;
    NSURLRequest *_originalRequest;
    NSURLRequest *_currentRequest;
    NSError *_error;
    unsigned long long _state;
    NSMutableData *_data;
}

@property(retain, nonatomic) NSMutableData *data; // @synthesize data=_data;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSURLRequest *currentRequest; // @synthesize currentRequest=_currentRequest;
@property(retain, nonatomic) NSURLRequest *originalRequest; // @synthesize originalRequest=_originalRequest;
@property(nonatomic) unsigned long long totalBytesUploaded; // @synthesize totalBytesUploaded=_totalBytesUploaded;
@property(nonatomic) unsigned long long totalBytesDownloaded; // @synthesize totalBytesDownloaded=_totalBytesDownloaded;
@property(retain, nonatomic) NSHTTPURLResponse *response; // @synthesize response=_response;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void).cxx_destruct;
- (id)networkEvent;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)didScheduleRequestForAfterStartup;
- (void)didStartExecuting;
- (id)initWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
