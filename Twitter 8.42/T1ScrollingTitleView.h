//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UIColor, UIFont, UIScrollView;
@protocol T1ScrollingTitleViewDataSource;

@interface T1ScrollingTitleView : UIView
{
    _Bool _compactMode;
    UIFont *_titleFont;
    UIFont *_subtitleFont;
    UIColor *_titleColor;
    UIColor *_subtitleColor;
    id <T1ScrollingTitleViewDataSource> _dataSource;
    UIScrollView *_titleScrollView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIScrollView *titleScrollView; // @synthesize titleScrollView=_titleScrollView;
@property(nonatomic) __weak id <T1ScrollingTitleViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UIColor *subtitleColor; // @synthesize subtitleColor=_subtitleColor;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(nonatomic) _Bool compactMode; // @synthesize compactMode=_compactMode;
@property(retain, nonatomic) UIFont *subtitleFont; // @synthesize subtitleFont=_subtitleFont;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
- (long long)_indexForOffset:(double)arg1;
- (double)_maxOffsetY;
- (id)_viewForTitleTuple:(id)arg1;
- (void)reloadData;
@property(nonatomic) struct CGPoint contentOffset;
@property(readonly, nonatomic) NSArray *titleViews;
- (void)_layoutTitleViewSubviews:(id)arg1;
- (void)layoutSubviews;
- (id)init;

@end
