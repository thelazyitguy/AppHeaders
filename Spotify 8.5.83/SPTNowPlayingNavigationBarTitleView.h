//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import "SPTThemableView-Protocol.h"

@class NSArray, NSDictionary, NSString, NSURL, SPTNowPlayingMarqueeLabel, SPTTheme, UILabel, UIView;
@protocol SPTThemableViewLayoutDelegate;

@interface SPTNowPlayingNavigationBarTitleView : UIControl <SPTThemableView>
{
    _Bool _useLandscapeLayout;
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    UILabel *_entityDescriptionLabel;
    SPTNowPlayingMarqueeLabel *_entityNameLabel;
    NSArray *_layoutConstraints;
    UIView *_invisibleCenteringView;
    SPTTheme *_theme;
    UILabel *_seperatorLabel;
    NSDictionary *_attributes;
    NSURL *_contextURI;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *contextURI; // @synthesize contextURI=_contextURI;
@property(retain, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(retain, nonatomic) UILabel *seperatorLabel; // @synthesize seperatorLabel=_seperatorLabel;
@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) UIView *invisibleCenteringView; // @synthesize invisibleCenteringView=_invisibleCenteringView;
@property(copy, nonatomic) NSArray *layoutConstraints; // @synthesize layoutConstraints=_layoutConstraints;
@property(nonatomic) _Bool useLandscapeLayout; // @synthesize useLandscapeLayout=_useLandscapeLayout;
@property(retain, nonatomic) SPTNowPlayingMarqueeLabel *entityNameLabel; // @synthesize entityNameLabel=_entityNameLabel;
@property(retain, nonatomic) UILabel *entityDescriptionLabel; // @synthesize entityDescriptionLabel=_entityDescriptionLabel;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void)statusBarOrientationDidChange:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (void)applyThemeLayout;
- (void)setHighlighted:(_Bool)arg1;
- (void)updateEntityLabelsWithAttributedDescription:(id)arg1 name:(id)arg2 transition:(id)arg3;
- (void)updateEntityLabelsWithContextURI:(id)arg1 description:(id)arg2 name:(id)arg3 highlighted:(_Bool)arg4 transition:(id)arg5;
- (void)updateViewLayout;
- (void)updateConstraints;
- (void)updateAttributes:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 theme:(id)arg2 attributes:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

