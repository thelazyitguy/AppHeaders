//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/MLVideoSplicer-Protocol.h>

@class MLAuxiliaryManifestManager, NSString;
@protocol MLVideoTimeline;

@interface MLHLSPlaylistVideoSplicer : NSObject <MLVideoSplicer>
{
    id <MLVideoTimeline> _timeline;
    MLAuxiliaryManifestManager *_auxiliaryManifestManager;
    NSString *_CPN;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *CPN; // @synthesize CPN=_CPN;
@property(readonly, nonatomic) MLAuxiliaryManifestManager *auxiliaryManifestManager; // @synthesize auxiliaryManifestManager=_auxiliaryManifestManager;
@property(nonatomic) __weak id <MLVideoTimeline> timeline; // @synthesize timeline=_timeline;
- (void)addVideo:(id)arg1 playerConfig:(id)arg2 forCPN:(id)arg3;
- (id)initWithCPN:(id)arg1 auxiliaryManifestManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

