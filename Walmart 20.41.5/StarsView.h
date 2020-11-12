//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@class UIColor;

@interface StarsView : UILabel
{
    double _rating;
    double _fontSize;
    UIColor *_fillColor;
    UIColor *_unfilledColor;
}

- (void).cxx_destruct;
@property(copy, nonatomic) UIColor *unfilledColor; // @synthesize unfilledColor=_unfilledColor;
@property(copy, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(nonatomic) double rating; // @synthesize rating=_rating;
- (struct CGSize)commonIntrinsicContentSize;
- (void)commonInit;
- (struct CGSize)intrinsicContentSize;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
