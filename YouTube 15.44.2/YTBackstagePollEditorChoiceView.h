//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Module_Framework/YTPageStyling-Protocol.h>

@class FLXLayout, NSString, UITextField, YTEngagementToolbarBaseButton, YTLabel, YTSeparatorView;
@protocol YTBackstagePollEditorChoiceViewDelegate;

@interface YTBackstagePollEditorChoiceView : UIView <YTPageStyling>
{
    long long _pageStyle;
    id <YTBackstagePollEditorChoiceViewDelegate> _delegate;
    double _preferredMaxLayoutWidth;
    UITextField *_textField;
    YTLabel *_characterLimitView;
    unsigned long long _characterLimit;
    YTEngagementToolbarBaseButton *_removeButton;
    YTSeparatorView *_hairline;
    FLXLayout *_layout;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FLXLayout *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) YTSeparatorView *hairline; // @synthesize hairline=_hairline;
@property(retain, nonatomic) YTEngagementToolbarBaseButton *removeButton; // @synthesize removeButton=_removeButton;
@property(nonatomic) unsigned long long characterLimit; // @synthesize characterLimit=_characterLimit;
@property(retain, nonatomic) YTLabel *characterLimitView; // @synthesize characterLimitView=_characterLimitView;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(nonatomic) double preferredMaxLayoutWidth; // @synthesize preferredMaxLayoutWidth=_preferredMaxLayoutWidth;
@property(nonatomic) __weak id <YTBackstagePollEditorChoiceViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateCharacterLimitViewTextColor;
- (void)updateCharacterLimitView;
- (void)textFieldDidChange;
- (void)didTapRemoveButton;
- (id)root;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (_Bool)becomeFirstResponder;
@property(retain, nonatomic) NSString *text;
- (void)setRenderer:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

