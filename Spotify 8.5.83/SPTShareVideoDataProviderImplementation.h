//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTShareVideoDataProvider-Protocol.h"

@class NSString;
@protocol SPTCanvasVideoLoader, SPTCanvasVideoLoaderFactory;

@interface SPTShareVideoDataProviderImplementation : NSObject <SPTShareVideoDataProvider>
{
    id <SPTCanvasVideoLoaderFactory> _canvasVideoLoaderFactory;
    id <SPTCanvasVideoLoader> _canvasVideoLoader;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <SPTCanvasVideoLoader> canvasVideoLoader; // @synthesize canvasVideoLoader=_canvasVideoLoader;
@property(readonly, nonatomic) id <SPTCanvasVideoLoaderFactory> canvasVideoLoaderFactory; // @synthesize canvasVideoLoaderFactory=_canvasVideoLoaderFactory;
- (void)provideVideoDataForEntityURI:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithCanvasVideoLoaderFactory:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

