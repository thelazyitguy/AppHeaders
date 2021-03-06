//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRModel.h"

@class AIREarhartLogoImageBreakpointConfig, AIRExploreSearchParams, AIRListingPhoto, AIRVideoContent, NSArray, NSNumber, NSObject, NSString;

@interface AIRListHeaderInfo : AIRModel
{
    AIRListingPhoto *_smallBackgroundImage;
    AIRListingPhoto *_mediumBackgroundImage;
    AIRListingPhoto *_largeBackgroundImage;
    NSString *_title;
    NSString *_titleTextColor;
    NSString *_subtitle;
    NSString *_kickerText;
    AIRExploreSearchParams *_searchParams;
    NSString *_ctaText;
    NSString *_ctaPath;
    NSString *_rawLogoName;
    NSString *_logoColor;
    NSString *_rawStyle;
    NSString *_strokeColor;
    NSNumber *_strokeImageIndex;
    AIREarhartLogoImageBreakpointConfig *_logoImageConfig;
    NSObject *_defaultBreakpointConfig;
    NSObject *_smallBreakpointConfig;
    NSObject *_mediumBreakpointConfig;
    AIRVideoContent *_video;
    NSArray *_textDetails;
}

+ (id)customTransformers;
+ (id)customKeyPathMapping;
+ (id)idAttributeName;
+ (id)customTransformers;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *textDetails; // @synthesize textDetails=_textDetails;
@property(readonly, copy, nonatomic) AIRVideoContent *video; // @synthesize video=_video;
@property(readonly, nonatomic) NSObject *mediumBreakpointConfig; // @synthesize mediumBreakpointConfig=_mediumBreakpointConfig;
@property(readonly, nonatomic) NSObject *smallBreakpointConfig; // @synthesize smallBreakpointConfig=_smallBreakpointConfig;
@property(readonly, nonatomic) NSObject *defaultBreakpointConfig; // @synthesize defaultBreakpointConfig=_defaultBreakpointConfig;
@property(readonly, copy, nonatomic) AIREarhartLogoImageBreakpointConfig *logoImageConfig; // @synthesize logoImageConfig=_logoImageConfig;
@property(readonly, copy, nonatomic) NSNumber *strokeImageIndex; // @synthesize strokeImageIndex=_strokeImageIndex;
@property(readonly, copy, nonatomic) NSString *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(readonly, copy, nonatomic) NSString *rawStyle; // @synthesize rawStyle=_rawStyle;
@property(readonly, copy, nonatomic) NSString *logoColor; // @synthesize logoColor=_logoColor;
@property(readonly, copy, nonatomic) NSString *rawLogoName; // @synthesize rawLogoName=_rawLogoName;
@property(readonly, copy, nonatomic) NSString *ctaPath; // @synthesize ctaPath=_ctaPath;
@property(readonly, copy, nonatomic) NSString *ctaText; // @synthesize ctaText=_ctaText;
@property(readonly, copy, nonatomic) AIRExploreSearchParams *searchParams; // @synthesize searchParams=_searchParams;
@property(readonly, copy, nonatomic) NSString *kickerText; // @synthesize kickerText=_kickerText;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *titleTextColor; // @synthesize titleTextColor=_titleTextColor;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) AIRListingPhoto *largeBackgroundImage; // @synthesize largeBackgroundImage=_largeBackgroundImage;
@property(readonly, copy, nonatomic) AIRListingPhoto *mediumBackgroundImage; // @synthesize mediumBackgroundImage=_mediumBackgroundImage;
@property(readonly, copy, nonatomic) AIRListingPhoto *smallBackgroundImage; // @synthesize smallBackgroundImage=_smallBackgroundImage;
@property(readonly, nonatomic) long long logoName;
@property(readonly, nonatomic) long long style;

@end

