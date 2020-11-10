//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

#import <Module_Framework/YTStandaloneBadgeViewModel-Protocol.h>

@class NSString, YTIStandaloneYpcBadgeRenderer;

@interface YTIMovieCardBadgeSupportedRenderers : GPBMessage <YTStandaloneBadgeViewModel>
{
}

+ (id)descriptor;
- (_Bool)hasStandaloneYpcBadgeRenderer;
- (id)metadataBadgeRenderer;
- (_Bool)hasMetadataBadgeRenderer;
- (id)standaloneCollectionBadgeRenderer;
- (_Bool)hasStandaloneCollectionBadgeRenderer;
- (id)standaloneRedBadgeRenderer;
- (_Bool)hasStandaloneRedBadgeRenderer;
- (long long)badgeStyle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) int rendererOneOfCase; // @dynamic rendererOneOfCase;
@property(retain, nonatomic) YTIStandaloneYpcBadgeRenderer *standaloneYpcBadgeRenderer; // @dynamic standaloneYpcBadgeRenderer;
@property(readonly) Class superclass;

@end

