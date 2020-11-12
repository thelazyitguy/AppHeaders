//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTCanvasMetadataResolverFactory-Protocol.h"

@class NSString;
@protocol CosmosFeature, SPTCanvasTrackChecker;

@interface SPTCanvasMetadataResolverFactoryImplementation : NSObject <SPTCanvasMetadataResolverFactory>
{
    id <CosmosFeature> _cosmosFeature;
    id <SPTCanvasTrackChecker> _canvasTrackChecker;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SPTCanvasTrackChecker> canvasTrackChecker; // @synthesize canvasTrackChecker=_canvasTrackChecker;
@property(readonly, nonatomic) __weak id <CosmosFeature> cosmosFeature; // @synthesize cosmosFeature=_cosmosFeature;
- (id)createResolverForTracks:(id)arg1;
- (id)initWithCosmosFeature:(id)arg1 canvasTrackChecker:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
