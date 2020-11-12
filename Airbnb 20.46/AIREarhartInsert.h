//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRModel.h"

@class AIREarhartAdditionalInfoDisclosure, AIREarhartBadge, AIREarhartLogoImageBreakpointConfig, AIREarhartPicture, AIRExploreSearchParams, AIRVideoContent, NSArray, NSNumber, NSString, NSURL;

@interface AIREarhartInsert : AIRModel
{
    NSString *_title;
    NSString *_subtitle;
    NSString *_kicker;
    NSString *_loggingId;
    NSString *_ctaText;
    NSNumber *_shouldShowScrim;
    NSString *_titleColorHex;
    NSString *_subtitleColorHex;
    NSString *_kickerColorHex;
    NSString *_ctaColorHex;
    NSString *_scrimColorHex;
    NSString *_backgroundColorHex;
    NSString *_titleFontWeight;
    NSString *_subtitleFontWeight;
    NSString *_kickerFontWeight;
    NSString *_ctaFontWeight;
    NSNumber *_mediaAspectRatio;
    NSString *_ctaStyle;
    NSURL *_ctaURL;
    NSString *_ctaType;
    AIRExploreSearchParams *_searchParameters;
    NSArray *_pictures;
    AIREarhartPicture *_mediumPicture;
    AIRVideoContent *_video;
    AIREarhartLogoImageBreakpointConfig *_logoImageConfig;
    AIREarhartBadge *_badge;
    AIREarhartAdditionalInfoDisclosure *_additionalInfoDisclosure;
}

+ (id)customTransformers;
+ (id)customKeyPathMapping;
+ (id)idAttributeName;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) AIREarhartAdditionalInfoDisclosure *additionalInfoDisclosure; // @synthesize additionalInfoDisclosure=_additionalInfoDisclosure;
@property(readonly, copy, nonatomic) AIREarhartBadge *badge; // @synthesize badge=_badge;
@property(readonly, copy, nonatomic) AIREarhartLogoImageBreakpointConfig *logoImageConfig; // @synthesize logoImageConfig=_logoImageConfig;
@property(readonly, copy, nonatomic) AIRVideoContent *video; // @synthesize video=_video;
@property(readonly, copy, nonatomic) AIREarhartPicture *mediumPicture; // @synthesize mediumPicture=_mediumPicture;
@property(readonly, copy, nonatomic) NSArray *pictures; // @synthesize pictures=_pictures;
@property(readonly, copy, nonatomic) AIRExploreSearchParams *searchParameters; // @synthesize searchParameters=_searchParameters;
@property(readonly, copy, nonatomic) NSString *ctaType; // @synthesize ctaType=_ctaType;
@property(readonly, copy, nonatomic) NSURL *ctaURL; // @synthesize ctaURL=_ctaURL;
@property(readonly, copy, nonatomic) NSString *ctaStyle; // @synthesize ctaStyle=_ctaStyle;
@property(readonly, copy, nonatomic) NSNumber *mediaAspectRatio; // @synthesize mediaAspectRatio=_mediaAspectRatio;
@property(readonly, copy, nonatomic) NSString *ctaFontWeight; // @synthesize ctaFontWeight=_ctaFontWeight;
@property(readonly, copy, nonatomic) NSString *kickerFontWeight; // @synthesize kickerFontWeight=_kickerFontWeight;
@property(readonly, copy, nonatomic) NSString *subtitleFontWeight; // @synthesize subtitleFontWeight=_subtitleFontWeight;
@property(readonly, copy, nonatomic) NSString *titleFontWeight; // @synthesize titleFontWeight=_titleFontWeight;
@property(readonly, copy, nonatomic) NSString *backgroundColorHex; // @synthesize backgroundColorHex=_backgroundColorHex;
@property(readonly, copy, nonatomic) NSString *scrimColorHex; // @synthesize scrimColorHex=_scrimColorHex;
@property(readonly, copy, nonatomic) NSString *ctaColorHex; // @synthesize ctaColorHex=_ctaColorHex;
@property(readonly, copy, nonatomic) NSString *kickerColorHex; // @synthesize kickerColorHex=_kickerColorHex;
@property(readonly, copy, nonatomic) NSString *subtitleColorHex; // @synthesize subtitleColorHex=_subtitleColorHex;
@property(readonly, copy, nonatomic) NSString *titleColorHex; // @synthesize titleColorHex=_titleColorHex;
@property(readonly, copy, nonatomic) NSNumber *shouldShowScrim; // @synthesize shouldShowScrim=_shouldShowScrim;
@property(readonly, copy, nonatomic) NSString *ctaText; // @synthesize ctaText=_ctaText;
@property(readonly, copy, nonatomic) NSString *loggingId; // @synthesize loggingId=_loggingId;
@property(readonly, copy, nonatomic) NSString *kicker; // @synthesize kicker=_kicker;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;

@end
