//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRModel.h"

@class NSNumber, NSString;

@interface AIRSearchResultVerificationData : AIRModel
{
    NSNumber *_enabled;
    NSString *_badgeText;
    NSString *_badgeSecondaryText;
    NSString *_rawKickerBadgeType;
}

+ (id)idAttributeName;
+ (id)customKeyPathMapping;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *rawKickerBadgeType; // @synthesize rawKickerBadgeType=_rawKickerBadgeType;
@property(readonly, copy, nonatomic) NSString *badgeSecondaryText; // @synthesize badgeSecondaryText=_badgeSecondaryText;
@property(readonly, copy, nonatomic) NSString *badgeText; // @synthesize badgeText=_badgeText;
@property(readonly, copy, nonatomic) NSNumber *enabled; // @synthesize enabled=_enabled;

@end
