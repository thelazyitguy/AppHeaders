//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "YTPageStyleProvider-Protocol.h"
#import "YTPageStyling-Protocol.h"

@class GOOTextField, NSString, YTFormattedStringLabel, YTIChannelProfileNameEditorRenderer;
@protocol YTPageStyleProvider;

@interface YTChannelProfileNameEditorView : UIView <YTPageStyling, YTPageStyleProvider>
{
    long long _pageStyle;
    YTIChannelProfileNameEditorRenderer *_entry;
    YTFormattedStringLabel *_nameRulesEditHint;
    id <YTPageStyleProvider> _pageStyleDelegate;
    GOOTextField *_givenNameTextField;
    GOOTextField *_familyNameTextField;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) GOOTextField *familyNameTextField; // @synthesize familyNameTextField=_familyNameTextField;
@property(readonly, nonatomic) GOOTextField *givenNameTextField; // @synthesize givenNameTextField=_givenNameTextField;
@property(nonatomic) __weak id <YTPageStyleProvider> pageStyleDelegate; // @synthesize pageStyleDelegate=_pageStyleDelegate;
- (void)setEntry:(id)arg1 formattedStringDelegate:(id)arg2;
- (void)applyStyleToTextField:(id)arg1;
- (void)layoutSubviews;
@property(readonly, nonatomic) long long pageStyle;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

