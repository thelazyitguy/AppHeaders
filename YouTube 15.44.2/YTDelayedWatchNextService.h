//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTInnerTubeUIServiceWithErrorResponse-Protocol.h>
#import <Module_Framework/YTInnerTubeUIServiceWithTimeoutInterval-Protocol.h>

@class GIMMe, NSString, YTWatchNextService;
@protocol YTDelayedWatchNextLoadingDelegate;

@interface YTDelayedWatchNextService : NSObject <YTInnerTubeUIServiceWithTimeoutInterval, YTInnerTubeUIServiceWithErrorResponse>
{
    YTWatchNextService *_watchNextService;
    CDUnknownBlockType _delayedResponseBlock;
    GIMMe *_gimme;
    id <YTDelayedWatchNextLoadingDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <YTDelayedWatchNextLoadingDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void)handleFailedRequest:(id)arg1 error:(id)arg2 responseBlock:(CDUnknownBlockType)arg3;
- (void)makeRequest:(id)arg1 refresh:(_Bool)arg2 timeoutInterval:(double)arg3 responseBlock:(CDUnknownBlockType)arg4 errorBlock:(CDUnknownBlockType)arg5;
- (id)continuationRequestWithToken:(id)arg1 clickTrackingParams:(id)arg2;
- (void)clearCaches;
- (void)makeRequest:(id)arg1 refresh:(_Bool)arg2 responseBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4;
- (Class)responseClass;
- (void)loadDelayedResponse;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

