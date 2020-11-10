//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Module_Framework/YTPageStyling-Protocol.h>

@class NSArray, NSMutableArray, NSString, YTQTMButton;

@interface YTFormatOptionsView : UIView <YTPageStyling>
{
    NSMutableArray *_optionViews;
    NSMutableArray *_optionSizeLabels;
    NSArray *_formats;
    YTQTMButton *_selectedFormatOptionView;
    struct UIEdgeInsets _contentInsets;
}

- (void).cxx_destruct;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
- (void)updateOptionButtonInsets:(id)arg1 withSizeLabel:(id)arg2;
- (id)formatOptionButtonWithTitle:(id)arg1;
- (void)didSelectFormatOptionView:(id)arg1;
- (id)accessibilityElements;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (void)updateSizeEstimateStrings:(id)arg1 animated:(_Bool)arg2;
- (id)selectedFormat;
- (long long)count;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (long long)indexOfOptionWithFormat:(int)arg1;
- (void)setSelectedFormatOptionWithIndex:(unsigned long long)arg1;
- (id)initWithFormats:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

