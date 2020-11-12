//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRModel.h"

@class NSArray, NSString, NSURL, UIColor;

@interface AIRExploreChinaMarqueeItem : AIRModel
{
    _Bool _showBelo;
    NSString *_title;
    NSString *_subtitle;
    NSString *_tagline;
    NSString *_ctaText;
    NSString *_ctaLink;
    NSString *_ctaType;
    NSString *_ctaStyle;
    NSString *_secondaryCtaText;
    NSString *_secondaryCtaLink;
    NSString *_secondaryCtaType;
    NSString *_secondaryCtaStyle;
    NSURL *_imageURL;
    UIColor *_maskColor;
    NSString *_itemId;
    NSString *_campaignName;
    NSString *_previewImage;
    NSString *_fridayLoggingID;
    NSString *_fridayArrangementID;
    NSArray *_parallaxLayers;
    long long _duration;
}

+ (id)idAttributeName;
+ (id)customTransformers;
+ (id)customKeyPathMapping;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) _Bool showBelo; // @synthesize showBelo=_showBelo;
@property(readonly, copy, nonatomic) NSArray *parallaxLayers; // @synthesize parallaxLayers=_parallaxLayers;
@property(readonly, copy, nonatomic) NSString *fridayArrangementID; // @synthesize fridayArrangementID=_fridayArrangementID;
@property(readonly, copy, nonatomic) NSString *fridayLoggingID; // @synthesize fridayLoggingID=_fridayLoggingID;
@property(readonly, copy, nonatomic) NSString *previewImage; // @synthesize previewImage=_previewImage;
@property(readonly, copy, nonatomic) NSString *campaignName; // @synthesize campaignName=_campaignName;
@property(readonly, copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(readonly, copy, nonatomic) UIColor *maskColor; // @synthesize maskColor=_maskColor;
@property(readonly, copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(readonly, copy, nonatomic) NSString *secondaryCtaStyle; // @synthesize secondaryCtaStyle=_secondaryCtaStyle;
@property(readonly, copy, nonatomic) NSString *secondaryCtaType; // @synthesize secondaryCtaType=_secondaryCtaType;
@property(readonly, copy, nonatomic) NSString *secondaryCtaLink; // @synthesize secondaryCtaLink=_secondaryCtaLink;
@property(readonly, copy, nonatomic) NSString *secondaryCtaText; // @synthesize secondaryCtaText=_secondaryCtaText;
@property(readonly, copy, nonatomic) NSString *ctaStyle; // @synthesize ctaStyle=_ctaStyle;
@property(readonly, copy, nonatomic) NSString *ctaType; // @synthesize ctaType=_ctaType;
@property(readonly, copy, nonatomic) NSString *ctaLink; // @synthesize ctaLink=_ctaLink;
@property(readonly, copy, nonatomic) NSString *ctaText; // @synthesize ctaText=_ctaText;
@property(readonly, copy, nonatomic) NSString *tagline; // @synthesize tagline=_tagline;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;

@end
