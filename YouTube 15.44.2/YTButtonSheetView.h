//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Module_Framework/YTPageStyling-Protocol.h>

@class NSArray, NSString, YTFormattedStringLabel;
@protocol YTButtonSheetViewDelegate;

@interface YTButtonSheetView : UIView <YTPageStyling>
{
    NSArray *_buttons;
    id <YTButtonSheetViewDelegate> _delegate;
    NSArray *_buttonRenderers;
    YTFormattedStringLabel *_titleLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) YTFormattedStringLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
@property(retain, nonatomic) NSArray *buttonRenderers; // @synthesize buttonRenderers=_buttonRenderers;
@property(nonatomic) __weak id <YTButtonSheetViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)buttonWithRenderer:(id)arg1;
- (void)didTap:(id)arg1;
- (_Bool)hasTitle;
- (struct CGSize)preferredButtonSizeForSheetSize:(struct CGSize)arg1;
- (CDStruct_e42075da)sheetPropertiesForMaxSize:(struct CGSize)arg1;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (id)accessibilityElements;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setTitle:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
