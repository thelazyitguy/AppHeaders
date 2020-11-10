//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/GILClientVisualElementPrivate-Protocol.h>

@class GILClientVisualElementSnapshot, GILVisualElementData, NSArray, NSString;
@protocol GILHierarchyProvider;

@interface GILClientVisualElement : NSObject <GILClientVisualElementPrivate>
{
    GILClientVisualElementSnapshot *_snapshot;
    id <GILHierarchyProvider> _hierarchyProvider;
    NSArray *_interactionMetadataProviders;
    GILVisualElementData *_visualElementData;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) GILVisualElementData *visualElementData; // @synthesize visualElementData=_visualElementData;
- (id)interactionMetadataForUserAction:(int)arg1;
- (long long)currentVisibility;
- (void)updateClientVisualElementSnapshotWithImpressionCounter:(long long)arg1 impressionIndex:(unsigned int)arg2 batchedImpressionCounter:(long long)arg3 batchedImpressionIndex:(unsigned int)arg4 underDedupeBranch:(_Bool)arg5;
- (void)updateClientVisualElementSnapshotWithVisibility:(long long)arg1;
@property(readonly, nonatomic) GILClientVisualElementSnapshot *snapshot;
@property(readonly, nonatomic, getter=isAlreadyImpressed) _Bool alreadyImpressed;
@property(retain, nonatomic) id <GILHierarchyProvider> hierarchyProvider;
- (id)sideChannelForKey:(id)arg1;
@property(readonly, nonatomic) unsigned long long elementIndex;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) int visualElementID;
- (id)initWithVisualElementID:(int)arg1;
- (id)initWithVisualElementParams:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

