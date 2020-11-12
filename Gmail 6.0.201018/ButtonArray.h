//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;

@interface ButtonArray : UIView
{
    _Bool _fixedSpacingEnabled;
    _Bool _truncateToBounds;
    NSArray *_items;
    double _spacing;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool truncateToBounds; // @synthesize truncateToBounds=_truncateToBounds;
@property(nonatomic) double spacing; // @synthesize spacing=_spacing;
@property(nonatomic, getter=isFixedSpacingEnabled) _Bool fixedSpacingEnabled; // @synthesize fixedSpacingEnabled=_fixedSpacingEnabled;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
