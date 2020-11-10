//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTBelowPlayerCompanionRenderingAPI-Protocol.h>

@class GPCPromise, NSString;
@protocol YTCompanionRenderingProtocol;

@interface YTBelowPlayerCompanionRenderingAPIImpl : NSObject <YTBelowPlayerCompanionRenderingAPI>
{
    id <YTCompanionRenderingProtocol> _companionRenderingSurface;
    GPCPromise *_companionRenderingSurfaceReadyPromise;
}

- (void).cxx_destruct;
- (void)setCompanionRenderingSurface:(id)arg1;
- (id)companionRenderingSurfaceReadyPromise;
- (_Bool)isCompanionRenderingSurfaceReady;
- (void)mediaLayoutDidFinishWithLayoutID:(id)arg1 completeType:(long long)arg2;
- (void)clearCompanionWithLayoutID:(id)arg1;
- (void)startCompanion:(id)arg1 withLayoutID:(id)arg2 interactionLoggingAdsClientData:(id)arg3;
- (void)companionRenderingSurfaceIsReady:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

