//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <doordash_collectionview_ios/DDBorderCollectionViewCell.h>

@class CALayer;

@interface DDBorderAndTintCollectionViewCell : DDBorderCollectionViewCell
{
    _Bool _defaultTintEnabled;
    CALayer *_tintAdjustmentLayer;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isDefaultTintEnabled) _Bool defaultTintEnabled; // @synthesize defaultTintEnabled=_defaultTintEnabled;
@property(retain, nonatomic) CALayer *tintAdjustmentLayer; // @synthesize tintAdjustmentLayer=_tintAdjustmentLayer;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (void)awakeFromNib;
- (id)init;

@end
