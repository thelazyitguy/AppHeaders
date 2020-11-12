//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SXLabel.h"

@class NSString;

@interface SXPriceLabel : SXLabel
{
    NSString *_badgeAssetId;
    struct _NSRange _prePriceRange;
    struct _NSRange _buyPriceRange;
    struct _NSRange _listPriceRange;
    struct _NSRange _unitPriceRange;
    struct _NSRange _postPriceRange;
}

+ (struct _NSRange)appendString:(id)arg1 toPriceString:(id)arg2;
@property(retain, nonatomic) NSString *badgeAssetId; // @synthesize badgeAssetId=_badgeAssetId;
@property(nonatomic) struct _NSRange postPriceRange; // @synthesize postPriceRange=_postPriceRange;
@property(nonatomic) struct _NSRange unitPriceRange; // @synthesize unitPriceRange=_unitPriceRange;
@property(nonatomic) struct _NSRange listPriceRange; // @synthesize listPriceRange=_listPriceRange;
@property(nonatomic) struct _NSRange buyPriceRange; // @synthesize buyPriceRange=_buyPriceRange;
@property(nonatomic) struct _NSRange prePriceRange; // @synthesize prePriceRange=_prePriceRange;
- (void).cxx_destruct;
- (id)labelElementWithSubstring:(id)arg1 atRange:(struct _NSRange)arg2 withAttributes:(id)arg3 andRect:(struct CGRect)arg4;
- (void)loadWithAttributes:(id)arg1;
- (void)loadWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic) unsigned long long numberOfLines;

@end
