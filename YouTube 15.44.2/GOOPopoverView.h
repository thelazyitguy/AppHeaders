//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;
@protocol GOOPopoverViewDelegate;

@interface GOOPopoverView : UIView
{
    UIView *_contentView;
    UIColor *_backgroundColor;
    struct CGPoint _point;
    int _arrowEdge;
    double _arrowOffset;
    id <GOOPopoverViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <GOOPopoverViewDelegate> delegate; // @synthesize delegate=_delegate;
- (struct UIEdgeInsets)minimumInsetsFromDeviceEdges;
- (struct UIEdgeInsets)contentInsets;
- (unsigned long long)arrowDirection;
- (void)setFrame:(struct CGRect)arg1;
- (void)showAtPoint:(struct CGPoint)arg1 arrowDirections:(unsigned long long)arg2;
- (id)borderImageForBounds:(struct CGRect)arg1;
- (void)pointAtRect:(struct CGRect)arg1 arrowDirections:(unsigned long long)arg2;
- (void)pointAtView:(id)arg1 withOffset:(struct CGSize)arg2 arrowDirections:(unsigned long long)arg3;
- (void)pointAtView:(id)arg1 arrowDirections:(unsigned long long)arg2;
- (void)didAnimateOut;
- (void)animateOut;
- (void)prepareToAnimateOut;
- (void)animateInWithDuration:(double)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)safeAreaInsetsDidChange;
- (void)setBackgroundColor:(id)arg1;
- (id)backgroundColor;
- (_Bool)shouldDisplayArrow;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1 contentView:(id)arg2;

@end
