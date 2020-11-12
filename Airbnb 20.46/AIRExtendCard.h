//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRModel.h"

@class AIRCardKicker, AIRExploreSearchParams, NSString, NSURL, UIColor;

@interface AIRExtendCard : AIRModel
{
    NSString *_title;
    NSString *_ctaType;
    NSString *_subtitle;
    NSString *_identifier;
    UIColor *_titleFontColor;
    UIColor *_subtitleFontColor;
    NSURL *_ctaURL;
    NSURL *_pictureURL;
    AIRExploreSearchParams *_searchParams;
    AIRCardKicker *_kicker;
}

+ (id)customKeyPathMapping;
+ (id)customTransformers;
+ (id)idAttributeName;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) AIRCardKicker *kicker; // @synthesize kicker=_kicker;
@property(readonly, copy, nonatomic) AIRExploreSearchParams *searchParams; // @synthesize searchParams=_searchParams;
@property(readonly, copy, nonatomic) NSURL *pictureURL; // @synthesize pictureURL=_pictureURL;
@property(readonly, copy, nonatomic) NSURL *ctaURL; // @synthesize ctaURL=_ctaURL;
@property(readonly, copy, nonatomic) UIColor *subtitleFontColor; // @synthesize subtitleFontColor=_subtitleFontColor;
@property(readonly, copy, nonatomic) UIColor *titleFontColor; // @synthesize titleFontColor=_titleFontColor;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *ctaType; // @synthesize ctaType=_ctaType;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;

@end
