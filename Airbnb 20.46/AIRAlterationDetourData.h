//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRModel.h"

@class AIRAlterationDetourImage, NSString;

@interface AIRAlterationDetourData : AIRModel
{
    NSString *_popUpHeader;
    NSString *_detourMessageTitle;
    NSString *_detourMessageSubtitle;
    NSString *_primaryCtaText;
    NSString *_secondaryCtaText;
    AIRAlterationDetourImage *_image;
}

+ (id)customTransformers;
+ (id)customKeyPathMapping;
+ (id)idAttributeName;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) AIRAlterationDetourImage *image; // @synthesize image=_image;
@property(readonly, copy, nonatomic) NSString *secondaryCtaText; // @synthesize secondaryCtaText=_secondaryCtaText;
@property(readonly, copy, nonatomic) NSString *primaryCtaText; // @synthesize primaryCtaText=_primaryCtaText;
@property(readonly, copy, nonatomic) NSString *detourMessageSubtitle; // @synthesize detourMessageSubtitle=_detourMessageSubtitle;
@property(readonly, copy, nonatomic) NSString *detourMessageTitle; // @synthesize detourMessageTitle=_detourMessageTitle;
@property(readonly, copy, nonatomic) NSString *popUpHeader; // @synthesize popUpHeader=_popUpHeader;

@end
