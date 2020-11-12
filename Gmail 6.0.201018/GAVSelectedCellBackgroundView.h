//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface GAVSelectedCellBackgroundView : UIView
{
    double _cornerRadius;
    unsigned long long _roundingCorners;
    UIColor *_fillColor;
    struct UIEdgeInsets _edgeInsets;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(readonly, nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(readonly, nonatomic) unsigned long long roundingCorners; // @synthesize roundingCorners=_roundingCorners;
@property(readonly, nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithCornerRadius:(double)arg1 roundingCorners:(unsigned long long)arg2 edgeInsets:(struct UIEdgeInsets)arg3 fillColor:(id)arg4;

@end
