//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class ASConfiguration;

@protocol ELMRuntimeConfig <NSObject>
- (ASConfiguration *)textureBaseConfiguration;
- (unsigned long long)maxConcurrentImageDownloads;
- (unsigned long long)imageCacheStrategy;
- (_Bool)useTextureImageDownloader;
- (unsigned long long)diskImageCacheBytes;

@optional
- (_Bool)enableTypeSwitchBugfix;
- (_Bool)enableDataValidCheckBeforeUpdate;
- (_Bool)enableSafeCellWrappingForELMScrollViewDataController;
- (_Bool)enableModelResynthesizing;
- (unsigned long long)strategyForFixingInvalidUTF8Chars;
- (_Bool)applyDefaultStyleProperties;
- (_Bool)applyDefaultLayoutProperties;
- (float)cellInCellErrorReportingRate;
- (_Bool)useSmartCells;
- (_Bool)useSharedComponent;
- (_Bool)useNewElementsAccessibilityLogic;
- (_Bool)useEditableTextCanaryMode;
- (_Bool)useExpandableTextCanaryMode;
- (int)expandableTextLayoutLimit;
- (_Bool)enableSynchronousPromise;
- (_Bool)isEkoCanaryReleaseChannelEnabled;
- (_Bool)isInteractionLoggerEnabled;
- (_Bool)useSynchronousObservationOfEntitiesStore;
- (unsigned long long)ekoRecycledBufferSize;
- (_Bool)useNonEntitiesStore;
- (_Bool)useElementsRipple;
- (_Bool)useAutomaticLayerBacking;
@end

