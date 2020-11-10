//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTDAIContentPlaybackStatusAPI-Protocol.h>

@class NSString;
@protocol YTResponder;

@interface YTDAIContentPlaybackStatusController : NSObject <YTDAIContentPlaybackStatusAPI>
{
    id <YTResponder> _adsResponder;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <YTResponder> adsResponder; // @synthesize adsResponder=_adsResponder;
- (id)DAIAdBreakEventReporterWithAdBreak:(id)arg1;
- (id)DAIAdEventReporterWithAd:(id)arg1;
- (id)playbackContextForAd;
- (void)removeEventListener:(id)arg1;
- (void)addEventListener:(id)arg1;
- (void)externalPlaybackDidChangeToStatus:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

