//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRModel.h"

@class NSArray, NSString, UIColor;

@interface AIRDestinationContextCard : AIRModel
{
    UIColor *_textColor;
    NSString *_backgroundImageURL;
    NSArray *_cards;
}

+ (id)customKeyPathMapping;
+ (id)customTransformers;
+ (id)idAttributeName;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *cards; // @synthesize cards=_cards;
@property(readonly, copy, nonatomic) NSString *backgroundImageURL; // @synthesize backgroundImageURL=_backgroundImageURL;
@property(readonly, copy, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;

@end

