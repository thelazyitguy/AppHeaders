//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSURLRequest, NSURLResponse;
@protocol FIRCLSURLSessionTaskDelegate, OS_dispatch_queue;

@interface FIRCLSURLSessionTask : NSObject
{
    id <FIRCLSURLSessionTaskDelegate> _delegate;
    NSURLRequest *_originalRequest;
    NSURLRequest *_currentRequest;
    NSURLResponse *_response;
    NSError *_error;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _invokesDelegate;
}

+ (id)task;
- (void).cxx_destruct;
@property(nonatomic) id <FIRCLSURLSessionTaskDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool invokesDelegate; // @synthesize invokesDelegate=_invokesDelegate;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) NSURLResponse *response; // @synthesize response=_response;
@property(copy, nonatomic) NSURLRequest *originalRequest; // @synthesize originalRequest=_originalRequest;
@property(copy, nonatomic) NSURLRequest *currentRequest; // @synthesize currentRequest=_currentRequest;
- (void)cleanup;
- (void)resume;
- (void)cancel;
- (void)start;
- (id)init;

@end
