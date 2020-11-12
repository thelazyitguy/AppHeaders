//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTWatchConnectivityRequestHandler-Protocol.h"

@class NSString, SPTWatchConnectivityDataLoader, SPTWatchConnectivitySession;
@protocol GLUEImageLoader, SPTExternalIntegrationContentController;

@interface SPTWatchPlatformImageRequestHandler : NSObject <SPTWatchConnectivityRequestHandler>
{
    SPTWatchConnectivityDataLoader *_dataLoader;
    id <GLUEImageLoader> _glueImageLoader;
    SPTWatchConnectivitySession *_watchConnectivitySession;
    id <SPTExternalIntegrationContentController> _contextResolver;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SPTExternalIntegrationContentController> contextResolver; // @synthesize contextResolver=_contextResolver;
@property(readonly, nonatomic) __weak SPTWatchConnectivitySession *watchConnectivitySession; // @synthesize watchConnectivitySession=_watchConnectivitySession;
@property(readonly, nonatomic) id <GLUEImageLoader> glueImageLoader; // @synthesize glueImageLoader=_glueImageLoader;
@property(readonly, nonatomic) SPTWatchConnectivityDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
- (struct CGSize)pointSizeFromPixelSize:(struct CGSize)arg1;
- (void)handleImageRequest:(id)arg1 imageURIString:(id)arg2 fileName:(id)arg3;
- (_Bool)handleResolveContextRequest:(id)arg1;
- (void)handleRequest:(id)arg1;
- (_Bool)canHandleRequest:(id)arg1;
- (id)initWithDataLoader:(id)arg1 glueImageLoader:(id)arg2 contextResolver:(id)arg3 watchConnectivitySession:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
