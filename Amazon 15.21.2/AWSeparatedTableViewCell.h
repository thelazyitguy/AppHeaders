//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class CALayer, UIColor;

@interface AWSeparatedTableViewCell : UITableViewCell
{
    CALayer *separatorLayer;
    int _separatorPosition;
    UIColor *_separatorLineColor;
    double _separatorWidth;
    double _separatorHeight;
}

@property(readonly, nonatomic) int separatorPosition; // @synthesize separatorPosition=_separatorPosition;
@property(readonly, nonatomic) double separatorHeight; // @synthesize separatorHeight=_separatorHeight;
@property(readonly, nonatomic) double separatorWidth; // @synthesize separatorWidth=_separatorWidth;
@property(readonly, nonatomic) UIColor *separatorLineColor; // @synthesize separatorLineColor=_separatorLineColor;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 separatorColor:(id)arg3 separatorWidth:(double)arg4 separatorHeight:(double)arg5 separatorPosition:(int)arg6;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 separatorColor:(id)arg3 separatorWidth:(double)arg4 separatorPosition:(int)arg5;

@end
