//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface YTWrapperFlatView : UIView
{
    UIView *_view;
    UIView *_loadingView;
    double _loadingFrameOffsetY;
}

- (void).cxx_destruct;
@property(nonatomic) double loadingFrameOffsetY; // @synthesize loadingFrameOffsetY=_loadingFrameOffsetY;
@property(retain, nonatomic) UIView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
- (void)layoutSubviews;

@end

