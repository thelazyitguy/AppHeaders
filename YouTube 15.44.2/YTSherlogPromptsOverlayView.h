//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, YTSherlogPromptsMessageView;

@interface YTSherlogPromptsOverlayView : UIView
{
    YTSherlogPromptsMessageView *_promptsMessageView;
    NSLayoutConstraint *_topConstraint;
    double _topOffset;
}

- (void).cxx_destruct;
@property(nonatomic) double topOffset; // @synthesize topOffset=_topOffset;
@property(retain, nonatomic) NSLayoutConstraint *topConstraint; // @synthesize topConstraint=_topConstraint;
@property(retain, nonatomic) YTSherlogPromptsMessageView *promptsMessageView; // @synthesize promptsMessageView=_promptsMessageView;
- (void)pan:(id)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (double)sideMargin;
- (void)setupPromptsMessageViewConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end
