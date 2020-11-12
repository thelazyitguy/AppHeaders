//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRModel.h"

@class AIRFixItReportBannerCTA, NSNumber, NSString;

@interface AIRFixItReportBanner : AIRModel
{
    NSString *_subtitle;
    NSNumber *_iconType;
    NSString *_title;
    AIRFixItReportBannerCTA *_primaryCTA;
    AIRFixItReportBannerCTA *_secondaryCTA;
}

+ (id)customTransformers;
+ (id)customKeyPathMapping;
+ (id)idAttributeName;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) AIRFixItReportBannerCTA *secondaryCTA; // @synthesize secondaryCTA=_secondaryCTA;
@property(readonly, copy, nonatomic) AIRFixItReportBannerCTA *primaryCTA; // @synthesize primaryCTA=_primaryCTA;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSNumber *iconType; // @synthesize iconType=_iconType;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;

@end
