//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

#import <Module_Framework/YTPageStyling-Protocol.h>

@class NSString, UIColor;

@interface YTLabel : UILabel <YTPageStyling>
{
    long long _pageStyle;
    long long _typeKind;
    long long _typeVariant;
    UIColor *_textColor;
    struct UIEdgeInsets _edgeInsets;
}

- (void).cxx_destruct;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
- (void)applyTypeStyle;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (id)accessibilityLabel;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTypeVariant:(long long)arg1;
- (void)setTypeKind:(long long)arg1 typeVariant:(long long)arg2;
- (void)setTypeKind:(long long)arg1;
- (void)drawTextInRect:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

