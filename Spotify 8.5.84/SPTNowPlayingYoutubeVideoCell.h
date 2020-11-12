//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class GLUELabel, NSArray, SPTTheme, UIView;

@interface SPTNowPlayingYoutubeVideoCell : UICollectionViewCell
{
    SPTTheme *_theme;
    GLUELabel *_messageLabel;
    UIView *_windowedContentView;
    NSArray *_windowedContentViewConstraints;
    struct UIEdgeInsets _windowedContentInsets;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *windowedContentViewConstraints; // @synthesize windowedContentViewConstraints=_windowedContentViewConstraints;
@property(retain, nonatomic) UIView *windowedContentView; // @synthesize windowedContentView=_windowedContentView;
@property(retain, nonatomic) GLUELabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(nonatomic) struct UIEdgeInsets windowedContentInsets; // @synthesize windowedContentInsets=_windowedContentInsets;
- (void)prepareForReuse;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end
