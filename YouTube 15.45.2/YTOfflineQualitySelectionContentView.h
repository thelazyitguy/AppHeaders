//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "YTPageStyleProvider-Protocol.h"
#import "YTPageStyling-Protocol.h"

@class NSString, YTFormatOptionsView, YTIOfflineabilityFormat, YTQTMButton;

@interface YTOfflineQualitySelectionContentView : UIView <YTPageStyleProvider, YTPageStyling>
{
    YTQTMButton *_rememberButton;
    UIView *_separatorOne;
    YTFormatOptionsView *_optionsView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) YTFormatOptionsView *optionsView; // @synthesize optionsView=_optionsView;
- (void)didPressRememberCheckbox;
@property(readonly, nonatomic) long long pageStyle;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
@property(readonly, nonatomic, getter=isRememberChecked) _Bool rememberChecked;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
@property(readonly, nonatomic) YTIOfflineabilityFormat *selectedFormat;
- (id)initWithOfflineFormatOptionsView:(id)arg1 rememberChecked:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
